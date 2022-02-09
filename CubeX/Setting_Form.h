#pragma once
#include "Inp_Form.h"


bool inp_mode=0;

namespace CubeX {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Setting_Form
	/// </summary>
	public ref class Setting_Form : public System::Windows::Forms::Form
	{
	public:
		Setting_Form(void)
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
		~Setting_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	public: System::Windows::Forms::RadioButton^  OpCube;
	private:
	public: System::Windows::Forms::RadioButton^  Face;
	private: System::Windows::Forms::Button^  OK_Button;
	private: bool dragging;
	private: Point offset;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::ComponentModel::IContainer^  components;
			 /// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Setting_Form::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->OpCube = (gcnew System::Windows::Forms::RadioButton());
			this->Face = (gcnew System::Windows::Forms::RadioButton());
			this->OK_Button = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(-7, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(10, 329);
			this->label1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(501, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(10, 329);
			this->label2->TabIndex = 1;
			this->label2->Text = L".";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(-1, 301);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(510, 10);
			this->label3->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(2, -7);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(507, 10);
			this->label4->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 20, System::Drawing::FontStyle::Bold));
			this->label5->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label5->Location = System::Drawing::Point(0, 3);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(513, 49);
			this->label5->TabIndex = 101;
			this->label5->Text = L"   Select Cube View";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label5->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Setting_Form::label5_MouseDown);
			this->label5->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Setting_Form::label5_MouseMove);
			this->label5->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Setting_Form::label5_MouseUp);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(10, 68);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(243, 160);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 102;
			this->pictureBox1->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox1, L"Select Facelet  View");
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Setting_Form::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(260, 68);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(234, 160);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 103;
			this->pictureBox2->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox2, L"Select Open Cube View");
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Setting_Form::pictureBox2_Click);
			// 
			// OpCube
			// 
			this->OpCube->AutoSize = true;
			this->OpCube->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->OpCube->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OpCube->Location = System::Drawing::Point(301, 231);
			this->OpCube->Name = L"OpCube";
			this->OpCube->Size = System::Drawing::Size(154, 30);
			this->OpCube->TabIndex = 238;
			this->OpCube->Text = L"Open Cube View";
			this->OpCube->UseVisualStyleBackColor = true;
			this->OpCube->CheckedChanged += gcnew System::EventHandler(this, &Setting_Form::OpCube_CheckedChanged);
			// 
			// Face
			// 
			this->Face->AutoSize = true;
			this->Face->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Face->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Face->Location = System::Drawing::Point(70, 231);
			this->Face->Name = L"Face";
			this->Face->Size = System::Drawing::Size(125, 30);
			this->Face->TabIndex = 237;
			this->Face->Text = L"Facelet View";
			this->Face->UseVisualStyleBackColor = true;
			this->Face->CheckedChanged += gcnew System::EventHandler(this, &Setting_Form::Face_CheckedChanged);
			// 
			// OK_Button
			// 
			this->OK_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OK_Button->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OK_Button->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->OK_Button->Location = System::Drawing::Point(10, 266);
			this->OK_Button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->OK_Button->Name = L"OK_Button";
			this->OK_Button->Size = System::Drawing::Size(484, 29);
			this->OK_Button->TabIndex = 239;
			this->OK_Button->TabStop = false;
			this->OK_Button->Text = L"OK";
			this->toolTip1->SetToolTip(this->OK_Button, L"Apply ");
			this->OK_Button->UseVisualStyleBackColor = true;
			this->OK_Button->Click += gcnew System::EventHandler(this, &Setting_Form::OK_Button_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(114, 11);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(40, 39);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 241;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Setting_Form::label5_MouseDown);
			this->pictureBox3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Setting_Form::label5_MouseMove);
			this->pictureBox3->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Setting_Form::label5_MouseUp);
			// 
			// Setting_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(504, 304);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->OK_Button);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->OpCube);
			this->Controls->Add(this->Face);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label5);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
			this->Name = L"Setting_Form";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Setting_Form";
			this->Load += gcnew System::EventHandler(this, &Setting_Form::Setting_Form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Face_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		if (this->Face->Checked == false)
		{
			this->pictureBox2->BorderStyle = BorderStyle::Fixed3D;
			this->pictureBox1->BorderStyle = BorderStyle::None;
			return;
		}
		else
		{
			inp_mode = 0;
			this->pictureBox2->BorderStyle = BorderStyle::None;
			this->pictureBox1->BorderStyle = BorderStyle::Fixed3D;
			this->toolTip1->SetToolTip(this->OK_Button, L"Apply Facelet View");
		}
	}
	private: System::Void OpCube_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->OpCube->Checked == false)
			return;
		else
		{
			inp_mode = 1;
			this->toolTip1->SetToolTip(this->OK_Button, L"Apply Open Cube View");
		}
	}
private: System::Void OK_Button_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (this->Top + 216 >(Screen::PrimaryScreen->Bounds.Height / 2))
		for (int i = 0; i<1000; i++)
			this->Top++;
	else
		for (int i = 0; i<1000; i++)
			this->Top--;
	this->Close();
}
private: System::Void Setting_Form_Load(System::Object^  sender, System::EventArgs^  e) 
{
	this->dragging = false;
	if (inp_mode == 0)
	{
		Face->Checked = true;
		pictureBox1->BorderStyle = BorderStyle::Fixed3D;
	}
	else
	{
		OpCube->Checked = true;
		pictureBox2->BorderStyle = BorderStyle::Fixed3D;
	}
		
}
private: System::Void label5_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->dragging = false;
}
private: System::Void label5_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	if (this->dragging)
	{
		Point currentScreenPos = PointToScreen(e->Location);
		Location = Point(currentScreenPos.X - this->offset.X,
			currentScreenPos.Y - this->offset.Y);
	}
}
private: System::Void label5_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->dragging = true;
	this->offset = Point(e->X, e->Y);
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->Face->Checked = true;
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->OpCube->Checked = true;
}
};
}
