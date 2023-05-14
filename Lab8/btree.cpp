// Задание 15 C7
// Элементы двунаправленного списка имеют структуру DSP: Шифр детали, наименование, расценка, вес, указатель предыдущего, указатель последующего.
// Добавление по шифру
// Удаление по наименованию
// Подсчитать количество элементов списка, шифры деталей, в которых встречаются в списке только 1 раз, и вывести их на печать.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Data {
    string cipher; // Шифр
    string name;   // Наименование
    int price;     // Расценка
    int weight;    // Вес
};

struct Tree {
    vector<Data> data; // В бинарных деревьях не предусмотрено хранение элементов с одинаковыми значениями на разных ветках - поэтому храним все в одной ветке с использованием вектора
    Tree *left = nullptr;
    Tree *right = nullptr;
};

// Создание пустого дерева
Tree *tree_create() {
    return nullptr;
}

// Удаление дерева
void tree_delete(Tree *head) {
    if(head != nullptr) { // Проходим по списку и удаляем каждый элемент
        tree_delete(head->left); // Удаляем все на левой ветке
        tree_delete(head->right); // Удаляем все на правой ветке
        delete head;
    }
}

// Добавление элемента в дерево по шифру
Tree *tree_add(Tree *head, Data data) {
    if(head == nullptr) { // Если ветка пустая, возвращаем созданный элемент
        head = new Tree;
        head->data.push_back(data);
    }
    else if(data.cipher == head->data[0].cipher) { // Если шифр равен шифру ветки, добавляем в текущую ветку
        head->data.push_back(data);
    }
    else if(data.cipher < head->data[0].cipher) { // Если шифр меньше, переходим к левой ветке
        head->left = tree_add(head->left, data);
    }
    else { // Если шифр больше, переходим к правой ветке
        head->right = tree_add(head->right, data);
    }
    return head;
}

// Удаление элемента из списка по наименованию
Tree *tree_remove(Tree *head, string name) {
    if(head != nullptr) {
        head->left = tree_remove(head->left, name); // Проходим по элементам левой ветки
        head->right = tree_remove(head->right, name); // Проходим по элементам правой ветки

        for(int i = head->data.size()-1; i >= 0; i--) { // Проверяем все элементы текущей ветки
            if(head->data[i].name == name) {
                head->data.erase(head->data.begin() + i); // Удаляем, если наименование совпадает
            }
        }

        if(head->data.size() == 0) { // Если в ветке не осталось элементов, удаляем ее
            if(head->right == nullptr) { // Если справа нет ветки, заменяем текущую на левую
                Tree *temp = head->left;
                delete head;
                head = temp;
            }
            else if(head->left == nullptr) { // Если слева нет ветки, заменяем текущую на правую
                Tree *temp = head->right;
                delete head;
                head = temp;
            }
            else { // Если есть ветки и слева, и справа, заменяем текущий элемент минимальным в правой ветке
                Tree *node = head->right;
                if(node->left == nullptr) { // Если элемент правой ветки является минимальным
                    head->data = node->data;
                    head->right = node->right;
                    delete node;
                }
                else { // Ищем минимальный элемент
                    while(node->left->left != nullptr)
                        node = node->left;
                    head->data = node->left->data;
                    delete node->left;
                    node->left = nullptr;
                }
            }
        }
    }

    return head;
}

// Вывод дерева
void tree_print(Tree *head) {
    if(head != nullptr) {
        tree_print(head->left); // Выводим элементы левой ветки
        for(auto &i : head->data)
            cout << "Шифр: " << i.cipher << "; Наименование: " << i.name << "; Цена: " << i.price << "; Вес: " << i.weight << endl;
        tree_print(head->right); // Выводим элементы правой ветки
    }
}

// Вывод дерева в обратном порядке
void tree_print_reverse(Tree *head) {
    if(head != nullptr) {
        tree_print_reverse(head->right); // Выводим элементы правой ветки
        for(auto &i : head->data)
            cout << "Шифр: " << i.cipher << "; Наименование: " << i.name << "; Цена: " << i.price << "; Вес: " << i.weight << endl;
        tree_print_reverse(head->left); // Выводим элементы левой ветки
    }
}

// Решаем задачу. Т.к. все элементы с одинаковым шифром хранятся на одной ветке, смотрим на количество элементов, хранящихся в данной ветке
void tree_task(Tree *head, int &total_amount) {
    if(head != nullptr) { // Если дерево не пустое
        tree_task(head->left, total_amount); // Проверяем левую ветку
        if(head->data.size() == 1) { // Если элемент один, засчитываем его
            cout << "Шифр: " << head->data[0].cipher << "; Наименование: " << head->data[0].name << "; Цена: " << head->data[0].price << "; Вес: " << head->data[0].weight << endl;
            total_amount++;
        }
        tree_task(head->right, total_amount); // Проверяем правую ветку
    }
}

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    Tree *tree = tree_create(); // Создаем пустое дерево

    int input; // Действие
    do {
        cout << string(40, '-') << endl;
        cout << "Введите действие:\n" << "1) Завершить программу\n" << "2) Добавить деталь в дерево\n" << "3) Удалить деталь из дерева\n" << "4) Вывести дерево\n" << "5) Вывести дерево в обратном порядке\n" << "6) Решить задачу" << endl;
        cin >> input;
        cout << endl;

        switch(input) {
            case 2: { // Добавляем деталь в дерево
                string cipher, name;
                int price, weight;
                cout << "Шифр: ";
                cin >> cipher;
                cout << "Наименование: ";
                cin >> name;
                cout << "Расценка: ";
                cin >> price;
                cout << "Вес: ";
                cin >> weight;

                tree = tree_add(tree, {cipher, name, price, weight});
                break;
            }
            case 3: { // Удаляем деталь из дерева
                string name;
                cout << "Наименование: ";
                cin >> name;

                tree = tree_remove(tree, name);
                break;
            }
            case 4: // Выводим дерево
                tree_print(tree);
                break;
            case 5: // Выводим дерево в обратном порядке
                tree_print_reverse(tree);
                break;
            case 6: // Решаем задачу
                int total_amount = 0; // Количество уникальных шифров
                tree_task(tree, total_amount);
                cout << "Количество деталей, шифры которых не повторяются: " << total_amount << endl;
                break;
        }
    } while(input != 1); // Завершить программу

    tree_delete(tree); // Удаляем дерево (очищаем память)

    return 0;
}
