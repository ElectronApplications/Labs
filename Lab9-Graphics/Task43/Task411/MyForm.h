#pragma once

namespace Task43 {

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
	private: System::Windows::Forms::Timer^ DrawTimer;

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
			this->DrawTimer = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GraphBox))->BeginInit();
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
			// DrawTimer
			// 
			this->DrawTimer->Enabled = true;
			this->DrawTimer->Interval = 16;
			this->DrawTimer->Tick += gcnew System::EventHandler(this, &MyForm::DrawTimer_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(526, 523);
			this->Controls->Add(this->GraphBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"GraphForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GraphBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	float angle = 0.0; // Угол поворота
	float angle_vel = 0.1; // Угловая скорость

	// Вращаем вектор вокруг центра координат при помощи матрицы вращения
	Tuple<float, float>^ rotate(float x, float y) {
		float new_x = Math::Cos(angle) * x - Math::Sin(angle) * y;
		float new_y = Math::Sin(angle) * x + Math::Cos(angle) * y;
		return Tuple::Create(new_x, new_y);
	}

	// Переводим координаты точки в координаты окна
	Tuple<float, float>^ to_screen_coordinates(Tuple<float, float>^ coords) {
		return Tuple::Create(250.0f + coords->Item1 * 300.0f, 250.0f - coords->Item2 * 300.0f);
	}

	private: System::Void GraphBox_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		auto point_a = to_screen_coordinates(rotate(0, Math::Sqrt(3)/3));
		auto point_b = to_screen_coordinates(rotate(0.5, -Math::Sqrt(3)/6));
		auto point_c = to_screen_coordinates(rotate(-0.5, -Math::Sqrt(3)/6));

		Drawing2D::GraphicsPath^ path = gcnew Drawing2D::GraphicsPath();
		path->AddLine(point_a->Item1, point_a->Item2, point_b->Item1, point_b->Item2);
		path->AddLine(point_b->Item1, point_b->Item2, point_c->Item1, point_c->Item2);
		path->AddLine(point_c->Item1, point_c->Item2, point_a->Item1, point_a->Item2);

		Pen^ pen = gcnew Pen(Brushes::Black);
		pen->Width = 4;
		e->Graphics->DrawPath(pen, path);
		e->Graphics->FillPath(Brushes::MediumVioletRed, path);
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		GraphBox->Invalidate();
	}

	private: System::Void DrawTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		angle += angle_vel; // Увеличиваем угол поворота согласно угловой скорости
		angle_vel += -0.0001*angle; // Останавливаем вращение, подобно пружинному маятнику
		GraphBox->Invalidate();
	}
};
}