#pragma once

namespace CubeX {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Orient_Form
	/// </summary>
	public ref class Orient_Form : public System::Windows::Forms::Form
	{
	public:
		Orient_Form(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Orient_Form()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  solve_;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Orient_Form::typeid));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->solve_ = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Silver;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(88, 19);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 24);
			this->label4->TabIndex = 108;
			this->label4->Text = L"Before We Begin,";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(283, 132);
			this->label1->TabIndex = 109;
			this->label1->Text = L"Orient your Cube such that the Green face is on your FRONT, Yellow on TOP and Whi"
				L"te On BOTTOM. Now you must have Red and Orange faces on your Left and Right face"
				L"s respectively, as shown in ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// solve_
			// 
			this->solve_->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->solve_->Font = (gcnew System::Drawing::Font(L"Segoe Script", 10.5F, System::Drawing::FontStyle::Bold));
			this->solve_->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->solve_->Location = System::Drawing::Point(13, 364);
			this->solve_->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->solve_->Name = L"solve_";
			this->solve_->Size = System::Drawing::Size(279, 28);
			this->solve_->TabIndex = 110;
			this->solve_->Text = L"I\'m Ready. Let\'s Begin!";
			this->solve_->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->solve_->UseVisualStyleBackColor = true;
			this->solve_->Click += gcnew System::EventHandler(this, &Orient_Form::solve__Click);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::DarkRed;
			this->label6->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->label6->Location = System::Drawing::Point(303, -1);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(3, 412);
			this->label6->TabIndex = 115;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::DarkRed;
			this->label2->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(3, 412);
			this->label2->TabIndex = 116;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::DarkRed;
			this->label3->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->label3->Location = System::Drawing::Point(1, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(303, 3);
			this->label3->TabIndex = 117;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::DarkRed;
			this->label5->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->label5->Location = System::Drawing::Point(0, 401);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(303, 3);
			this->label5->TabIndex = 118;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(86, 208);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(135, 135);
			this->pictureBox1->TabIndex = 119;
			this->pictureBox1->TabStop = false;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(56, 170);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 22);
			this->label7->TabIndex = 120;
			this->label7->Text = L"the picture.";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DarkRed;
			this->label8->Location = System::Drawing::Point(134, 170);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(133, 22);
			this->label8->TabIndex = 121;
			this->label8->Text = L"This is Important.";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Orient_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(306, 404);
			this->ControlBox = false;
			this->Controls->Add(this->label7);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->solve_);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label8);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Orient_Form";
			this->Opacity = 0.99;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"-";
			this->TopMost = true;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private: System::Void solve__Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->Top + 203 > (Screen::PrimaryScreen->Bounds.Height / 2))
			for (int i = 0; i<1000; i++)
				this->Top++;
		else
			for (int i = 0; i<1000; i++)
				this->Top--;
		Orient_Form::Close();
	}

};
}
