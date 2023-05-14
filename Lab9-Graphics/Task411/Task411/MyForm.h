#pragma once

namespace Task411 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ GraphBox;
	private: System::Windows::Forms::MainMenu^ GraphMainMenu;

	private: System::Windows::Forms::MenuItem^ GraphsMenu;
	private: System::Windows::Forms::MenuItem^ Graph1Item;
	private: System::Windows::Forms::MenuItem^ Graph2Item;
	private: System::Windows::Forms::MenuItem^ Graph3Item;
	private: System::Windows::Forms::MenuItem^ Graph4Item;


	private: System::Windows::Forms::Label^ XminLabel;
	private: System::Windows::Forms::Label^ XmaxLabel;
	private: System::Windows::Forms::NumericUpDown^ XminNumeric;
	private: System::Windows::Forms::NumericUpDown^ XmaxNumeric;
	private: System::Windows::Forms::MenuItem^ ColorsMenu;
	private: System::Windows::Forms::MenuItem^ Graph1ColorItem;
	private: System::Windows::Forms::MenuItem^ Graph2ColorItem;
	private: System::Windows::Forms::MenuItem^ Graph3ColorItem;
	private: System::Windows::Forms::MenuItem^ Graph4ColorItem;
	private: System::Windows::Forms::ColorDialog^ GraphColorDialog;









	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->GraphBox = (gcnew System::Windows::Forms::PictureBox());
			this->GraphMainMenu = (gcnew System::Windows::Forms::MainMenu(this->components));
			this->GraphsMenu = (gcnew System::Windows::Forms::MenuItem());
			this->Graph1Item = (gcnew System::Windows::Forms::MenuItem());
			this->Graph2Item = (gcnew System::Windows::Forms::MenuItem());
			this->Graph3Item = (gcnew System::Windows::Forms::MenuItem());
			this->Graph4Item = (gcnew System::Windows::Forms::MenuItem());
			this->ColorsMenu = (gcnew System::Windows::Forms::MenuItem());
			this->Graph1ColorItem = (gcnew System::Windows::Forms::MenuItem());
			this->Graph2ColorItem = (gcnew System::Windows::Forms::MenuItem());
			this->Graph3ColorItem = (gcnew System::Windows::Forms::MenuItem());
			this->Graph4ColorItem = (gcnew System::Windows::Forms::MenuItem());
			this->XminLabel = (gcnew System::Windows::Forms::Label());
			this->XmaxLabel = (gcnew System::Windows::Forms::Label());
			this->XminNumeric = (gcnew System::Windows::Forms::NumericUpDown());
			this->XmaxNumeric = (gcnew System::Windows::Forms::NumericUpDown());
			this->GraphColorDialog = (gcnew System::Windows::Forms::ColorDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GraphBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->XminNumeric))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->XmaxNumeric))->BeginInit();
			this->SuspendLayout();
			// 
			// GraphBox
			// 
			this->GraphBox->Location = System::Drawing::Point(14, 12);
			this->GraphBox->Name = L"GraphBox";
			this->GraphBox->Size = System::Drawing::Size(500, 500);
			this->GraphBox->TabIndex = 0;
			this->GraphBox->TabStop = false;
			this->GraphBox->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::GraphBox_Paint);
			// 
			// GraphMainMenu
			// 
			this->GraphMainMenu->MenuItems->AddRange(gcnew cli::array< System::Windows::Forms::MenuItem^  >(2) { this->GraphsMenu, this->ColorsMenu });
			// 
			// GraphsMenu
			// 
			this->GraphsMenu->Index = 0;
			this->GraphsMenu->MenuItems->AddRange(gcnew cli::array< System::Windows::Forms::MenuItem^  >(4) {
				this->Graph1Item, this->Graph2Item,
					this->Graph3Item, this->Graph4Item
			});
			this->GraphsMenu->Text = L"графики";
			// 
			// Graph1Item
			// 
			this->Graph1Item->Checked = true;
			this->Graph1Item->Index = 0;
			this->Graph1Item->Text = L"x - sin(x/2)";
			this->Graph1Item->Click += gcnew System::EventHandler(this, &MyForm::Graph1Item_Click);
			// 
			// Graph2Item
			// 
			this->Graph2Item->Index = 1;
			this->Graph2Item->Text = L"x - 2sin(x)";
			this->Graph2Item->Click += gcnew System::EventHandler(this, &MyForm::Graph2Item_Click);
			// 
			// Graph3Item
			// 
			this->Graph3Item->Checked = true;
			this->Graph3Item->Index = 2;
			this->Graph3Item->Text = L"x - sin(2x)";
			this->Graph3Item->Click += gcnew System::EventHandler(this, &MyForm::Graph3Item_Click);
			// 
			// Graph4Item
			// 
			this->Graph4Item->Index = 3;
			this->Graph4Item->Text = L"x - sin(x)";
			this->Graph4Item->Click += gcnew System::EventHandler(this, &MyForm::Graph4Item_Click);
			// 
			// ColorsMenu
			// 
			this->ColorsMenu->Index = 1;
			this->ColorsMenu->MenuItems->AddRange(gcnew cli::array< System::Windows::Forms::MenuItem^  >(4) {
				this->Graph1ColorItem, this->Graph2ColorItem,
					this->Graph3ColorItem, this->Graph4ColorItem
			});
			this->ColorsMenu->Text = L"цвета графиков";
			// 
			// Graph1ColorItem
			// 
			this->Graph1ColorItem->Index = 0;
			this->Graph1ColorItem->Text = L"x - sin(x/2)";
			this->Graph1ColorItem->Click += gcnew System::EventHandler(this, &MyForm::Graph1ColorItem_Click);
			// 
			// Graph2ColorItem
			// 
			this->Graph2ColorItem->Index = 1;
			this->Graph2ColorItem->Text = L"x - 2sin(x)";
			this->Graph2ColorItem->Click += gcnew System::EventHandler(this, &MyForm::Graph2ColorItem_Click);
			// 
			// Graph3ColorItem
			// 
			this->Graph3ColorItem->Index = 2;
			this->Graph3ColorItem->Text = L"x - sin(2x)";
			this->Graph3ColorItem->Click += gcnew System::EventHandler(this, &MyForm::Graph3ColorItem_Click);
			// 
			// Graph4ColorItem
			// 
			this->Graph4ColorItem->Index = 3;
			this->Graph4ColorItem->Text = L"x - sin(x)";
			this->Graph4ColorItem->Click += gcnew System::EventHandler(this, &MyForm::Graph4ColorItem_Click);
			// 
			// XminLabel
			// 
			this->XminLabel->AutoSize = true;
			this->XminLabel->Location = System::Drawing::Point(202, 516);
			this->XminLabel->Name = L"XminLabel";
			this->XminLabel->Size = System::Drawing::Size(30, 13);
			this->XminLabel->TabIndex = 3;
			this->XminLabel->Text = L"Xmin";
			// 
			// XmaxLabel
			// 
			this->XmaxLabel->AutoSize = true;
			this->XmaxLabel->Location = System::Drawing::Point(303, 516);
			this->XmaxLabel->Name = L"XmaxLabel";
			this->XmaxLabel->Size = System::Drawing::Size(33, 13);
			this->XmaxLabel->TabIndex = 4;
			this->XmaxLabel->Text = L"Xmax";
			// 
			// XminNumeric
			// 
			this->XminNumeric->Location = System::Drawing::Point(175, 532);
			this->XminNumeric->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->XminNumeric->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->XminNumeric->Name = L"XminNumeric";
			this->XminNumeric->Size = System::Drawing::Size(84, 20);
			this->XminNumeric->TabIndex = 5;
			this->XminNumeric->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, System::Int32::MinValue });
			this->XminNumeric->ValueChanged += gcnew System::EventHandler(this, &MyForm::XminNumeric_ValueChanged);
			// 
			// XmaxNumeric
			// 
			this->XmaxNumeric->Location = System::Drawing::Point(278, 532);
			this->XmaxNumeric->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->XmaxNumeric->Name = L"XmaxNumeric";
			this->XmaxNumeric->Size = System::Drawing::Size(84, 20);
			this->XmaxNumeric->TabIndex = 6;
			this->XmaxNumeric->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->XmaxNumeric->ValueChanged += gcnew System::EventHandler(this, &MyForm::XmaxNumeric_ValueChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(526, 564);
			this->Controls->Add(this->XmaxNumeric);
			this->Controls->Add(this->XminNumeric);
			this->Controls->Add(this->XmaxLabel);
			this->Controls->Add(this->XminLabel);
			this->Controls->Add(this->GraphBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Menu = this->GraphMainMenu;
			this->Name = L"MyForm";
			this->Text = L"GraphForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GraphBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->XminNumeric))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->XmaxNumeric))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// Функция 1 графика
	private: float f1(float x) {
		return x - Math::Sin(x / 2);
	}
	
	// Функция 2 графика
	private: float f2(float x) {
		return x - 2 * Math::Sin(x);
	}

	// Функция 3 графика
	private: float f3(float x) {
		return x - Math::Sin(2 * x);
	}
	
	// Функция 4 графика
	private: float f4(float x) {
		return x - Math::Sin(x);
	}

	private: Drawing::Color Graph1Color = Drawing::Color::Red; // Цвет 1 графика
	private: Drawing::Color Graph2Color = Drawing::Color::Green; // Цвет 2 графика
	private: Drawing::Color Graph3Color = Drawing::Color::Blue; // Цвет 3 графика
	private: Drawing::Color Graph4Color = Drawing::Color::Yellow; // Цвет 4 графика

	private: System::Void GraphBox_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		int x_min = Decimal::ToInt32(XminNumeric->Value);
		int x_max = Decimal::ToInt32(XmaxNumeric->Value);
		int total = x_max - x_min; // Всего клеточек
		float cell_size = 500.0f / total; // Размер клеточки

		// Рисуем оси
		Pen^ axes_pen = gcnew Pen(Brushes::Black);
		axes_pen->Width = 3;
		e->Graphics->DrawLine(axes_pen, -x_min * cell_size, 0.0f, -x_min * cell_size, 500.0f); // Ось Y
		e->Graphics->DrawLine(axes_pen, -x_min * cell_size, 0.0f, -x_min * cell_size - 100.0f / total, 200.0f / total); // Стрелочка на оси Y
		e->Graphics->DrawLine(axes_pen, -x_min * cell_size, 0.0f, -x_min * cell_size + 100.0f / total, 200.0f / total); // Стрелочка на оси Y
		e->Graphics->DrawLine(axes_pen, 0, 250, 500, 250); // Ось X
		e->Graphics->DrawLine(axes_pen, 500.0f, 250.0f, 500.0f - 200.0f / total, 250.0f - 100.0f / total); // Стрелочка на оси X
		e->Graphics->DrawLine(axes_pen, 500.0f, 250.0f, 500.0f - 200.0f / total, 250.0f + 100.0f / total); // Стрелочка на оси X

		// Рисуем сетку
		Pen^ grid_pen = gcnew Pen(Brushes::Black);
		grid_pen->DashStyle = Drawing2D::DashStyle::DashDot;
		for (int i = x_min; i <= x_max; i++) { // Вертикальные линии
			e->Graphics->DrawLine(grid_pen, (i - x_min) * cell_size, 0.0f, (i - x_min) * cell_size, 500.0f);
		}
		for (int i = 0; i <= total / 2; i++) { // Горизонтальные линии
			e->Graphics->DrawLine(grid_pen, 0.0f, 250.0f - (total / 2 - i) * cell_size, 500.0f, 250.0f - (total / 2 - i) * cell_size);
			e->Graphics->DrawLine(grid_pen, 0.0f, 250.0f + (total / 2 - i) * cell_size, 500.0f, 250.0f + (total / 2 - i) * cell_size);
		}

		// Отмечаем начало координат
		if(total < 40)
			e->Graphics->DrawString("0", gcnew Drawing::Font("sans-serif", 14 * 20 / total), Brushes::Black, 250.0f - cell_size * (x_max + x_min + 1.5f) / 2, 250.0f);

		// Рисуем 1 график
		if (Graph1Item->Checked) {
			Pen^ graph_pen = gcnew Pen(gcnew SolidBrush(Graph1Color));
			graph_pen->Width = 2;
			for (float i = 0; i <= 500.0f; i += 0.1f) {
				float x = i / cell_size + x_min;
				float y = f1(x);
				e->Graphics->DrawEllipse(graph_pen, i, 250.0f - y * cell_size, 1.0f, 1.0f);
			}
		}

		// Рисуем 2 график
		if (Graph2Item->Checked) {
			Pen^ graph_pen = gcnew Pen(gcnew SolidBrush(Graph2Color));
			graph_pen->Width = 2;
			for (float i = 0; i <= 500.0f; i += 0.1f) {
				float x = i / cell_size + x_min;
				float y = f2(x);
				e->Graphics->DrawEllipse(graph_pen, i, 250.0f - y * cell_size, 1.0f, 1.0f);
			}
		}

		// Рисуем 3 график
		if (Graph3Item->Checked) {
			Pen^ graph_pen = gcnew Pen(gcnew SolidBrush(Graph3Color));
			graph_pen->Width = 2;
			for (float i = 0; i <= 500.0f; i += 0.1f) {
				float x = i / cell_size + x_min;
				float y = f3(x);
				e->Graphics->DrawEllipse(graph_pen, i, 250.0f - y * cell_size, 1.0f, 1.0f);
			}
		}

		// Рисуем 4 график
		if (Graph4Item->Checked) {
			Pen^ graph_pen = gcnew Pen(gcnew SolidBrush(Graph4Color));
			graph_pen->Width = 2;
			for (float i = 0; i <= 500.0f; i += 0.1f) {
				float x = i / cell_size + x_min;
				float y = f4(x);
				e->Graphics->DrawEllipse(graph_pen, i, 250.0f - y * cell_size, 1.0f, 1.0f);
			}
		}
	}

	private: System::Void XminNumeric_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		GraphBox->Invalidate(); // Перерисовываем графики при изменении x_min
	}

	private: System::Void XmaxNumeric_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		GraphBox->Invalidate(); // Перерисовываем графики при изменении x_max
	}

	private: System::Void Graph1Item_Click(System::Object^ sender, System::EventArgs^ e) {
		Graph1Item->Checked = !Graph1Item->Checked; // Вкл/выкл 1 график
		GraphBox->Invalidate(); // Перерисовываем графики
	}

	private: System::Void Graph2Item_Click(System::Object^ sender, System::EventArgs^ e) {
		Graph2Item->Checked = !Graph2Item->Checked; // Вкл/выкл 2 график
		GraphBox->Invalidate(); // Перерисовываем графики
	}

	private: System::Void Graph3Item_Click(System::Object^ sender, System::EventArgs^ e) {
		Graph3Item->Checked = !Graph3Item->Checked; // Вкл/выкл 3 график
		GraphBox->Invalidate(); // Перерисовываем графики
	}

	private: System::Void Graph4Item_Click(System::Object^ sender, System::EventArgs^ e) {
		Graph4Item->Checked = !Graph4Item->Checked; // Вкл/выкл 4 график
		GraphBox->Invalidate(); // Перерисовываем графики
	}

	private: System::Void Graph1ColorItem_Click(System::Object^ sender, System::EventArgs^ e) {
		GraphColorDialog->Color = Graph1Color;
		if (GraphColorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			Graph1Color = GraphColorDialog->Color; // Меняем цвет 1 графика
		GraphBox->Invalidate(); // Перерисовываем графики
	}

	private: System::Void Graph2ColorItem_Click(System::Object^ sender, System::EventArgs^ e) {
		GraphColorDialog->Color = Graph2Color;
		if (GraphColorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			Graph2Color = GraphColorDialog->Color; // Меняем цвет 2 графика
		GraphBox->Invalidate(); // Перерисовываем графики
	}

	private: System::Void Graph3ColorItem_Click(System::Object^ sender, System::EventArgs^ e) {
		GraphColorDialog->Color = Graph3Color;
		if (GraphColorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			Graph3Color = GraphColorDialog->Color; // Меняем цвет 3 графика
		GraphBox->Invalidate(); // Перерисовываем графики
	}

	private: System::Void Graph4ColorItem_Click(System::Object^ sender, System::EventArgs^ e) {
		GraphColorDialog->Color = Graph4Color;
		if (GraphColorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			Graph4Color = GraphColorDialog->Color; // Меняем цвет 4 графика
		GraphBox->Invalidate(); // Перерисовываем графики
	}
};
}