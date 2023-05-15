#pragma once

namespace Task44 {

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

	private: System::Windows::Forms::Timer^ DrawTimer;
	private: System::Windows::Forms::PictureBox^ FrameBox;


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
			this->DrawTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->FrameBox = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FrameBox))->BeginInit();
			this->SuspendLayout();
			// 
			// DrawTimer
			// 
			this->DrawTimer->Enabled = true;
			this->DrawTimer->Tick += gcnew System::EventHandler(this, &MyForm::DrawTimer_Tick);
			// 
			// FrameBox
			// 
			this->FrameBox->Location = System::Drawing::Point(12, 12);
			this->FrameBox->Name = L"FrameBox";
			this->FrameBox->Size = System::Drawing::Size(250, 250);
			this->FrameBox->TabIndex = 0;
			this->FrameBox->TabStop = false;
			this->FrameBox->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::FrameBox_Paint);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(271, 270);
			this->Controls->Add(this->FrameBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"GraphForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FrameBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	const int frames = 6; // Всего кадров
	int current_frame = 0; // Текущий кадр

	private: System::Void DrawTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		current_frame = (current_frame + 1) % frames;
		FrameBox->Invalidate();
	}

	private: System::Void FrameBox_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Image^ frame_image = gcnew Bitmap("image" + Convert::ToString(current_frame) + ".png");
		e->Graphics->DrawImage(frame_image, 0, 0);
	}

	};
}