#pragma once

namespace Task412 {

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
	private: System::Windows::Forms::NumericUpDown^ XminNumeric1;
	private: System::Windows::Forms::NumericUpDown^ XmaxNumeric1;
	protected:



















	private: System::Windows::Forms::ColorDialog^ GraphColorDialog;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ GraphChart;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ ShowGraph1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ ChangeColor1;
	private: System::Windows::Forms::Button^ ChangeColor2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckBox^ ShowGraph2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ XmaxNumeric2;
	private: System::Windows::Forms::NumericUpDown^ XminNumeric2;
	private: System::Windows::Forms::Button^ ChangeColor3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ ShowGraph3;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ XmaxNumeric3;
	private: System::Windows::Forms::NumericUpDown^ XminNumeric3;
	private: System::Windows::Forms::Button^ ChangeColor4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::CheckBox^ ShowGraph4;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::NumericUpDown^ XmaxNumeric4;
	private: System::Windows::Forms::NumericUpDown^ XminNumeric4;











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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->XminNumeric1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->XmaxNumeric1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->GraphColorDialog = (gcnew System::Windows::Forms::ColorDialog());
			this->GraphChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ShowGraph1 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ChangeColor1 = (gcnew System::Windows::Forms::Button());
			this->ChangeColor2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ShowGraph2 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->XmaxNumeric2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->XminNumeric2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->ChangeColor3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->ShowGraph3 = (gcnew System::Windows::Forms::CheckBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->XmaxNumeric3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->XminNumeric3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->ChangeColor4 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->ShowGraph4 = (gcnew System::Windows::Forms::CheckBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->XmaxNumeric4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->XminNumeric4 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->XminNumeric1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->XmaxNumeric1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GraphChart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->XmaxNumeric2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->XminNumeric2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->XmaxNumeric3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->XminNumeric3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->XmaxNumeric4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->XminNumeric4))->BeginInit();
			this->SuspendLayout();
			// 
			// XminNumeric1
			// 
			this->XminNumeric1->Location = System::Drawing::Point(12, 39);
			this->XminNumeric1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->XminNumeric1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->XminNumeric1->Name = L"XminNumeric1";
			this->XminNumeric1->Size = System::Drawing::Size(84, 20);
			this->XminNumeric1->TabIndex = 5;
			this->XminNumeric1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, System::Int32::MinValue });
			this->XminNumeric1->ValueChanged += gcnew System::EventHandler(this, &MyForm::XminNumeric1_ValueChanged);
			// 
			// XmaxNumeric1
			// 
			this->XmaxNumeric1->Location = System::Drawing::Point(117, 40);
			this->XmaxNumeric1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->XmaxNumeric1->Name = L"XmaxNumeric1";
			this->XmaxNumeric1->Size = System::Drawing::Size(84, 20);
			this->XmaxNumeric1->TabIndex = 6;
			this->XmaxNumeric1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->XmaxNumeric1->ValueChanged += gcnew System::EventHandler(this, &MyForm::XmaxNumeric1_ValueChanged);
			// 
			// GraphChart
			// 
			chartArea1->Name = L"ChartArea1";
			this->GraphChart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->GraphChart->Legends->Add(legend1);
			this->GraphChart->Location = System::Drawing::Point(207, 12);
			this->GraphChart->Name = L"GraphChart";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"x - sin(x/2)";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"x - 2sin(x)";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->Name = L"x - sin(2x)";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Legend = L"Legend1";
			series4->Name = L"x - sin(x)";
			this->GraphChart->Series->Add(series1);
			this->GraphChart->Series->Add(series2);
			this->GraphChart->Series->Add(series3);
			this->GraphChart->Series->Add(series4);
			this->GraphChart->Size = System::Drawing::Size(461, 433);
			this->GraphChart->TabIndex = 7;
			this->GraphChart->Text = L"Графики";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 24);
			this->label1->TabIndex = 8;
			this->label1->Text = L"x - sin(x/2):";
			// 
			// ShowGraph1
			// 
			this->ShowGraph1->AutoSize = true;
			this->ShowGraph1->Location = System::Drawing::Point(126, 17);
			this->ShowGraph1->Name = L"ShowGraph1";
			this->ShowGraph1->Size = System::Drawing::Size(75, 17);
			this->ShowGraph1->TabIndex = 9;
			this->ShowGraph1->Text = L"Показать";
			this->ShowGraph1->UseVisualStyleBackColor = true;
			this->ShowGraph1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ShowGraph1_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(101, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(10, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"-";
			// 
			// ChangeColor1
			// 
			this->ChangeColor1->Location = System::Drawing::Point(12, 66);
			this->ChangeColor1->Name = L"ChangeColor1";
			this->ChangeColor1->Size = System::Drawing::Size(189, 23);
			this->ChangeColor1->TabIndex = 11;
			this->ChangeColor1->Text = L"Изменить цвет";
			this->ChangeColor1->UseVisualStyleBackColor = true;
			this->ChangeColor1->Click += gcnew System::EventHandler(this, &MyForm::ChangeColor1_Click);
			// 
			// ChangeColor2
			// 
			this->ChangeColor2->Location = System::Drawing::Point(8, 175);
			this->ChangeColor2->Name = L"ChangeColor2";
			this->ChangeColor2->Size = System::Drawing::Size(189, 23);
			this->ChangeColor2->TabIndex = 17;
			this->ChangeColor2->Text = L"Изменить цвет";
			this->ChangeColor2->UseVisualStyleBackColor = true;
			this->ChangeColor2->Click += gcnew System::EventHandler(this, &MyForm::ChangeColor2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(97, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(10, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"-";
			// 
			// ShowGraph2
			// 
			this->ShowGraph2->AutoSize = true;
			this->ShowGraph2->Checked = true;
			this->ShowGraph2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ShowGraph2->Location = System::Drawing::Point(122, 126);
			this->ShowGraph2->Name = L"ShowGraph2";
			this->ShowGraph2->Size = System::Drawing::Size(75, 17);
			this->ShowGraph2->TabIndex = 15;
			this->ShowGraph2->Text = L"Показать";
			this->ShowGraph2->UseVisualStyleBackColor = true;
			this->ShowGraph2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ShowGraph2_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(8, 121);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 24);
			this->label4->TabIndex = 14;
			this->label4->Text = L"x - 2sin(x):";
			// 
			// XmaxNumeric2
			// 
			this->XmaxNumeric2->Location = System::Drawing::Point(113, 149);
			this->XmaxNumeric2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->XmaxNumeric2->Name = L"XmaxNumeric2";
			this->XmaxNumeric2->Size = System::Drawing::Size(84, 20);
			this->XmaxNumeric2->TabIndex = 13;
			this->XmaxNumeric2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->XmaxNumeric2->ValueChanged += gcnew System::EventHandler(this, &MyForm::XmaxNumeric2_ValueChanged);
			// 
			// XminNumeric2
			// 
			this->XminNumeric2->Location = System::Drawing::Point(8, 148);
			this->XminNumeric2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->XminNumeric2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->XminNumeric2->Name = L"XminNumeric2";
			this->XminNumeric2->Size = System::Drawing::Size(84, 20);
			this->XminNumeric2->TabIndex = 12;
			this->XminNumeric2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, System::Int32::MinValue });
			this->XminNumeric2->ValueChanged += gcnew System::EventHandler(this, &MyForm::XminNumeric2_ValueChanged);
			// 
			// ChangeColor3
			// 
			this->ChangeColor3->Location = System::Drawing::Point(8, 294);
			this->ChangeColor3->Name = L"ChangeColor3";
			this->ChangeColor3->Size = System::Drawing::Size(189, 23);
			this->ChangeColor3->TabIndex = 23;
			this->ChangeColor3->Text = L"Изменить цвет";
			this->ChangeColor3->UseVisualStyleBackColor = true;
			this->ChangeColor3->Click += gcnew System::EventHandler(this, &MyForm::ChangeColor3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(97, 270);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(10, 13);
			this->label5->TabIndex = 22;
			this->label5->Text = L"-";
			// 
			// ShowGraph3
			// 
			this->ShowGraph3->AutoSize = true;
			this->ShowGraph3->Checked = true;
			this->ShowGraph3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ShowGraph3->Location = System::Drawing::Point(122, 245);
			this->ShowGraph3->Name = L"ShowGraph3";
			this->ShowGraph3->Size = System::Drawing::Size(75, 17);
			this->ShowGraph3->TabIndex = 21;
			this->ShowGraph3->Text = L"Показать";
			this->ShowGraph3->UseVisualStyleBackColor = true;
			this->ShowGraph3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ShowGraph3_CheckedChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(8, 240);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 24);
			this->label6->TabIndex = 20;
			this->label6->Text = L"x - sin(2x):";
			// 
			// XmaxNumeric3
			// 
			this->XmaxNumeric3->Location = System::Drawing::Point(113, 268);
			this->XmaxNumeric3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->XmaxNumeric3->Name = L"XmaxNumeric3";
			this->XmaxNumeric3->Size = System::Drawing::Size(84, 20);
			this->XmaxNumeric3->TabIndex = 19;
			this->XmaxNumeric3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->XmaxNumeric3->ValueChanged += gcnew System::EventHandler(this, &MyForm::XmaxNumeric3_ValueChanged);
			// 
			// XminNumeric3
			// 
			this->XminNumeric3->Location = System::Drawing::Point(8, 267);
			this->XminNumeric3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->XminNumeric3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->XminNumeric3->Name = L"XminNumeric3";
			this->XminNumeric3->Size = System::Drawing::Size(84, 20);
			this->XminNumeric3->TabIndex = 18;
			this->XminNumeric3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, System::Int32::MinValue });
			this->XminNumeric3->ValueChanged += gcnew System::EventHandler(this, &MyForm::XminNumeric3_ValueChanged);
			// 
			// ChangeColor4
			// 
			this->ChangeColor4->Location = System::Drawing::Point(8, 420);
			this->ChangeColor4->Name = L"ChangeColor4";
			this->ChangeColor4->Size = System::Drawing::Size(189, 23);
			this->ChangeColor4->TabIndex = 29;
			this->ChangeColor4->Text = L"Изменить цвет";
			this->ChangeColor4->UseVisualStyleBackColor = true;
			this->ChangeColor4->Click += gcnew System::EventHandler(this, &MyForm::ChangeColor4_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(97, 396);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(10, 13);
			this->label7->TabIndex = 28;
			this->label7->Text = L"-";
			// 
			// ShowGraph4
			// 
			this->ShowGraph4->AutoSize = true;
			this->ShowGraph4->Location = System::Drawing::Point(122, 371);
			this->ShowGraph4->Name = L"ShowGraph4";
			this->ShowGraph4->Size = System::Drawing::Size(75, 17);
			this->ShowGraph4->TabIndex = 27;
			this->ShowGraph4->Text = L"Показать";
			this->ShowGraph4->UseVisualStyleBackColor = true;
			this->ShowGraph4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::ShowGraph4_CheckedChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(8, 366);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(98, 24);
			this->label8->TabIndex = 26;
			this->label8->Text = L"x - sin(x):";
			// 
			// XmaxNumeric4
			// 
			this->XmaxNumeric4->Location = System::Drawing::Point(113, 394);
			this->XmaxNumeric4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->XmaxNumeric4->Name = L"XmaxNumeric4";
			this->XmaxNumeric4->Size = System::Drawing::Size(84, 20);
			this->XmaxNumeric4->TabIndex = 25;
			this->XmaxNumeric4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->XmaxNumeric4->ValueChanged += gcnew System::EventHandler(this, &MyForm::XmaxNumeric4_ValueChanged);
			// 
			// XminNumeric4
			// 
			this->XminNumeric4->Location = System::Drawing::Point(8, 393);
			this->XminNumeric4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->XminNumeric4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->XminNumeric4->Name = L"XminNumeric4";
			this->XminNumeric4->Size = System::Drawing::Size(84, 20);
			this->XminNumeric4->TabIndex = 24;
			this->XminNumeric4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, System::Int32::MinValue });
			this->XminNumeric4->ValueChanged += gcnew System::EventHandler(this, &MyForm::XminNumeric4_ValueChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(680, 457);
			this->Controls->Add(this->ChangeColor4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->ShowGraph4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->XmaxNumeric4);
			this->Controls->Add(this->XminNumeric4);
			this->Controls->Add(this->ChangeColor3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->ShowGraph3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->XmaxNumeric3);
			this->Controls->Add(this->XminNumeric3);
			this->Controls->Add(this->ChangeColor2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->ShowGraph2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->XmaxNumeric2);
			this->Controls->Add(this->XminNumeric2);
			this->Controls->Add(this->ChangeColor1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ShowGraph1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->GraphChart);
			this->Controls->Add(this->XmaxNumeric1);
			this->Controls->Add(this->XminNumeric1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"GraphForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->XminNumeric1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->XmaxNumeric1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GraphChart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->XmaxNumeric2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->XminNumeric2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->XmaxNumeric3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->XminNumeric3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->XmaxNumeric4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->XminNumeric4))->EndInit();
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

	private: void update_graphs() {
		int x_min1 = Decimal::ToInt32(XminNumeric1->Value);
		int x_max1 = Decimal::ToInt32(XmaxNumeric1->Value);
		int x_min2 = Decimal::ToInt32(XminNumeric2->Value);
		int x_max2 = Decimal::ToInt32(XmaxNumeric2->Value);
		int x_min3 = Decimal::ToInt32(XminNumeric3->Value);
		int x_max3 = Decimal::ToInt32(XmaxNumeric3->Value);
		int x_min4 = Decimal::ToInt32(XminNumeric4->Value);
		int x_max4 = Decimal::ToInt32(XmaxNumeric4->Value);
		float dx = 0.1; // Шаг изменения значения x

		GraphChart->Series[0]->Color = Graph1Color;
		GraphChart->Series[1]->Color = Graph2Color;
		GraphChart->Series[2]->Color = Graph3Color;
		GraphChart->Series[3]->Color = Graph4Color;

		GraphChart->Series[0]->Points->Clear();
		GraphChart->Series[1]->Points->Clear();
		GraphChart->Series[2]->Points->Clear();
		GraphChart->Series[3]->Points->Clear();

		if (ShowGraph1->Checked) {
			for (float x = x_min1; x <= x_max1; x += dx)
				GraphChart->Series[0]->Points->AddXY(x, f1(x));
		}
		
		if (ShowGraph2->Checked) {
			for (float x = x_min2; x <= x_max2; x += dx)
				GraphChart->Series[1]->Points->AddXY(x, f2(x));
		}
		
		if (ShowGraph3->Checked) {
			for (float x = x_min3; x <= x_max3; x += dx)
				GraphChart->Series[2]->Points->AddXY(x, f3(x));
		}
		
		if (ShowGraph4->Checked) {
			for (float x = x_min4; x <= x_max4; x += dx)
				GraphChart->Series[3]->Points->AddXY(x, f4(x));
		}
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		update_graphs();
	}
	
	private: System::Void XminNumeric1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		update_graphs();
	}

	private: System::Void XmaxNumeric1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		update_graphs();
	}

	private: System::Void XminNumeric2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		update_graphs();
	}

	private: System::Void XmaxNumeric2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		update_graphs();
	}

	private: System::Void XminNumeric3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		update_graphs();
	}

	private: System::Void XmaxNumeric3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		update_graphs();
	}

	private: System::Void XminNumeric4_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		update_graphs();
	}

	private: System::Void XmaxNumeric4_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		update_graphs();
	}

	private: System::Void ShowGraph1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		update_graphs();
	}

	private: System::Void ShowGraph2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		update_graphs();
	}

	private: System::Void ShowGraph3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		update_graphs();
	}

	private: System::Void ShowGraph4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		update_graphs();
	}

	private: System::Void ChangeColor1_Click(System::Object^ sender, System::EventArgs^ e) {
		GraphColorDialog->Color = Graph1Color;
		if (GraphColorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			Graph1Color = GraphColorDialog->Color;
		update_graphs();
	}

	private: System::Void ChangeColor2_Click(System::Object^ sender, System::EventArgs^ e) {
		GraphColorDialog->Color = Graph2Color;
		if (GraphColorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			Graph2Color = GraphColorDialog->Color;
		update_graphs();
	}

	private: System::Void ChangeColor3_Click(System::Object^ sender, System::EventArgs^ e) {
		GraphColorDialog->Color = Graph3Color;
		if (GraphColorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			Graph3Color = GraphColorDialog->Color;
		update_graphs();
	}

	private: System::Void ChangeColor4_Click(System::Object^ sender, System::EventArgs^ e) {
		GraphColorDialog->Color = Graph4Color;
		if (GraphColorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			Graph4Color = GraphColorDialog->Color;
		update_graphs();
	}
};
}