#pragma once

namespace Task42 {

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
	private: System::Windows::Forms::NumericUpDown^ TminNumeric;
	private: System::Windows::Forms::NumericUpDown^ TmaxNumeric;
	protected:


	protected:



















	private: System::Windows::Forms::ColorDialog^ GraphColorDialog;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ GraphChart;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ ChangeColor;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ ANumeric;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ DTNumeric;
	private: System::Windows::Forms::Label^ label7;
































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
			this->TminNumeric = (gcnew System::Windows::Forms::NumericUpDown());
			this->TmaxNumeric = (gcnew System::Windows::Forms::NumericUpDown());
			this->GraphColorDialog = (gcnew System::Windows::Forms::ColorDialog());
			this->GraphChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ChangeColor = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ANumeric = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->DTNumeric = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TminNumeric))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TmaxNumeric))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GraphChart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ANumeric))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DTNumeric))->BeginInit();
			this->SuspendLayout();
			// 
			// TminNumeric
			// 
			this->TminNumeric->Location = System::Drawing::Point(417, 33);
			this->TminNumeric->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->TminNumeric->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->TminNumeric->Name = L"TminNumeric";
			this->TminNumeric->Size = System::Drawing::Size(84, 20);
			this->TminNumeric->TabIndex = 5;
			this->TminNumeric->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, System::Int32::MinValue });
			this->TminNumeric->ValueChanged += gcnew System::EventHandler(this, &MyForm::TminNumeric_ValueChanged);
			// 
			// TmaxNumeric
			// 
			this->TmaxNumeric->Location = System::Drawing::Point(417, 59);
			this->TmaxNumeric->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->TmaxNumeric->Name = L"TmaxNumeric";
			this->TmaxNumeric->Size = System::Drawing::Size(84, 20);
			this->TmaxNumeric->TabIndex = 6;
			this->TmaxNumeric->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->TmaxNumeric->ValueChanged += gcnew System::EventHandler(this, &MyForm::TmaxNumeric_ValueChanged);
			// 
			// GraphChart
			// 
			chartArea1->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea1->AxisX->Crossing = 0;
			chartArea1->AxisX->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::True;
			chartArea1->AxisX->LabelStyle->Format = L"0";
			chartArea1->AxisX->LineWidth = 2;
			chartArea1->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea1->AxisY->Crossing = 0;
			chartArea1->AxisY->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::True;
			chartArea1->AxisY->LabelStyle->Format = L"0";
			chartArea1->AxisY->LineWidth = 2;
			chartArea1->Name = L"ChartArea1";
			this->GraphChart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->GraphChart->Legends->Add(legend1);
			this->GraphChart->Location = System::Drawing::Point(16, 111);
			this->GraphChart->Name = L"GraphChart";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"Строфоида";
			this->GraphChart->Series->Add(series1);
			this->GraphChart->Size = System::Drawing::Size(652, 467);
			this->GraphChart->TabIndex = 7;
			this->GraphChart->Text = L"График";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 24);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Строфоида:";
			// 
			// ChangeColor
			// 
			this->ChangeColor->Location = System::Drawing::Point(570, 77);
			this->ChangeColor->Name = L"ChangeColor";
			this->ChangeColor->Size = System::Drawing::Size(98, 23);
			this->ChangeColor->TabIndex = 11;
			this->ChangeColor->Text = L"Изменить цвет";
			this->ChangeColor->UseVisualStyleBackColor = true;
			this->ChangeColor->Click += gcnew System::EventHandler(this, &MyForm::ChangeColor_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(239, 24);
			this->label2->TabIndex = 12;
			this->label2->Text = L"x = a * (t^2 - 1) / (t^2 + 1)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(263, 24);
			this->label3->TabIndex = 13;
			this->label3->Text = L"y = a * t * (t^2 - 1) / (t^2 + 1)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(401, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"a:";
			// 
			// ANumeric
			// 
			this->ANumeric->Location = System::Drawing::Point(417, 7);
			this->ANumeric->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->ANumeric->Name = L"ANumeric";
			this->ANumeric->Size = System::Drawing::Size(84, 20);
			this->ANumeric->TabIndex = 15;
			this->ANumeric->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->ANumeric->ValueChanged += gcnew System::EventHandler(this, &MyForm::ANumeric_ValueChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(382, 35);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"t_min:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(379, 61);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"t_max:";
			// 
			// DTNumeric
			// 
			this->DTNumeric->DecimalPlaces = 2;
			this->DTNumeric->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->DTNumeric->Location = System::Drawing::Point(417, 85);
			this->DTNumeric->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->DTNumeric->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->DTNumeric->Name = L"DTNumeric";
			this->DTNumeric->Size = System::Drawing::Size(84, 20);
			this->DTNumeric->TabIndex = 18;
			this->DTNumeric->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->DTNumeric->ValueChanged += gcnew System::EventHandler(this, &MyForm::DTNumeric_ValueChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(398, 87);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 13);
			this->label7->TabIndex = 19;
			this->label7->Text = L"dt:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(680, 590);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->DTNumeric);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->ANumeric);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ChangeColor);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->GraphChart);
			this->Controls->Add(this->TmaxNumeric);
			this->Controls->Add(this->TminNumeric);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"GraphForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TminNumeric))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TmaxNumeric))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GraphChart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ANumeric))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DTNumeric))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// x(t)
	private: float x_f(float t, int a) {
		return a * (t * t - 1) / (t * t + 1);
	}

	// y(t)
	private: float y_f(float t, int a) {
		return a * t * (t * t - 1) / (t * t + 1);
	}

	private: void update_graphs() {
		int a = Decimal::ToInt32(ANumeric->Value);
		int t_min = Decimal::ToInt32(TminNumeric->Value);
		int t_max = Decimal::ToInt32(TmaxNumeric->Value);
		float dt = Decimal::ToSingle(DTNumeric->Value);

		GraphChart->Series[0]->Points->Clear();

		for (float t = t_min; t <= t_max; t += dt)
			GraphChart->Series[0]->Points->AddXY(x_f(t, a), y_f(t, a));
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		update_graphs();
	}

	private: System::Void ANumeric_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		update_graphs();
	}

	private: System::Void TminNumeric_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		update_graphs();
	}

	private: System::Void TmaxNumeric_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		update_graphs();
	}

	private: System::Void DTNumeric_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		update_graphs();
	}

	private: System::Void ChangeColor_Click(System::Object^ sender, System::EventArgs^ e) {
		GraphColorDialog->Color = GraphChart->Series[0]->Color;
		if (GraphColorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			GraphChart->Series[0]->Color = GraphColorDialog->Color;
		update_graphs();
	}
};
}