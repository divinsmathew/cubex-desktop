#pragma once

namespace CubeX {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Help_Form
	/// </summary>
	public ref class Help_Form : public System::Windows::Forms::Form
	{
	public:
		Help_Form(void)
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
		~Help_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  Input_Label;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Button^  Cclos_Button;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;

	private: bool dragging;
	private: Point offset;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label34;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Help_Form::typeid));
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Input_Label = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Cclos_Button = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(-15, -15);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(80, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->label35);
			this->panel1->Controls->Add(this->label34);
			this->panel1->Controls->Add(this->pictureBox10);
			this->panel1->Controls->Add(this->pictureBox9);
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->label33);
			this->panel1->Controls->Add(this->label32);
			this->panel1->Controls->Add(this->label31);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->label30);
			this->panel1->Controls->Add(this->label29);
			this->panel1->Controls->Add(this->label28);
			this->panel1->Controls->Add(this->label23);
			this->panel1->Controls->Add(this->label22);
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->label21);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->label20);
			this->panel1->Controls->Add(this->label19);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->Input_Label);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(2, 64);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(760, 411);
			this->panel1->TabIndex = 1;
			// 
			// label35
			// 
			this->label35->AccessibleName = L"";
			this->label35->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold));
			this->label35->Location = System::Drawing::Point(18, 741);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(424, 26);
			this->label35->TabIndex = 43;
			this->label35->Text = L"You may switch to any of the views anytime at your convenience.";
			// 
			// label34
			// 
			this->label34->AccessibleName = L"You may switch to any of the views anytime at your convenience.";
			this->label34->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold));
			this->label34->Location = System::Drawing::Point(18, 446);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(709, 48);
			this->label34->TabIndex = 42;
			this->label34->Text = L"The Open Cube View provides a simple view of the entire six faces of the Cube on "
				L"a 2 dimensional plane. An example showing the input in Open Cube View from a scr"
				L"ambled Cube is shown. ";
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(391, 496);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(323, 235);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 41;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(298, 584);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(62, 62);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 40;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(45, 514);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(206, 193);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 39;
			this->pictureBox8->TabStop = false;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18.25F));
			this->label33->Location = System::Drawing::Point(19, 393);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(260, 43);
			this->label33->TabIndex = 38;
			this->label33->Text = L"In Open Cube View";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18.25F));
			this->label32->Location = System::Drawing::Point(18, 53);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(212, 43);
			this->label32->TabIndex = 37;
			this->label32->Text = L"In Facelet View";
			// 
			// label31
			// 
			this->label31->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(21, 2086);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(704, 86);
			this->label31->TabIndex = 36;
			this->label31->Text = resources->GetString(L"label31.Text");
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(484, 826);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(252, 200);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 25;
			this->pictureBox5->TabStop = false;
			// 
			// label30
			// 
			this->label30->Font = (gcnew System::Drawing::Font(L"Verdana", 12.75F, System::Drawing::FontStyle::Bold));
			this->label30->Location = System::Drawing::Point(68, 2009);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(585, 21);
			this->label30->TabIndex = 35;
			this->label30->Text = L"F                F\'               F2               B                B\'           "
				L"    B2";
			// 
			// label29
			// 
			this->label29->Font = (gcnew System::Drawing::Font(L"Verdana", 12.75F, System::Drawing::FontStyle::Bold));
			this->label29->Location = System::Drawing::Point(67, 1889);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(597, 21);
			this->label29->TabIndex = 34;
			this->label29->Text = L"R                R\'               R2               L                L\'           "
				L"    L2";
			// 
			// label28
			// 
			this->label28->Font = (gcnew System::Drawing::Font(L"Verdana", 12.75F, System::Drawing::FontStyle::Bold));
			this->label28->Location = System::Drawing::Point(70, 1768);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(597, 21);
			this->label28->TabIndex = 33;
			this->label28->Text = L"U               U\'               U2               D               D\'             "
				L"  D2";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(16, 2178);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(712, 13);
			this->label23->TabIndex = 32;
			this->label23->Text = resources->GetString(L"label23.Text");
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(17, 2190);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(291, 22);
			this->label22->TabIndex = 31;
			this->label22->Text = L"Please contact us for further assistance.";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(368, 2048);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(38, 21);
			this->linkLabel1->TabIndex = 30;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"here.";
			this->toolTip1->SetToolTip(this->linkLabel1, L"Download Video");
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Help_Form::linkLabel1_LinkClicked);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(29, 2048);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(348, 21);
			this->label21->TabIndex = 29;
			this->label21->Text = L"You may also refer a video demonstration of notations ";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(24, 1671);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(660, 371);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 28;
			this->pictureBox6->TabStop = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(20, 1633);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(324, 21);
			this->label20->TabIndex = 27;
			this->label20->Text = L"The follwing picture summarises the Cube notations.";
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(13, 831);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(469, 195);
			this->label19->TabIndex = 26;
			this->label19->Text = resources->GetString(L"label19.Text");
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe Print", 20, System::Drawing::FontStyle::Bold));
			this->label18->Location = System::Drawing::Point(15, 774);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(167, 47);
			this->label18->TabIndex = 24;
			this->label18->Text = L"Cube Faces";
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold));
			this->label17->Location = System::Drawing::Point(26, 1586);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(699, 35);
			this->label17->TabIndex = 23;
			this->label17->Text = L"* R2 (spoken \"R two\") means to turn the right face 180-degrees.";
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold));
			this->label16->Location = System::Drawing::Point(26, 1555);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(699, 35);
			this->label16->TabIndex = 22;
			this->label16->Text = L"* R\' (spoken \"R prime\") means to turn the right face 90-degrees counter-clockwise"
				L", i.e. in the opposite direction   as above.";
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold));
			this->label15->Location = System::Drawing::Point(16, 1496);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(694, 49);
			this->label15->TabIndex = 21;
			this->label15->Text = L"Modifiers can be attached to the end of these moves to change how they turn. The "
				L"examples below all use R as the base move, but they can be used with any face.";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe Print", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(16, 1443);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(144, 47);
			this->label14->TabIndex = 20;
			this->label14->Text = L"Modifiers";
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold));
			this->label13->Location = System::Drawing::Point(25, 1290);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(694, 27);
			this->label13->TabIndex = 19;
			this->label13->Text = L"* R means turn the right face such that the side on top moves to the back.";
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold));
			this->label12->Location = System::Drawing::Point(25, 1315);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(694, 27);
			this->label12->TabIndex = 18;
			this->label12->Text = L"* L means turn the left face such that the side on top moves to the front.";
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold));
			this->label11->Location = System::Drawing::Point(25, 1411);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(638, 27);
			this->label11->TabIndex = 17;
			this->label11->Text = L"* B means turn the back face such that the side on top moves to the left.";
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold));
			this->label10->Location = System::Drawing::Point(25, 1340);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(694, 27);
			this->label10->TabIndex = 16;
			this->label10->Text = L"* U means turn the up face such that the side in front moves to the left.";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold));
			this->label9->Location = System::Drawing::Point(25, 1363);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(694, 27);
			this->label9->TabIndex = 15;
			this->label9->Text = L"* D means turn the down face such that the side in front moves to the right.";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(25, 1387);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(694, 27);
			this->label8->TabIndex = 14;
			this->label8->Text = L"* F means turn the front face such that the side on top moves to the right.";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(15, 1217);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(720, 69);
			this->label7->TabIndex = 13;
			this->label7->Text = resources->GetString(L"label7.Text");
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(17, 1161);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(293, 47);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Fundamental Moves";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(11, 1088);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(708, 71);
			this->label5->TabIndex = 11;
			this->label5->Text = resources->GetString(L"label5.Text");
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 20, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(16, 1034);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 47);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Notations";
			// 
			// Input_Label
			// 
			this->Input_Label->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold));
			this->Input_Label->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Input_Label->Location = System::Drawing::Point(18, 105);
			this->Input_Label->Name = L"Input_Label";
			this->Input_Label->Size = System::Drawing::Size(719, 88);
			this->Input_Label->TabIndex = 9;
			this->Input_Label->Text = resources->GetString(L"Input_Label.Text");
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(634, 328);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 21);
			this->label3->TabIndex = 8;
			this->label3->Text = L"...and so on.";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(489, 226);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(140, 140);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(328, 225);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(140, 140);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(244, 258);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(65, 66);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(26, 211);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(185, 164);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 20, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(10, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 47);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Input";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 22.75F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(1, 2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(768, 61);
			this->label1->TabIndex = 2;
			this->label1->Text = L"    Help";
			this->label1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Help_Form::Help_Form_MouseDown);
			this->label1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Help_Form::Help_Form_MouseMove);
			this->label1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Help_Form::Help_Form_MouseUp);
			// 
			// Cclos_Button
			// 
			this->Cclos_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cclos_Button->Font = (gcnew System::Drawing::Font(L"Verdana", 8));
			this->Cclos_Button->Location = System::Drawing::Point(733, 5);
			this->Cclos_Button->Name = L"Cclos_Button";
			this->Cclos_Button->Size = System::Drawing::Size(28, 28);
			this->Cclos_Button->TabIndex = 4;
			this->Cclos_Button->Tag = L"";
			this->Cclos_Button->Text = L"x";
			this->toolTip1->SetToolTip(this->Cclos_Button, L"Close");
			this->Cclos_Button->UseVisualStyleBackColor = true;
			this->Cclos_Button->Click += gcnew System::EventHandler(this, &Help_Form::Cclos_Button_Click);
			// 
			// label24
			// 
			this->label24->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label24->Location = System::Drawing::Point(-2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(768, 3);
			this->label24->TabIndex = 5;
			this->label24->Text = L"label24";
			// 
			// label25
			// 
			this->label25->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label25->Location = System::Drawing::Point(-2, 476);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(768, 3);
			this->label25->TabIndex = 6;
			this->label25->Text = L"label25";
			// 
			// label26
			// 
			this->label26->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label26->Location = System::Drawing::Point(0, 1);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(3, 476);
			this->label26->TabIndex = 7;
			this->label26->Text = L"label26";
			// 
			// label27
			// 
			this->label27->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label27->Location = System::Drawing::Point(763, 1);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(3, 476);
			this->label27->TabIndex = 8;
			this->label27->Text = L"label27";
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::SystemColors::ControlDark;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(16, 13);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(35, 35);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 9;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Help_Form::Help_Form_MouseDown);
			this->pictureBox7->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Help_Form::Help_Form_MouseMove);
			this->pictureBox7->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Help_Form::Help_Form_MouseUp);
			// 
			// Help_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(766, 479);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->Cclos_Button);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Help_Form";
			this->Opacity = 0.99;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Help";
			this->Load += gcnew System::EventHandler(this, &Help_Form::Help_Form_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
private: System::Void Cclos_Button_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (this->Top + 249 > (Screen::PrimaryScreen->Bounds.Height / 2))
		for (int i = 0; i<1000; i++)
			this->Top++;
	else
		for (int i = 0; i<1000; i++)
			this->Top--;
	Help_Form::Close();
}

private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) 
{
	linkLabel1->LinkVisited = true;
	System::Diagnostics::Process::Start("https://drive.google.com/uc?export=download&id=0B8vBGx96tStVZnhuOUM0MG9aZFU");
}
private: System::Void Help_Form_Load(System::Object^  sender, System::EventArgs^  e)
{
	if (scr == 1)
	{
		scr = 0;
		Point p(0, 1033);
		panel1->AutoScrollPosition = p;
	} 
	this->dragging = false;
}
private: System::Void Help_Form_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	if (this->dragging)
	{
		Point currentScreenPos = PointToScreen(e->Location);
		Location = Point(currentScreenPos.X - this->offset.X,
			currentScreenPos.Y - this->offset.Y);
	}
}
private: System::Void Help_Form_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	this->dragging = false;
}
private: System::Void Help_Form_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->dragging = true;
	this->offset = Point(e->X, e->Y);
}
};
}
