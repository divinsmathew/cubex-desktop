#pragma once

namespace CubeX {
	 
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for About_Form
	/// </summary>
	public ref class About_Form : public System::Windows::Forms::Form
	{
	public:
		About_Form(void)
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
		~About_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  Cube;
	private: System::Windows::Forms::Label^  CubeX_Label;



	private: System::Windows::Forms::Label^  Me_label;
	private: System::Windows::Forms::Label^  Mail_Label;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  Cu_Cl_Button;

	private: bool dragging;
	private: Point offset;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;

	private: System::ComponentModel::IContainer^  components;


	private:
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(About_Form::typeid));
			this->Cube = (gcnew System::Windows::Forms::PictureBox());
			this->CubeX_Label = (gcnew System::Windows::Forms::Label());
			this->Me_label = (gcnew System::Windows::Forms::Label());
			this->Mail_Label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Cu_Cl_Button = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cube))->BeginInit();
			this->SuspendLayout();
			// 
			// Cube
			// 
			this->Cube->BackColor = System::Drawing::Color::Silver;
			this->Cube->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Cube->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Cube.Image")));
			this->Cube->Location = System::Drawing::Point(18, 16);
			this->Cube->Name = L"Cube";
			this->Cube->Size = System::Drawing::Size(155, 162);
			this->Cube->TabIndex = 0;
			this->Cube->TabStop = false;
			this->toolTip1->SetToolTip(this->Cube, L"CubeX v1.0");
			this->Cube->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &About_Form::About_Form_MouseDown);
			this->Cube->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &About_Form::About_Form_MouseMove);
			this->Cube->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &About_Form::About_Form_MouseUp);
			// 
			// CubeX_Label
			// 
			this->CubeX_Label->BackColor = System::Drawing::Color::Transparent;
			this->CubeX_Label->Font = (gcnew System::Drawing::Font(L"Segoe Print", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CubeX_Label->ForeColor = System::Drawing::Color::Maroon;
			this->CubeX_Label->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->CubeX_Label->Location = System::Drawing::Point(161, 15);
			this->CubeX_Label->Name = L"CubeX_Label";
			this->CubeX_Label->Size = System::Drawing::Size(375, 162);
			this->CubeX_Label->TabIndex = 1;
			this->CubeX_Label->Text = L"CubeX";
			this->CubeX_Label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->CubeX_Label->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &About_Form::About_Form_MouseDown);
			this->CubeX_Label->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &About_Form::About_Form_MouseMove);
			this->CubeX_Label->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &About_Form::About_Form_MouseUp);
			// 
			// Me_label
			// 
			this->Me_label->AutoSize = true;
			this->Me_label->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->Me_label->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Me_label->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9));
			this->Me_label->Location = System::Drawing::Point(389, 361);
			this->Me_label->Name = L"Me_label";
			this->Me_label->Size = System::Drawing::Size(113, 21);
			this->Me_label->TabIndex = 5;
			this->Me_label->Text = L"- Divins Mathew";
			// 
			// Mail_Label
			// 
			this->Mail_Label->AutoSize = true;
			this->Mail_Label->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->Mail_Label->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mail_Label->Location = System::Drawing::Point(364, 378);
			this->Mail_Label->Name = L"Mail_Label";
			this->Mail_Label->Size = System::Drawing::Size(163, 21);
			this->Mail_Label->TabIndex = 6;
			this->Mail_Label->Text = L"divinsmathew@gmail.com";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(-7, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(10, 462);
			this->label1->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(534, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(10, 462);
			this->label2->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(0, -7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(537, 10);
			this->label3->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(0, 403);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(537, 10);
			this->label4->TabIndex = 10;
			// 
			// Cu_Cl_Button
			// 
			this->Cu_Cl_Button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Cu_Cl_Button->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cu_Cl_Button->ForeColor = System::Drawing::Color::DarkRed;
			this->Cu_Cl_Button->Location = System::Drawing::Point(510, 5);
			this->Cu_Cl_Button->Name = L"Cu_Cl_Button";
			this->Cu_Cl_Button->Size = System::Drawing::Size(22, 21);
			this->Cu_Cl_Button->TabIndex = 11;
			this->Cu_Cl_Button->Text = L"X";
			this->toolTip1->SetToolTip(this->Cu_Cl_Button, L"Close");
			this->Cu_Cl_Button->UseVisualStyleBackColor = true;
			this->Cu_Cl_Button->Click += gcnew System::EventHandler(this, &About_Form::Cu_Cl_Button_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::Maroon;
			this->label5->Location = System::Drawing::Point(471, 149);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 33);
			this->label5->TabIndex = 12;
			this->label5->Text = L"v1.0";
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label10->Location = System::Drawing::Point(2, 293);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(534, 110);
			this->label10->TabIndex = 18;
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Black;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label9->Location = System::Drawing::Point(2, 293);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(532, 1);
			this->label9->TabIndex = 17;
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label6->Location = System::Drawing::Point(32, 302);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(478, 51);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Found a bug\? Feel free to contact us. Suggestions and Feedbacks are always welcom"
				L"e. We are committed to make CubeX a little better each day.";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.5F, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label7->Location = System::Drawing::Point(18, 200);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(501, 74);
			this->label7->TabIndex = 15;
			this->label7->Text = L"CubeX is a light weight application that generates solution for a 3x3x3 Rubik\'s C"
				L"ube, using the Frederich Method. It provides you with a Layer-By-Layer solution "
				L"with an average of 60 moves.";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label8->Location = System::Drawing::Point(32, 352);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(230, 24);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Thanks for trying CubeX. Cheers! ";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// About_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(537, 406);
			this->Controls->Add(this->Me_label);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Cube);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Cu_Cl_Button);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Mail_Label);
			this->Controls->Add(this->CubeX_Label);
			this->Controls->Add(this->label10);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"About_Form";
			this->Opacity = 0.99;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"About";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &About_Form::About_Form_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &About_Form::About_Form_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &About_Form::About_Form_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &About_Form::About_Form_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cube))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private: System::Void Cu_Cl_Button_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->Top + 224 > (Screen::PrimaryScreen->Bounds.Height / 2))
			for (int i = 0; i<1000; i++)
				this->Top++;
		else
			for (int i = 0; i<1000; i++)
				this->Top--;
		About_Form::Close();
	}
	private: System::Void About_Form_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
	{
		if (this->dragging)
		{
			Point currentScreenPos = PointToScreen(e->Location);
			Location = Point(currentScreenPos.X - this->offset.X,
				currentScreenPos.Y - this->offset.Y);
		}
	}
    private: System::Void About_Form_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		this->dragging = false;
	}
	private: System::Void About_Form_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
	{
		this->dragging = true;
		this->offset = Point(e->X, e->Y);
	}
private: System::Void About_Form_Load(System::Object^  sender, System::EventArgs^  e) 
{
	this->dragging = false;
}
};
}
