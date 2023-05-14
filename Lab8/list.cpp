// Задание 15 C7
// Элементы двунаправленного списка имеют структуру DSP: Шифр детали, наименование, расценка, вес, указатель предыдущего, указатель последующего.
// Добавление по шифру
// Удаление по наименованию
// Подсчитать количество элементов списка, шифры деталей, в которых встречаются в списке только 1 раз, и вывести их на печать.

#include <iostream>
#include <string>

using namespace std;

struct Data {
    string cipher; // Шифр
    string name;   // Наименование
    int price;     // Расценка
    int weight;    // Вес
};

struct List {
    Data data;
    List *prev = nullptr;
    List *next = nullptr;
};

// Создание пустого списка
List *list_create() {
    return nullptr;
}

// Удаление списка
void list_delete(List *head) {
    while(head != nullptr) { // Проходим по списку и удаляем каждый элемент
        List *temp_ptr = head->next;
        delete head;
        head = temp_ptr;
    }
}

// Добавление элемента в список по шифру
List *list_add(List *head, Data data) {
    List *new_element = new List; // Создаем элемент списка
    new_element->data = data;

    if(head == nullptr) { // Если список пуст, возвращаем созданный элемент
        return new_element;
    }

    List *ptr = head;
    List *prev_ptr = nullptr;
    while(ptr != nullptr && data.cipher >= ptr->data.cipher) { // Проходим по списку, пока не дойдем до элемента, чей шифр больше шифра добавляемого элемента, или пока не дойдем до конца списка
        prev_ptr = ptr;
        ptr = ptr->next;
    }
    
    if(prev_ptr != nullptr) { // Если перед местом вставки есть элемент
        prev_ptr->next = new_element;
        new_element->prev = prev_ptr;
    }

    if(ptr != nullptr) { // Если после места вставки есть элемент
        new_element->next = ptr;
        ptr->prev = new_element;
    }

    if(ptr == head) // Если вставляем элемент перед началом списка, меняем начало на вставляемый элемент
        head = new_element;

    return head;
}

// Удаление элемента из списка по наименованию
List *list_remove(List *head, string name) {
    List *ptr = head;
    while(ptr != nullptr) { // Проходим по списку
        List *prev_ptr = ptr;
        ptr = ptr->next;

        if(prev_ptr->data.name == name) { // Если наименования совпадают, удаляем элемент
            if(prev_ptr == head) { // Сдвигаем начало списка, если удаляемый элемент находится в начале
                head = ptr;
                if(ptr != nullptr)
                    ptr->prev = nullptr;
            }
            else {
                prev_ptr->prev->next = ptr;
                if(ptr != nullptr)
                    ptr->prev = prev_ptr->prev;
            }
            delete prev_ptr;
        }
    }

    return head;
}

// Вывод списка
void list_print(List *head) {
    while(head != nullptr) { // Проходим по списку и выводим каждый элемент
        cout << "Шифр: " << head->data.cipher << "; Наименование: " << head->data.name << "; Цена: " << head->data.price << "; Вес: " << head->data.weight << endl;
        head = head->next;
    }
}

// Вывод списка в обратном порядке
void list_print_reverse(List *head) {
    List *prev;
    while(head != nullptr) { // Ищем конец списка
        prev = head;
        head = head->next;
    }

    while(prev != nullptr) { // Проходим по списку в обратном порядке и выводим каждый элемент
        cout << "Шифр: " << prev->data.cipher << "; Наименование: " << prev->data.name << "; Цена: " << prev->data.price << "; Вес: " << prev->data.weight << endl;
        prev = prev->prev;
    }
}

// Решение задачи: подсчитать количество элементов списка, шифры деталей, в которых встречаются в списке только 1 раз, и вывести их на печать.
// Т.к. список является самоорганизующимся и отсортирован по шифрам, все одинаковые шифры в списке стоят рядом, за счет чего можно рассматривать
// отдельные кластеры с одинаковыми шифрами: (1) <-> (2) <-> (3 <-> 3) <-> (4) <-> (5 <-> 5 <-> 5) - 3 уникальных шифра.
void list_task(List *head) {
    int total_amount = 0; // Количество уникальных шифров

    if(head != nullptr) { // Если список не пуст
        Data *cur_cipher = &head->data; // Текущий рассматриваемый шифр
        int cipher_amount = 0;
        while(head != nullptr) { // Проходим по списку
            if(head->data.cipher == cur_cipher->cipher) { // Если шифр равен текущему рассматриваемому, увеличиваем счетчик
                cipher_amount++;
            }
            else { // Если в списке идет деталь с новым шифром
                if(cipher_amount == 1) { // Если шифр встретился 1 раз, выводим деталь, содержащую его
                    cout << "Шифр: " << cur_cipher->cipher << "; Наименование: " << cur_cipher->name << "; Цена: " << cur_cipher->price << "; Вес: " << cur_cipher->weight << endl;
                    total_amount++;
                }
                cur_cipher = &head->data;
                cipher_amount =  1;
            }
            head = head->next;
        }
        if(cipher_amount == 1) { // Проверяем, уникален ли шифр последнего кластера
            cout << "Шифр: " << cur_cipher->cipher << "; Наименование: " << cur_cipher->name << "; Цена: " << cur_cipher->price << "; Вес: " << cur_cipher->weight << endl;
            total_amount++;
        }
    }

    cout << "Количество деталей, шифры которых не повторяются: " << total_amount << endl;
}

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    List *list = list_create(); // Создаем пустой список

    int input; // Действие
    do {
        cout << string(40, '-') << endl;
        cout << "Введите действие:\n" << "1) Завершить программу\n" << "2) Добавить деталь в список\n" << "3) Удалить деталь из списка\n" << "4) Вывести список\n" << "5) Вывести список в обратном порядке\n" << "6) Решить задачу" << endl;
        cin >> input;
        cout << endl;

        switch(input) {
            case 2: { // Добавляем деталь в список
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

                list = list_add(list, {cipher, name, price, weight});
                break;
            }
            case 3: { // Удаляем деталь из списка
                string name;
                cout << "Наименование: ";
                cin >> name;

                list = list_remove(list, name);
                break;
            }
            case 4: // Выводим список
                list_print(list);
                break;
            case 5: // Выводим список в обратном порядке
                list_print_reverse(list);
                break;
            case 6: // Решаем задачу
                list_task(list);
                break;
        }
    } while(input != 1); // Завершить программу

    list_delete(list); // Удаляем список (очищаем память)

    return 0;
}
