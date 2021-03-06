#pragma once
#include<Windows.h>
#include<shlobj.h>
#include<fstream>
#include<string>
#include<dos.h>
#include<stdlib.h>
#include<direct.h>
#include<string.h>
#include <msclr\marshal_cppstd.h>
#include "algo.h"
#include "Orient_Form.h"
#include "About_Form.h"
#include "Help_Form.h"
#include "Setting_Form.h"

#using <System.Windows.Forms.dll>
#using <System.dll>

bool color_flag = true;
bool Pick_flag = true;
//bool inp_mode = 0;

int ie = 0, d = 0, joke = 0;
char sala[500][5];
void ColUpdate(string), groupHide(bool);
 
namespace CubeX { 
	
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace AForge::Video;
	//using namespace AForge::Video::DirectShow;

	public ref class Inp_Form : public System::Windows::Forms::Form
	{
	public:
		Inp_Form(void)
		{
			InitializeComponent();

			this->Visible = false;
			this->Left = -500;
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Inp_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: bool dragging;
	private: Point offset;

	private: System::Windows::Forms::Button^  Cust_Close;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  Alg_Label;
	private: System::Windows::Forms::Label^  Title;
	private: System::Windows::Forms::Button^  Again_Button;
	private: System::Windows::Forms::Button^  Help_Button;
	private: System::Windows::Forms::Button^  About_Button;

	private: System::Windows::Forms::Label^  bod1;
	private: System::Windows::Forms::Label^  bod3;
	private: System::Windows::Forms::Label^  bod4;
	private: System::Windows::Forms::Label^  bod5;
	private: System::Windows::Forms::Button^  Not_Hlp;
	private: System::Windows::Forms::Label^  Prev_Label;
	private: System::Windows::Forms::Label^  Next_Label;
	private: System::Windows::Forms::Button^  Prev_Button;
	private: System::Windows::Forms::Button^  Next_Button;
	private: System::Windows::Forms::ProgressBar^  Progress;
	private: System::Windows::Forms::Label^  stat;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  bod2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  Pict_B;
	private: System::Windows::Forms::PictureBox^  Pict_Bp;
	private: System::Windows::Forms::PictureBox^  Pict_D;
	private: System::Windows::Forms::PictureBox^  Pict_Dp;
	private: System::Windows::Forms::PictureBox^  Pict_F;
	private: System::Windows::Forms::PictureBox^  Pict_Fp;
	private: System::Windows::Forms::PictureBox^  Pict_L;
	private: System::Windows::Forms::PictureBox^  Pict_Lp;
	private: System::Windows::Forms::PictureBox^  Pict_R;
	private: System::Windows::Forms::PictureBox^  Pict_Rp;
	private: System::Windows::Forms::PictureBox^  Pict_U;
	private: System::Windows::Forms::PictureBox^  Pict_Up;
	private: System::Windows::Forms::PictureBox^  Pict_Bt;
	private: System::Windows::Forms::PictureBox^  Pict_Dt;
	private: System::Windows::Forms::PictureBox^  Pict_Ft;
	private: System::Windows::Forms::PictureBox^  Pict_Lt;
	private: System::Windows::Forms::PictureBox^  Pict_Rt;
	private: System::Windows::Forms::PictureBox^  Pict_Ut;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  Orange_Pick;
	private: System::Windows::Forms::PictureBox^  Blue_Pick;
	private: System::Windows::Forms::PictureBox^  Red_Pick;
	private: System::Windows::Forms::PictureBox^  Yellow_Pick;
	private: System::Windows::Forms::PictureBox^  White_Pick;
	private: System::Windows::Forms::PictureBox^  Green_Pick;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  Picked;
	private: System::Windows::Forms::PictureBox^  Picker_P;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	public: System::Windows::Forms::RadioButton^  Face;
	private: System::Windows::Forms::Button^  Setting_Button;
	public: System::Windows::Forms::RadioButton^  OpCube;
	private: System::Windows::Forms::PictureBox^  Icon_Pict;
	private: System::Windows::Forms::Button^  BTS;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::PictureBox^  _50;
	private: System::Windows::Forms::PictureBox^  _25;
	private: System::Windows::Forms::PictureBox^  _20;
	private: System::Windows::Forms::PictureBox^  _19;
	private: System::Windows::Forms::PictureBox^  _23;
	private: System::Windows::Forms::PictureBox^  _26;
	private: System::Windows::Forms::PictureBox^  _18;
	private: System::Windows::Forms::PictureBox^  _17;
	private: System::Windows::Forms::PictureBox^  _16;
	private: System::Windows::Forms::PictureBox^  _13;
	private: System::Windows::Forms::PictureBox^  _12;
	private: System::Windows::Forms::PictureBox^  _15;
	private: System::Windows::Forms::PictureBox^  _10;
	private: System::Windows::Forms::PictureBox^  _46;
	private: System::Windows::Forms::PictureBox^  _22;
	private: System::Windows::Forms::PictureBox^  _47;
	private: System::Windows::Forms::PictureBox^  _41;
	private: System::Windows::Forms::PictureBox^  _32;
	private: System::Windows::Forms::PictureBox^  _14;
	private: System::Windows::Forms::PictureBox^  _8;
	private: System::Windows::Forms::PictureBox^  _7;
	private: System::Windows::Forms::PictureBox^  _52;
	private: System::Windows::Forms::PictureBox^  _4;
	private: System::Windows::Forms::PictureBox^  _28;
	private: System::Windows::Forms::PictureBox^  _53;
	private: System::Windows::Forms::PictureBox^  _29;
	private: System::Windows::Forms::PictureBox^  _30;
	private: System::Windows::Forms::PictureBox^  _21;
	private: System::Windows::Forms::PictureBox^  _37;
	private: System::Windows::Forms::PictureBox^  _38;
	private: System::Windows::Forms::PictureBox^  _27;
	private: System::Windows::Forms::PictureBox^  _39;
	private: System::Windows::Forms::PictureBox^  _34;
	private: System::Windows::Forms::PictureBox^  _49;
	private: System::Windows::Forms::PictureBox^  _35;
	private: System::Windows::Forms::PictureBox^  _2;
	private: System::Windows::Forms::PictureBox^  _36;
	private: System::Windows::Forms::PictureBox^  _43;
	private: System::Windows::Forms::PictureBox^  _5;
	private: System::Windows::Forms::PictureBox^  _44;
	private: System::Windows::Forms::PictureBox^  _48;
	private: System::Windows::Forms::PictureBox^  _45;
	private: System::Windows::Forms::PictureBox^  _24;
	private: System::Windows::Forms::PictureBox^  _31;
	private: System::Windows::Forms::PictureBox^  _54;
	private: System::Windows::Forms::PictureBox^  _33;
	private: System::Windows::Forms::PictureBox^  _3;
	private: System::Windows::Forms::PictureBox^  _40;
	private: System::Windows::Forms::PictureBox^  _51;
	private: System::Windows::Forms::PictureBox^  _42;
	private: System::Windows::Forms::PictureBox^  _6;
	private: System::Windows::Forms::PictureBox^  _1;
	private: System::Windows::Forms::PictureBox^  _9;
	private: System::Windows::Forms::PictureBox^  __5;
	private: System::Windows::Forms::PictureBox^  __1;
	private: System::Windows::Forms::PictureBox^  __2;
	private: System::Windows::Forms::PictureBox^  __3;
	private: System::Windows::Forms::PictureBox^  __7;
	private: System::Windows::Forms::PictureBox^  __8;
	private: System::Windows::Forms::PictureBox^  __9;
	private: System::Windows::Forms::PictureBox^  __4;
	private: System::Windows::Forms::PictureBox^  __6;
	private: System::Windows::Forms::PictureBox^  __32;
	private: System::Windows::Forms::PictureBox^  __28;
	private: System::Windows::Forms::PictureBox^  __29;
	private: System::Windows::Forms::PictureBox^  __30;
	private: System::Windows::Forms::PictureBox^  __34;
	private: System::Windows::Forms::PictureBox^  __35;
	private: System::Windows::Forms::PictureBox^  __36;
	private: System::Windows::Forms::PictureBox^  __31;
	private: System::Windows::Forms::PictureBox^  __33;
	private: System::Windows::Forms::PictureBox^  __41;
	private: System::Windows::Forms::PictureBox^  __43;
	private: System::Windows::Forms::PictureBox^  __40;
	private: System::Windows::Forms::PictureBox^  __37;
	private: System::Windows::Forms::PictureBox^  __45;
	private: System::Windows::Forms::PictureBox^  __42;
	private: System::Windows::Forms::PictureBox^  __39;
	private: System::Windows::Forms::PictureBox^  __44;
	private: System::Windows::Forms::PictureBox^  __38;
	private: System::Windows::Forms::PictureBox^  __50;
	private: System::Windows::Forms::PictureBox^  __48;
	private: System::Windows::Forms::PictureBox^  __51;
	private: System::Windows::Forms::PictureBox^  __54;
	private: System::Windows::Forms::PictureBox^  __46;
	private: System::Windows::Forms::PictureBox^  __49;
	private: System::Windows::Forms::PictureBox^  __52;
	private: System::Windows::Forms::PictureBox^  __47;
	private: System::Windows::Forms::PictureBox^  __53;
	private: System::Windows::Forms::PictureBox^  __14;
	private: System::Windows::Forms::PictureBox^  __10;
	private: System::Windows::Forms::PictureBox^  __11;
	private: System::Windows::Forms::PictureBox^  __12;
	private: System::Windows::Forms::PictureBox^  __16;
	private: System::Windows::Forms::PictureBox^  __17;
	private: System::Windows::Forms::PictureBox^  __18;
	private: System::Windows::Forms::PictureBox^  __13;
	private: System::Windows::Forms::PictureBox^  __15;
	private: System::Windows::Forms::PictureBox^  __23;
	private: System::Windows::Forms::PictureBox^  __19;
	private: System::Windows::Forms::PictureBox^  __20;
	private: System::Windows::Forms::PictureBox^  __21;
	private: System::Windows::Forms::PictureBox^  __25;
	private: System::Windows::Forms::PictureBox^  __26;
	private: System::Windows::Forms::PictureBox^  __27;
	private: System::Windows::Forms::PictureBox^  __22;
	private: System::Windows::Forms::PictureBox^  __24;
	private: System::Windows::Forms::PictureBox^  _11;
	private: System::Windows::Forms::Label^  shayam;
	private: System::Windows::Forms::Button^  Solve_Button_2;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Button^  Solve_Button;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	public: System::Windows::Forms::Panel^  Inp_Panel;
	private: System::Windows::Forms::Button^  Reset_Button;
private: System::Windows::Forms::Button^  Scan;
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
				 System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Inp_Form::typeid));
				 this->Cust_Close = (gcnew System::Windows::Forms::Button());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->Alg_Label = (gcnew System::Windows::Forms::Label());
				 this->Title = (gcnew System::Windows::Forms::Label());
				 this->Again_Button = (gcnew System::Windows::Forms::Button());
				 this->Help_Button = (gcnew System::Windows::Forms::Button());
				 this->About_Button = (gcnew System::Windows::Forms::Button());
				 this->bod1 = (gcnew System::Windows::Forms::Label());
				 this->bod3 = (gcnew System::Windows::Forms::Label());
				 this->bod4 = (gcnew System::Windows::Forms::Label());
				 this->bod5 = (gcnew System::Windows::Forms::Label());
				 this->Not_Hlp = (gcnew System::Windows::Forms::Button());
				 this->Prev_Label = (gcnew System::Windows::Forms::Label());
				 this->Next_Label = (gcnew System::Windows::Forms::Label());
				 this->Prev_Button = (gcnew System::Windows::Forms::Button());
				 this->Next_Button = (gcnew System::Windows::Forms::Button());
				 this->Progress = (gcnew System::Windows::Forms::ProgressBar());
				 this->stat = (gcnew System::Windows::Forms::Label());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->bod2 = (gcnew System::Windows::Forms::Label());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->Pict_B = (gcnew System::Windows::Forms::PictureBox());
				 this->Pict_Bp = (gcnew System::Windows::Forms::PictureBox());
				 this->Pict_D = (gcnew System::Windows::Forms::PictureBox());
				 this->Pict_Dp = (gcnew System::Windows::Forms::PictureBox());
				 this->Pict_F = (gcnew System::Windows::Forms::PictureBox());
				 this->Pict_Fp = (gcnew System::Windows::Forms::PictureBox());
				 this->Pict_L = (gcnew System::Windows::Forms::PictureBox());
				 this->Pict_Lp = (gcnew System::Windows::Forms::PictureBox());
				 this->Pict_R = (gcnew System::Windows::Forms::PictureBox());
				 this->Pict_Rp = (gcnew System::Windows::Forms::PictureBox());
				 this->Pict_U = (gcnew System::Windows::Forms::PictureBox());
				 this->Pict_Up = (gcnew System::Windows::Forms::PictureBox());
				 this->Pict_Bt = (gcnew System::Windows::Forms::PictureBox());
				 this->Pict_Dt = (gcnew System::Windows::Forms::PictureBox());
				 this->Pict_Ft = (gcnew System::Windows::Forms::PictureBox());
				 this->Pict_Lt = (gcnew System::Windows::Forms::PictureBox());
				 this->Pict_Rt = (gcnew System::Windows::Forms::PictureBox());
				 this->Pict_Ut = (gcnew System::Windows::Forms::PictureBox());
				 this->label4 = (gcnew System::Windows::Forms::Label());
				 this->label5 = (gcnew System::Windows::Forms::Label());
				 this->Orange_Pick = (gcnew System::Windows::Forms::PictureBox());
				 this->Blue_Pick = (gcnew System::Windows::Forms::PictureBox());
				 this->Red_Pick = (gcnew System::Windows::Forms::PictureBox());
				 this->Yellow_Pick = (gcnew System::Windows::Forms::PictureBox());
				 this->White_Pick = (gcnew System::Windows::Forms::PictureBox());
				 this->Green_Pick = (gcnew System::Windows::Forms::PictureBox());
				 this->label6 = (gcnew System::Windows::Forms::Label());
				 this->Picked = (gcnew System::Windows::Forms::Label());
				 this->Picker_P = (gcnew System::Windows::Forms::PictureBox());
				 this->label9 = (gcnew System::Windows::Forms::Label());
				 this->label10 = (gcnew System::Windows::Forms::Label());
				 this->label11 = (gcnew System::Windows::Forms::Label());
				 this->label12 = (gcnew System::Windows::Forms::Label());
				 this->label7 = (gcnew System::Windows::Forms::Label());
				 this->label13 = (gcnew System::Windows::Forms::Label());
				 this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
				 this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
				 this->label14 = (gcnew System::Windows::Forms::Label());
				 this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
				 this->Setting_Button = (gcnew System::Windows::Forms::Button());
				 this->Icon_Pict = (gcnew System::Windows::Forms::PictureBox());
				 this->Reset_Button = (gcnew System::Windows::Forms::Button());
				 this->Scan = (gcnew System::Windows::Forms::Button());
				 this->BTS = (gcnew System::Windows::Forms::Button());
				 this->Face = (gcnew System::Windows::Forms::RadioButton());
				 this->OpCube = (gcnew System::Windows::Forms::RadioButton());
				 this->label8 = (gcnew System::Windows::Forms::Label());
				 this->_50 = (gcnew System::Windows::Forms::PictureBox());
				 this->_25 = (gcnew System::Windows::Forms::PictureBox());
				 this->_20 = (gcnew System::Windows::Forms::PictureBox());
				 this->_19 = (gcnew System::Windows::Forms::PictureBox());
				 this->_23 = (gcnew System::Windows::Forms::PictureBox());
				 this->_26 = (gcnew System::Windows::Forms::PictureBox());
				 this->_18 = (gcnew System::Windows::Forms::PictureBox());
				 this->_17 = (gcnew System::Windows::Forms::PictureBox());
				 this->_16 = (gcnew System::Windows::Forms::PictureBox());
				 this->_13 = (gcnew System::Windows::Forms::PictureBox());
				 this->_12 = (gcnew System::Windows::Forms::PictureBox());
				 this->_15 = (gcnew System::Windows::Forms::PictureBox());
				 this->_10 = (gcnew System::Windows::Forms::PictureBox());
				 this->_46 = (gcnew System::Windows::Forms::PictureBox());
				 this->_22 = (gcnew System::Windows::Forms::PictureBox());
				 this->_47 = (gcnew System::Windows::Forms::PictureBox());
				 this->_41 = (gcnew System::Windows::Forms::PictureBox());
				 this->_32 = (gcnew System::Windows::Forms::PictureBox());
				 this->_14 = (gcnew System::Windows::Forms::PictureBox());
				 this->_8 = (gcnew System::Windows::Forms::PictureBox());
				 this->_7 = (gcnew System::Windows::Forms::PictureBox());
				 this->_52 = (gcnew System::Windows::Forms::PictureBox());
				 this->_4 = (gcnew System::Windows::Forms::PictureBox());
				 this->_28 = (gcnew System::Windows::Forms::PictureBox());
				 this->_53 = (gcnew System::Windows::Forms::PictureBox());
				 this->_29 = (gcnew System::Windows::Forms::PictureBox());
				 this->_30 = (gcnew System::Windows::Forms::PictureBox());
				 this->_21 = (gcnew System::Windows::Forms::PictureBox());
				 this->_37 = (gcnew System::Windows::Forms::PictureBox());
				 this->_38 = (gcnew System::Windows::Forms::PictureBox());
				 this->_27 = (gcnew System::Windows::Forms::PictureBox());
				 this->_39 = (gcnew System::Windows::Forms::PictureBox());
				 this->_34 = (gcnew System::Windows::Forms::PictureBox());
				 this->_49 = (gcnew System::Windows::Forms::PictureBox());
				 this->_35 = (gcnew System::Windows::Forms::PictureBox());
				 this->_2 = (gcnew System::Windows::Forms::PictureBox());
				 this->_36 = (gcnew System::Windows::Forms::PictureBox());
				 this->_43 = (gcnew System::Windows::Forms::PictureBox());
				 this->_5 = (gcnew System::Windows::Forms::PictureBox());
				 this->_44 = (gcnew System::Windows::Forms::PictureBox());
				 this->_48 = (gcnew System::Windows::Forms::PictureBox());
				 this->_45 = (gcnew System::Windows::Forms::PictureBox());
				 this->_24 = (gcnew System::Windows::Forms::PictureBox());
				 this->_31 = (gcnew System::Windows::Forms::PictureBox());
				 this->_54 = (gcnew System::Windows::Forms::PictureBox());
				 this->_33 = (gcnew System::Windows::Forms::PictureBox());
				 this->_3 = (gcnew System::Windows::Forms::PictureBox());
				 this->_40 = (gcnew System::Windows::Forms::PictureBox());
				 this->_51 = (gcnew System::Windows::Forms::PictureBox());
				 this->_42 = (gcnew System::Windows::Forms::PictureBox());
				 this->_6 = (gcnew System::Windows::Forms::PictureBox());
				 this->_1 = (gcnew System::Windows::Forms::PictureBox());
				 this->_9 = (gcnew System::Windows::Forms::PictureBox());
				 this->__5 = (gcnew System::Windows::Forms::PictureBox());
				 this->__1 = (gcnew System::Windows::Forms::PictureBox());
				 this->__2 = (gcnew System::Windows::Forms::PictureBox());
				 this->__3 = (gcnew System::Windows::Forms::PictureBox());
				 this->__7 = (gcnew System::Windows::Forms::PictureBox());
				 this->__8 = (gcnew System::Windows::Forms::PictureBox());
				 this->__9 = (gcnew System::Windows::Forms::PictureBox());
				 this->__4 = (gcnew System::Windows::Forms::PictureBox());
				 this->__6 = (gcnew System::Windows::Forms::PictureBox());
				 this->__32 = (gcnew System::Windows::Forms::PictureBox());
				 this->__28 = (gcnew System::Windows::Forms::PictureBox());
				 this->__29 = (gcnew System::Windows::Forms::PictureBox());
				 this->__30 = (gcnew System::Windows::Forms::PictureBox());
				 this->__34 = (gcnew System::Windows::Forms::PictureBox());
				 this->__35 = (gcnew System::Windows::Forms::PictureBox());
				 this->__36 = (gcnew System::Windows::Forms::PictureBox());
				 this->__31 = (gcnew System::Windows::Forms::PictureBox());
				 this->__33 = (gcnew System::Windows::Forms::PictureBox());
				 this->__41 = (gcnew System::Windows::Forms::PictureBox());
				 this->__43 = (gcnew System::Windows::Forms::PictureBox());
				 this->__40 = (gcnew System::Windows::Forms::PictureBox());
				 this->__37 = (gcnew System::Windows::Forms::PictureBox());
				 this->__45 = (gcnew System::Windows::Forms::PictureBox());
				 this->__42 = (gcnew System::Windows::Forms::PictureBox());
				 this->__39 = (gcnew System::Windows::Forms::PictureBox());
				 this->__44 = (gcnew System::Windows::Forms::PictureBox());
				 this->__38 = (gcnew System::Windows::Forms::PictureBox());
				 this->__50 = (gcnew System::Windows::Forms::PictureBox());
				 this->__48 = (gcnew System::Windows::Forms::PictureBox());
				 this->__51 = (gcnew System::Windows::Forms::PictureBox());
				 this->__54 = (gcnew System::Windows::Forms::PictureBox());
				 this->__46 = (gcnew System::Windows::Forms::PictureBox());
				 this->__49 = (gcnew System::Windows::Forms::PictureBox());
				 this->__52 = (gcnew System::Windows::Forms::PictureBox());
				 this->__47 = (gcnew System::Windows::Forms::PictureBox());
				 this->__53 = (gcnew System::Windows::Forms::PictureBox());
				 this->__14 = (gcnew System::Windows::Forms::PictureBox());
				 this->__10 = (gcnew System::Windows::Forms::PictureBox());
				 this->__11 = (gcnew System::Windows::Forms::PictureBox());
				 this->__12 = (gcnew System::Windows::Forms::PictureBox());
				 this->__16 = (gcnew System::Windows::Forms::PictureBox());
				 this->__17 = (gcnew System::Windows::Forms::PictureBox());
				 this->__18 = (gcnew System::Windows::Forms::PictureBox());
				 this->__13 = (gcnew System::Windows::Forms::PictureBox());
				 this->__15 = (gcnew System::Windows::Forms::PictureBox());
				 this->__23 = (gcnew System::Windows::Forms::PictureBox());
				 this->__19 = (gcnew System::Windows::Forms::PictureBox());
				 this->__20 = (gcnew System::Windows::Forms::PictureBox());
				 this->__21 = (gcnew System::Windows::Forms::PictureBox());
				 this->__25 = (gcnew System::Windows::Forms::PictureBox());
				 this->__26 = (gcnew System::Windows::Forms::PictureBox());
				 this->__27 = (gcnew System::Windows::Forms::PictureBox());
				 this->__22 = (gcnew System::Windows::Forms::PictureBox());
				 this->__24 = (gcnew System::Windows::Forms::PictureBox());
				 this->_11 = (gcnew System::Windows::Forms::PictureBox());
				 this->shayam = (gcnew System::Windows::Forms::Label());
				 this->Solve_Button_2 = (gcnew System::Windows::Forms::Button());
				 this->label15 = (gcnew System::Windows::Forms::Label());
				 this->Solve_Button = (gcnew System::Windows::Forms::Button());
				 this->label16 = (gcnew System::Windows::Forms::Label());
				 this->label17 = (gcnew System::Windows::Forms::Label());
				 this->label18 = (gcnew System::Windows::Forms::Label());
				 this->label19 = (gcnew System::Windows::Forms::Label());
				 this->label20 = (gcnew System::Windows::Forms::Label());
				 this->label21 = (gcnew System::Windows::Forms::Label());
				 this->label22 = (gcnew System::Windows::Forms::Label());
				 this->label23 = (gcnew System::Windows::Forms::Label());
				 this->label24 = (gcnew System::Windows::Forms::Label());
				 this->label25 = (gcnew System::Windows::Forms::Label());
				 this->label26 = (gcnew System::Windows::Forms::Label());
				 this->label27 = (gcnew System::Windows::Forms::Label());
				 this->label28 = (gcnew System::Windows::Forms::Label());
				 this->label32 = (gcnew System::Windows::Forms::Label());
				 this->label31 = (gcnew System::Windows::Forms::Label());
				 this->label30 = (gcnew System::Windows::Forms::Label());
				 this->label29 = (gcnew System::Windows::Forms::Label());
				 this->label36 = (gcnew System::Windows::Forms::Label());
				 this->label35 = (gcnew System::Windows::Forms::Label());
				 this->label34 = (gcnew System::Windows::Forms::Label());
				 this->label33 = (gcnew System::Windows::Forms::Label());
				 this->label40 = (gcnew System::Windows::Forms::Label());
				 this->label39 = (gcnew System::Windows::Forms::Label());
				 this->label38 = (gcnew System::Windows::Forms::Label());
				 this->label37 = (gcnew System::Windows::Forms::Label());
				 this->label44 = (gcnew System::Windows::Forms::Label());
				 this->label43 = (gcnew System::Windows::Forms::Label());
				 this->label42 = (gcnew System::Windows::Forms::Label());
				 this->label41 = (gcnew System::Windows::Forms::Label());
				 this->label48 = (gcnew System::Windows::Forms::Label());
				 this->label47 = (gcnew System::Windows::Forms::Label());
				 this->label46 = (gcnew System::Windows::Forms::Label());
				 this->label45 = (gcnew System::Windows::Forms::Label());
				 this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
				 this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
				 this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
				 this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
				 this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
				 this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
				 this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
				 this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
				 this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
				 this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
				 this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
				 this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
				 this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
				 this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
				 this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
				 this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
				 this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
				 this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
				 this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
				 this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
				 this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
				 this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
				 this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
				 this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
				 this->Inp_Panel = (gcnew System::Windows::Forms::Panel());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_B))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_Bp))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_D))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_Dp))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_F))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_Fp))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_L))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_Lp))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_R))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_Rp))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_U))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_Up))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_Bt))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_Dt))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_Ft))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_Lt))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_Rt))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_Ut))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Orange_Pick))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Blue_Pick))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Red_Pick))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Yellow_Pick))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->White_Pick))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Green_Pick))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Picker_P))->BeginInit();
				 this->groupBox3->SuspendLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icon_Pict))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_50))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_25))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_20))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_19))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_23))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_26))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_18))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_17))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_16))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_13))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_12))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_15))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_10))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_46))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_22))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_47))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_41))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_32))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_14))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_8))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_7))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_52))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_4))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_28))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_53))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_29))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_30))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_21))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_37))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_38))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_27))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_39))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_34))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_49))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_35))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_2))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_36))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_43))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_5))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_44))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_48))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_45))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_24))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_31))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_54))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_33))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_3))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_40))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_51))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_42))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_6))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_1))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_9))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__5))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__1))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__2))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__3))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__7))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__8))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__9))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__4))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__6))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__32))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__28))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__29))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__30))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__34))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__35))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__36))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__31))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__33))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__41))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__43))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__40))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__37))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__45))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__42))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__39))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__44))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__38))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__50))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__48))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__51))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__54))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__46))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__49))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__52))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__47))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__53))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__14))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__10))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__11))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__12))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__16))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__17))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__18))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__13))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__15))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__23))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__19))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__20))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__21))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__25))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__26))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__27))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__22))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__24))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_11))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
				 this->Inp_Panel->SuspendLayout();
				 this->SuspendLayout();
				 // 
				 // Cust_Close
				 // 
				 this->Cust_Close->BackColor = System::Drawing::SystemColors::AppWorkspace;
				 this->Cust_Close->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
				 this->Cust_Close->Cursor = System::Windows::Forms::Cursors::Default;
				 this->Cust_Close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->Cust_Close->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->Cust_Close->ForeColor = System::Drawing::Color::Black;
				 this->Cust_Close->Location = System::Drawing::Point(417, 5);
				 this->Cust_Close->Name = L"Cust_Close";
				 this->Cust_Close->Size = System::Drawing::Size(26, 26);
				 this->Cust_Close->TabIndex = 95;
				 this->Cust_Close->TabStop = false;
				 this->Cust_Close->Text = L"x";
				 this->Cust_Close->TextAlign = System::Drawing::ContentAlignment::TopCenter;
				 this->toolTip1->SetToolTip(this->Cust_Close, L"Close");
				 this->Cust_Close->UseVisualStyleBackColor = false;
				 this->Cust_Close->Visible = false;
				 this->Cust_Close->Click += gcnew System::EventHandler(this, &Inp_Form::Cust_Close_Click);
				 this->Cust_Close->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Inp_Form::Inp_Form_KeyDown);
				 this->Cust_Close->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Inp_Form::Cust_Close_PreviewKeyDown);
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->BackColor = System::Drawing::SystemColors::ActiveBorder;
				 this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label1->Location = System::Drawing::Point(75, 0);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(135, 21);
				 this->label1->TabIndex = 161;
				 this->label1->Text = L"Generated Solution :";
				 // 
				 // Alg_Label
				 // 
				 this->Alg_Label->BackColor = System::Drawing::Color::Transparent;
				 this->Alg_Label->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->Alg_Label->Font = (gcnew System::Drawing::Font(L"Verdana", 36, System::Drawing::FontStyle::Bold));
				 this->Alg_Label->ForeColor = System::Drawing::SystemColors::ControlText;
				 this->Alg_Label->Location = System::Drawing::Point(111, 434);
				 this->Alg_Label->Name = L"Alg_Label";
				 this->Alg_Label->Size = System::Drawing::Size(99, 69);
				 this->Alg_Label->TabIndex = 162;
				 this->Alg_Label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 // 
				 // Title
				 // 
				 this->Title->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->Title->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.1F, System::Drawing::FontStyle::Bold));
				 this->Title->ForeColor = System::Drawing::Color::Black;
				 this->Title->Location = System::Drawing::Point(5, 5);
				 this->Title->Name = L"Title";
				 this->Title->Size = System::Drawing::Size(128, 26);
				 this->Title->TabIndex = 3;
				 this->Title->Text = L"    CubeX v1.0";
				 this->Title->Visible = false;
				 this->Title->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Inp_Form::label5_MouseDown);
				 this->Title->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Inp_Form::label5_MouseMove);
				 this->Title->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Inp_Form::label5_MouseUp);
				 // 
				 // Again_Button
				 // 
				 this->Again_Button->Enabled = false;
				 this->Again_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->Again_Button->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->Again_Button->Location = System::Drawing::Point(5, 542);
				 this->Again_Button->Name = L"Again_Button";
				 this->Again_Button->Size = System::Drawing::Size(438, 29);
				 this->Again_Button->TabIndex = 173;
				 this->Again_Button->TabStop = false;
				 this->Again_Button->Text = L"Awesome, Let\'s Do It Again!";
				 this->Again_Button->UseVisualStyleBackColor = true;
				 this->Again_Button->Click += gcnew System::EventHandler(this, &Inp_Form::Again_Button_Click);
				 this->Again_Button->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Inp_Form::Inp_Form_KeyDown);
				 this->Again_Button->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Inp_Form::Cust_Close_PreviewKeyDown);
				 // 
				 // Help_Button
				 // 
				 this->Help_Button->BackColor = System::Drawing::SystemColors::AppWorkspace;
				 this->Help_Button->Cursor = System::Windows::Forms::Cursors::Help;
				 this->Help_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->Help_Button->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->Help_Button->Location = System::Drawing::Point(388, 5);
				 this->Help_Button->Name = L"Help_Button";
				 this->Help_Button->Size = System::Drawing::Size(26, 26);
				 this->Help_Button->TabIndex = 174;
				 this->Help_Button->TabStop = false;
				 this->Help_Button->Text = L"\?";
				 this->toolTip1->SetToolTip(this->Help_Button, L"Help");
				 this->Help_Button->UseVisualStyleBackColor = false;
				 this->Help_Button->Visible = false;
				 this->Help_Button->Click += gcnew System::EventHandler(this, &Inp_Form::Help_Button_Click);
				 this->Help_Button->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Inp_Form::Inp_Form_KeyDown);
				 this->Help_Button->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Inp_Form::Cust_Close_PreviewKeyDown);
				 // 
				 // About_Button
				 // 
				 this->About_Button->BackColor = System::Drawing::SystemColors::AppWorkspace;
				 this->About_Button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				 this->About_Button->Cursor = System::Windows::Forms::Cursors::Default;
				 this->About_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->About_Button->Font = (gcnew System::Drawing::Font(L"Verdana", 8.3F));
				 this->About_Button->Location = System::Drawing::Point(110, 8);
				 this->About_Button->Name = L"About_Button";
				 this->About_Button->Size = System::Drawing::Size(20, 20);
				 this->About_Button->TabIndex = 175;
				 this->About_Button->TabStop = false;
				 this->About_Button->Text = L"i";
				 this->toolTip1->SetToolTip(this->About_Button, L"About");
				 this->About_Button->UseVisualStyleBackColor = false;
				 this->About_Button->Visible = false;
				 this->About_Button->Click += gcnew System::EventHandler(this, &Inp_Form::About_Button_Click);
				 this->About_Button->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Inp_Form::Inp_Form_KeyDown);
				 this->About_Button->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Inp_Form::Cust_Close_PreviewKeyDown);
				 // 
				 // bod1
				 // 
				 this->bod1->BackColor = System::Drawing::Color::Black;
				 this->bod1->ForeColor = System::Drawing::SystemColors::ControlText;
				 this->bod1->Location = System::Drawing::Point(-1, 0);
				 this->bod1->Name = L"bod1";
				 this->bod1->Size = System::Drawing::Size(3, 575);
				 this->bod1->TabIndex = 177;
				 // 
				 // bod3
				 // 
				 this->bod3->BackColor = System::Drawing::Color::Black;
				 this->bod3->ForeColor = System::Drawing::SystemColors::ControlText;
				 this->bod3->Location = System::Drawing::Point(446, -1);
				 this->bod3->Name = L"bod3";
				 this->bod3->Size = System::Drawing::Size(3, 575);
				 this->bod3->TabIndex = 178;
				 // 
				 // bod4
				 // 
				 this->bod4->BackColor = System::Drawing::Color::Black;
				 this->bod4->ForeColor = System::Drawing::SystemColors::ControlText;
				 this->bod4->Location = System::Drawing::Point(-1, -1);
				 this->bod4->Name = L"bod4";
				 this->bod4->Size = System::Drawing::Size(449, 3);
				 this->bod4->TabIndex = 179;
				 // 
				 // bod5
				 // 
				 this->bod5->BackColor = System::Drawing::Color::Black;
				 this->bod5->ForeColor = System::Drawing::SystemColors::ControlText;
				 this->bod5->Location = System::Drawing::Point(0, 574);
				 this->bod5->Name = L"bod5";
				 this->bod5->Size = System::Drawing::Size(449, 3);
				 this->bod5->TabIndex = 181;
				 // 
				 // Not_Hlp
				 // 
				 this->Not_Hlp->BackColor = System::Drawing::SystemColors::AppWorkspace;
				 this->Not_Hlp->Cursor = System::Windows::Forms::Cursors::Help;
				 this->Not_Hlp->Enabled = false;
				 this->Not_Hlp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->Not_Hlp->Font = (gcnew System::Drawing::Font(L"Verdana", 5.5F));
				 this->Not_Hlp->Location = System::Drawing::Point(221, 400);
				 this->Not_Hlp->Margin = System::Windows::Forms::Padding(0);
				 this->Not_Hlp->Name = L"Not_Hlp";
				 this->Not_Hlp->Size = System::Drawing::Size(16, 18);
				 this->Not_Hlp->TabIndex = 182;
				 this->Not_Hlp->TabStop = false;
				 this->Not_Hlp->Text = L"\?";
				 this->toolTip1->SetToolTip(this->Not_Hlp, L"Help with Notations");
				 this->Not_Hlp->UseVisualStyleBackColor = false;
				 this->Not_Hlp->Click += gcnew System::EventHandler(this, &Inp_Form::Not_Hlp_Click);
				 this->Not_Hlp->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Inp_Form::Inp_Form_KeyDown);
				 this->Not_Hlp->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Inp_Form::Cust_Close_PreviewKeyDown);
				 // 
				 // Prev_Label
				 // 
				 this->Prev_Label->BackColor = System::Drawing::Color::Transparent;
				 this->Prev_Label->Font = (gcnew System::Drawing::Font(L"Verdana", 20, System::Drawing::FontStyle::Bold));
				 this->Prev_Label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					 static_cast<System::Int32>(static_cast<System::Byte>(64)));
				 this->Prev_Label->Location = System::Drawing::Point(62, 455);
				 this->Prev_Label->Name = L"Prev_Label";
				 this->Prev_Label->Size = System::Drawing::Size(57, 33);
				 this->Prev_Label->TabIndex = 184;
				 this->Prev_Label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 // 
				 // Next_Label
				 // 
				 this->Next_Label->Font = (gcnew System::Drawing::Font(L"Verdana", 20, System::Drawing::FontStyle::Bold));
				 this->Next_Label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					 static_cast<System::Int32>(static_cast<System::Byte>(64)));
				 this->Next_Label->Location = System::Drawing::Point(202, 455);
				 this->Next_Label->Name = L"Next_Label";
				 this->Next_Label->Size = System::Drawing::Size(57, 33);
				 this->Next_Label->TabIndex = 185;
				 this->Next_Label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 // 
				 // Prev_Button
				 // 
				 this->Prev_Button->BackColor = System::Drawing::SystemColors::AppWorkspace;
				 this->Prev_Button->Cursor = System::Windows::Forms::Cursors::PanWest;
				 this->Prev_Button->Enabled = false;
				 this->Prev_Button->Font = (gcnew System::Drawing::Font(L"Arial", 13.25F));
				 this->Prev_Button->Location = System::Drawing::Point(17, 434);
				 this->Prev_Button->Name = L"Prev_Button";
				 this->Prev_Button->Size = System::Drawing::Size(41, 73);
				 this->Prev_Button->TabIndex = 186;
				 this->Prev_Button->TabStop = false;
				 this->Prev_Button->Tag = L"⏪";
				 this->Prev_Button->Text = L"◀";
				 this->toolTip1->SetToolTip(this->Prev_Button, L"Previous Move");
				 this->Prev_Button->UseVisualStyleBackColor = false;
				 this->Prev_Button->Click += gcnew System::EventHandler(this, &Inp_Form::Prev_Button_Click);
				 this->Prev_Button->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Inp_Form::Inp_Form_KeyDown);
				 this->Prev_Button->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Inp_Form::Cust_Close_PreviewKeyDown);
				 // 
				 // Next_Button
				 // 
				 this->Next_Button->BackColor = System::Drawing::SystemColors::AppWorkspace;
				 this->Next_Button->Cursor = System::Windows::Forms::Cursors::PanEast;
				 this->Next_Button->Enabled = false;
				 this->Next_Button->Font = (gcnew System::Drawing::Font(L"Arial", 13.25F));
				 this->Next_Button->Location = System::Drawing::Point(263, 434);
				 this->Next_Button->Name = L"Next_Button";
				 this->Next_Button->Size = System::Drawing::Size(41, 73);
				 this->Next_Button->TabIndex = 187;
				 this->Next_Button->TabStop = false;
				 this->Next_Button->Tag = L"⏩";
				 this->Next_Button->Text = L"▶";
				 this->toolTip1->SetToolTip(this->Next_Button, L"Next Move");
				 this->Next_Button->UseVisualStyleBackColor = false;
				 this->Next_Button->Click += gcnew System::EventHandler(this, &Inp_Form::Next_Button_Click);
				 this->Next_Button->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Inp_Form::Inp_Form_KeyDown);
				 this->Next_Button->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Inp_Form::Cust_Close_PreviewKeyDown);
				 // 
				 // Progress
				 // 
				 this->Progress->BackColor = System::Drawing::Color::DarkGray;
				 this->Progress->Location = System::Drawing::Point(8, 524);
				 this->Progress->Name = L"Progress";
				 this->Progress->Size = System::Drawing::Size(305, 9);
				 this->Progress->TabIndex = 188;
				 // 
				 // stat
				 // 
				 this->stat->Font = (gcnew System::Drawing::Font(L"Verdana", 7.25F, System::Drawing::FontStyle::Bold));
				 this->stat->Location = System::Drawing::Point(16, 511);
				 this->stat->Name = L"stat";
				 this->stat->Size = System::Drawing::Size(289, 12);
				 this->stat->TabIndex = 190;
				 this->stat->Text = L"Moves :";
				 this->stat->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->BackColor = System::Drawing::SystemColors::ActiveBorder;
				 this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label2->Location = System::Drawing::Point(332, 397);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(97, 21);
				 this->label2->TabIndex = 191;
				 this->label2->Text = L"Current Move:";
				 // 
				 // bod2
				 // 
				 this->bod2->BackColor = System::Drawing::Color::Black;
				 this->bod2->ForeColor = System::Drawing::SystemColors::ControlText;
				 this->bod2->Location = System::Drawing::Point(2, 388);
				 this->bod2->Name = L"bod2";
				 this->bod2->Size = System::Drawing::Size(444, 3);
				 this->bod2->TabIndex = 180;
				 // 
				 // label3
				 // 
				 this->label3->BackColor = System::Drawing::Color::Black;
				 this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
				 this->label3->Location = System::Drawing::Point(2, 538);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(444, 3);
				 this->label3->TabIndex = 193;
				 // 
				 // Pict_B
				 // 
				 this->Pict_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pict_B.Image")));
				 this->Pict_B->Location = System::Drawing::Point(330, 430);
				 this->Pict_B->Name = L"Pict_B";
				 this->Pict_B->Size = System::Drawing::Size(101, 95);
				 this->Pict_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->Pict_B->TabIndex = 194;
				 this->Pict_B->TabStop = false;
				 // 
				 // Pict_Bp
				 // 
				 this->Pict_Bp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pict_Bp.Image")));
				 this->Pict_Bp->Location = System::Drawing::Point(330, 430);
				 this->Pict_Bp->Name = L"Pict_Bp";
				 this->Pict_Bp->Size = System::Drawing::Size(101, 95);
				 this->Pict_Bp->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->Pict_Bp->TabIndex = 195;
				 this->Pict_Bp->TabStop = false;
				 // 
				 // Pict_D
				 // 
				 this->Pict_D->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pict_D.Image")));
				 this->Pict_D->Location = System::Drawing::Point(330, 430);
				 this->Pict_D->Name = L"Pict_D";
				 this->Pict_D->Size = System::Drawing::Size(101, 95);
				 this->Pict_D->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->Pict_D->TabIndex = 196;
				 this->Pict_D->TabStop = false;
				 // 
				 // Pict_Dp
				 // 
				 this->Pict_Dp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pict_Dp.Image")));
				 this->Pict_Dp->Location = System::Drawing::Point(330, 430);
				 this->Pict_Dp->Name = L"Pict_Dp";
				 this->Pict_Dp->Size = System::Drawing::Size(101, 95);
				 this->Pict_Dp->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->Pict_Dp->TabIndex = 197;
				 this->Pict_Dp->TabStop = false;
				 // 
				 // Pict_F
				 // 
				 this->Pict_F->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pict_F.Image")));
				 this->Pict_F->Location = System::Drawing::Point(330, 430);
				 this->Pict_F->Name = L"Pict_F";
				 this->Pict_F->Size = System::Drawing::Size(101, 95);
				 this->Pict_F->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->Pict_F->TabIndex = 198;
				 this->Pict_F->TabStop = false;
				 // 
				 // Pict_Fp
				 // 
				 this->Pict_Fp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pict_Fp.Image")));
				 this->Pict_Fp->Location = System::Drawing::Point(330, 430);
				 this->Pict_Fp->Name = L"Pict_Fp";
				 this->Pict_Fp->Size = System::Drawing::Size(101, 95);
				 this->Pict_Fp->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->Pict_Fp->TabIndex = 199;
				 this->Pict_Fp->TabStop = false;
				 // 
				 // Pict_L
				 // 
				 this->Pict_L->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pict_L.Image")));
				 this->Pict_L->Location = System::Drawing::Point(330, 430);
				 this->Pict_L->Name = L"Pict_L";
				 this->Pict_L->Size = System::Drawing::Size(101, 95);
				 this->Pict_L->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->Pict_L->TabIndex = 200;
				 this->Pict_L->TabStop = false;
				 // 
				 // Pict_Lp
				 // 
				 this->Pict_Lp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pict_Lp.Image")));
				 this->Pict_Lp->Location = System::Drawing::Point(330, 430);
				 this->Pict_Lp->Name = L"Pict_Lp";
				 this->Pict_Lp->Size = System::Drawing::Size(101, 95);
				 this->Pict_Lp->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->Pict_Lp->TabIndex = 201;
				 this->Pict_Lp->TabStop = false;
				 // 
				 // Pict_R
				 // 
				 this->Pict_R->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pict_R.Image")));
				 this->Pict_R->Location = System::Drawing::Point(330, 430);
				 this->Pict_R->Name = L"Pict_R";
				 this->Pict_R->Size = System::Drawing::Size(101, 95);
				 this->Pict_R->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->Pict_R->TabIndex = 202;
				 this->Pict_R->TabStop = false;
				 // 
				 // Pict_Rp
				 // 
				 this->Pict_Rp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pict_Rp.Image")));
				 this->Pict_Rp->Location = System::Drawing::Point(330, 430);
				 this->Pict_Rp->Name = L"Pict_Rp";
				 this->Pict_Rp->Size = System::Drawing::Size(101, 95);
				 this->Pict_Rp->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->Pict_Rp->TabIndex = 203;
				 this->Pict_Rp->TabStop = false;
				 // 
				 // Pict_U
				 // 
				 this->Pict_U->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pict_U.Image")));
				 this->Pict_U->Location = System::Drawing::Point(330, 430);
				 this->Pict_U->Name = L"Pict_U";
				 this->Pict_U->Size = System::Drawing::Size(101, 95);
				 this->Pict_U->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->Pict_U->TabIndex = 204;
				 this->Pict_U->TabStop = false;
				 // 
				 // Pict_Up
				 // 
				 this->Pict_Up->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pict_Up.Image")));
				 this->Pict_Up->Location = System::Drawing::Point(330, 430);
				 this->Pict_Up->Name = L"Pict_Up";
				 this->Pict_Up->Size = System::Drawing::Size(101, 95);
				 this->Pict_Up->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->Pict_Up->TabIndex = 205;
				 this->Pict_Up->TabStop = false;
				 // 
				 // Pict_Bt
				 // 
				 this->Pict_Bt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pict_Bt.Image")));
				 this->Pict_Bt->Location = System::Drawing::Point(330, 430);
				 this->Pict_Bt->Name = L"Pict_Bt";
				 this->Pict_Bt->Size = System::Drawing::Size(101, 95);
				 this->Pict_Bt->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->Pict_Bt->TabIndex = 206;
				 this->Pict_Bt->TabStop = false;
				 // 
				 // Pict_Dt
				 // 
				 this->Pict_Dt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pict_Dt.Image")));
				 this->Pict_Dt->Location = System::Drawing::Point(330, 430);
				 this->Pict_Dt->Name = L"Pict_Dt";
				 this->Pict_Dt->Size = System::Drawing::Size(101, 95);
				 this->Pict_Dt->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->Pict_Dt->TabIndex = 207;
				 this->Pict_Dt->TabStop = false;
				 // 
				 // Pict_Ft
				 // 
				 this->Pict_Ft->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pict_Ft.Image")));
				 this->Pict_Ft->Location = System::Drawing::Point(330, 430);
				 this->Pict_Ft->Name = L"Pict_Ft";
				 this->Pict_Ft->Size = System::Drawing::Size(101, 95);
				 this->Pict_Ft->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->Pict_Ft->TabIndex = 208;
				 this->Pict_Ft->TabStop = false;
				 // 
				 // Pict_Lt
				 // 
				 this->Pict_Lt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pict_Lt.Image")));
				 this->Pict_Lt->Location = System::Drawing::Point(330, 430);
				 this->Pict_Lt->Name = L"Pict_Lt";
				 this->Pict_Lt->Size = System::Drawing::Size(101, 95);
				 this->Pict_Lt->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->Pict_Lt->TabIndex = 209;
				 this->Pict_Lt->TabStop = false;
				 // 
				 // Pict_Rt
				 // 
				 this->Pict_Rt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pict_Rt.Image")));
				 this->Pict_Rt->Location = System::Drawing::Point(330, 430);
				 this->Pict_Rt->Name = L"Pict_Rt";
				 this->Pict_Rt->Size = System::Drawing::Size(101, 95);
				 this->Pict_Rt->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->Pict_Rt->TabIndex = 210;
				 this->Pict_Rt->TabStop = false;
				 // 
				 // Pict_Ut
				 // 
				 this->Pict_Ut->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pict_Ut.Image")));
				 this->Pict_Ut->Location = System::Drawing::Point(330, 429);
				 this->Pict_Ut->Name = L"Pict_Ut";
				 this->Pict_Ut->Size = System::Drawing::Size(101, 95);
				 this->Pict_Ut->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->Pict_Ut->TabIndex = 211;
				 this->Pict_Ut->TabStop = false;
				 // 
				 // label4
				 // 
				 this->label4->BackColor = System::Drawing::Color::Black;
				 this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
				 this->label4->Location = System::Drawing::Point(2, 32);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(444, 1);
				 this->label4->TabIndex = 212;
				 this->label4->Text = L"1";
				 // 
				 // label5
				 // 
				 this->label5->BackColor = System::Drawing::SystemColors::ActiveBorder;
				 this->label5->ForeColor = System::Drawing::SystemColors::ControlText;
				 this->label5->Location = System::Drawing::Point(2, 3);
				 this->label5->Name = L"label5";
				 this->label5->Size = System::Drawing::Size(444, 32);
				 this->label5->TabIndex = 213;
				 this->label5->Visible = false;
				 this->label5->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Inp_Form::label5_MouseDown);
				 this->label5->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Inp_Form::label5_MouseMove);
				 this->label5->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Inp_Form::label5_MouseUp);
				 // 
				 // Orange_Pick
				 // 
				 this->Orange_Pick->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
					 static_cast<System::Int32>(static_cast<System::Byte>(0)));
				 this->Orange_Pick->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->Orange_Pick->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->Orange_Pick->Location = System::Drawing::Point(140, 46);
				 this->Orange_Pick->Name = L"Orange_Pick";
				 this->Orange_Pick->Size = System::Drawing::Size(32, 22);
				 this->Orange_Pick->TabIndex = 214;
				 this->Orange_Pick->TabStop = false;
				 this->Orange_Pick->Visible = false;
				 this->Orange_Pick->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::Orange_Pick_MouseCaptureChanged);
				 // 
				 // Blue_Pick
				 // 
				 this->Blue_Pick->BackColor = System::Drawing::Color::Blue;
				 this->Blue_Pick->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->Blue_Pick->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->Blue_Pick->Location = System::Drawing::Point(178, 46);
				 this->Blue_Pick->Name = L"Blue_Pick";
				 this->Blue_Pick->Size = System::Drawing::Size(32, 22);
				 this->Blue_Pick->TabIndex = 215;
				 this->Blue_Pick->TabStop = false;
				 this->Blue_Pick->Visible = false;
				 this->Blue_Pick->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::Blue_Pick_MouseCaptureChanged);
				 // 
				 // Red_Pick
				 // 
				 this->Red_Pick->BackColor = System::Drawing::Color::Red;
				 this->Red_Pick->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->Red_Pick->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->Red_Pick->Location = System::Drawing::Point(216, 46);
				 this->Red_Pick->Name = L"Red_Pick";
				 this->Red_Pick->Size = System::Drawing::Size(32, 22);
				 this->Red_Pick->TabIndex = 216;
				 this->Red_Pick->TabStop = false;
				 this->Red_Pick->Visible = false;
				 this->Red_Pick->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::Red_Pick_MouseCaptureChanged);
				 // 
				 // Yellow_Pick
				 // 
				 this->Yellow_Pick->BackColor = System::Drawing::Color::Yellow;
				 this->Yellow_Pick->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->Yellow_Pick->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->Yellow_Pick->Location = System::Drawing::Point(254, 46);
				 this->Yellow_Pick->Name = L"Yellow_Pick";
				 this->Yellow_Pick->Size = System::Drawing::Size(32, 22);
				 this->Yellow_Pick->TabIndex = 217;
				 this->Yellow_Pick->TabStop = false;
				 this->Yellow_Pick->Visible = false;
				 this->Yellow_Pick->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::Yellow_Pick_MouseCaptureChanged);
				 // 
				 // White_Pick
				 // 
				 this->White_Pick->BackColor = System::Drawing::Color::White;
				 this->White_Pick->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->White_Pick->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->White_Pick->Location = System::Drawing::Point(292, 46);
				 this->White_Pick->Name = L"White_Pick";
				 this->White_Pick->Size = System::Drawing::Size(32, 22);
				 this->White_Pick->TabIndex = 218;
				 this->White_Pick->TabStop = false;
				 this->White_Pick->Visible = false;
				 this->White_Pick->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::White_Pick_MouseCaptureChanged);
				 // 
				 // Green_Pick
				 // 
				 this->Green_Pick->BackColor = System::Drawing::Color::Green;
				 this->Green_Pick->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->Green_Pick->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->Green_Pick->Location = System::Drawing::Point(102, 46);
				 this->Green_Pick->Name = L"Green_Pick";
				 this->Green_Pick->Size = System::Drawing::Size(32, 22);
				 this->Green_Pick->TabIndex = 219;
				 this->Green_Pick->TabStop = false;
				 this->Green_Pick->Visible = false;
				 this->Green_Pick->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::Green_Pick_MouseCaptureChanged);
				 // 
				 // label6
				 // 
				 this->label6->BackColor = System::Drawing::SystemColors::ActiveBorder;
				 this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold));
				 this->label6->Location = System::Drawing::Point(7, 47);
				 this->label6->Name = L"label6";
				 this->label6->Size = System::Drawing::Size(91, 20);
				 this->label6->TabIndex = 220;
				 this->label6->Text = L"Pick a Color :";
				 this->label6->Visible = false;
				 // 
				 // Picked
				 // 
				 this->Picked->BackColor = System::Drawing::SystemColors::ActiveBorder;
				 this->Picked->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->Picked->Font = (gcnew System::Drawing::Font(L"Segoe Print", 8.2F, System::Drawing::FontStyle::Bold));
				 this->Picked->Location = System::Drawing::Point(327, 46);
				 this->Picked->Name = L"Picked";
				 this->Picked->Size = System::Drawing::Size(91, 22);
				 this->Picked->TabIndex = 221;
				 this->Picked->Text = L"Selected Color";
				 this->Picked->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 this->Picked->Visible = false;
				 // 
				 // Picker_P
				 // 
				 this->Picker_P->Location = System::Drawing::Point(115, 13);
				 this->Picker_P->Name = L"Picker_P";
				 this->Picker_P->Size = System::Drawing::Size(11, 10);
				 this->Picker_P->TabIndex = 222;
				 this->Picker_P->TabStop = false;
				 this->Picker_P->Visible = false;
				 // 
				 // label9
				 // 
				 this->label9->BackColor = System::Drawing::SystemColors::ControlDark;
				 this->label9->FlatStyle = System::Windows::Forms::FlatStyle::System;
				 this->label9->Location = System::Drawing::Point(324, 426);
				 this->label9->Name = L"label9";
				 this->label9->Size = System::Drawing::Size(5, 102);
				 this->label9->TabIndex = 225;
				 this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
				 // 
				 // label10
				 // 
				 this->label10->BackColor = System::Drawing::SystemColors::ControlDark;
				 this->label10->FlatStyle = System::Windows::Forms::FlatStyle::System;
				 this->label10->Location = System::Drawing::Point(431, 426);
				 this->label10->Name = L"label10";
				 this->label10->Size = System::Drawing::Size(5, 99);
				 this->label10->TabIndex = 226;
				 this->label10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
				 // 
				 // label11
				 // 
				 this->label11->BackColor = System::Drawing::SystemColors::ControlDark;
				 this->label11->FlatStyle = System::Windows::Forms::FlatStyle::System;
				 this->label11->Location = System::Drawing::Point(324, 423);
				 this->label11->Name = L"label11";
				 this->label11->Size = System::Drawing::Size(112, 5);
				 this->label11->TabIndex = 227;
				 this->label11->TextAlign = System::Drawing::ContentAlignment::TopCenter;
				 // 
				 // label12
				 // 
				 this->label12->BackColor = System::Drawing::SystemColors::ControlDark;
				 this->label12->FlatStyle = System::Windows::Forms::FlatStyle::System;
				 this->label12->Location = System::Drawing::Point(324, 524);
				 this->label12->Name = L"label12";
				 this->label12->Size = System::Drawing::Size(112, 5);
				 this->label12->TabIndex = 228;
				 this->label12->TextAlign = System::Drawing::ContentAlignment::TopCenter;
				 // 
				 // label7
				 // 
				 this->label7->BackColor = System::Drawing::SystemColors::ControlDark;
				 this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->label7->Location = System::Drawing::Point(4, 41);
				 this->label7->Name = L"label7";
				 this->label7->Size = System::Drawing::Size(441, 32);
				 this->label7->TabIndex = 223;
				 this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
				 this->label7->Visible = false;
				 // 
				 // label13
				 // 
				 this->label13->BackColor = System::Drawing::Color::LightGray;
				 this->label13->Location = System::Drawing::Point(5, 73);
				 this->label13->Name = L"label13";
				 this->label13->Size = System::Drawing::Size(439, 1);
				 this->label13->TabIndex = 230;
				 // 
				 // groupBox2
				 // 
				 this->groupBox2->Location = System::Drawing::Point(319, 399);
				 this->groupBox2->Name = L"groupBox2";
				 this->groupBox2->Size = System::Drawing::Size(122, 135);
				 this->groupBox2->TabIndex = 0;
				 this->groupBox2->TabStop = false;
				 // 
				 // groupBox3
				 // 
				 this->groupBox3->Controls->Add(this->label1);
				 this->groupBox3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold));
				 this->groupBox3->Location = System::Drawing::Point(8, 398);
				 this->groupBox3->Name = L"groupBox3";
				 this->groupBox3->Size = System::Drawing::Size(305, 136);
				 this->groupBox3->TabIndex = 232;
				 this->groupBox3->TabStop = false;
				 // 
				 // label14
				 // 
				 this->label14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					 static_cast<System::Int32>(static_cast<System::Byte>(64)));
				 this->label14->Location = System::Drawing::Point(0, 34);
				 this->label14->Name = L"label14";
				 this->label14->Size = System::Drawing::Size(446, 1);
				 this->label14->TabIndex = 233;
				 // 
				 // Setting_Button
				 // 
				 this->Setting_Button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Setting_Button.BackgroundImage")));
				 this->Setting_Button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				 this->Setting_Button->Cursor = System::Windows::Forms::Cursors::Default;
				 this->Setting_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->Setting_Button->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->Setting_Button->Location = System::Drawing::Point(359, 5);
				 this->Setting_Button->Name = L"Setting_Button";
				 this->Setting_Button->Size = System::Drawing::Size(26, 26);
				 this->Setting_Button->TabIndex = 237;
				 this->Setting_Button->TabStop = false;
				 this->toolTip1->SetToolTip(this->Setting_Button, L"Change View");
				 this->Setting_Button->UseVisualStyleBackColor = true;
				 this->Setting_Button->Visible = false;
				 this->Setting_Button->Click += gcnew System::EventHandler(this, &Inp_Form::Setting_Button_Click);
				 this->Setting_Button->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Inp_Form::Inp_Form_KeyDown);
				 this->Setting_Button->MouseLeave += gcnew System::EventHandler(this, &Inp_Form::Setting_Button_MouseLeave);
				 this->Setting_Button->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Inp_Form::Cust_Close_PreviewKeyDown);
				 // 
				 // Icon_Pict
				 // 
				 this->Icon_Pict->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icon_Pict.Image")));
				 this->Icon_Pict->Location = System::Drawing::Point(9, 9);
				 this->Icon_Pict->Name = L"Icon_Pict";
				 this->Icon_Pict->Size = System::Drawing::Size(18, 18);
				 this->Icon_Pict->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->Icon_Pict->TabIndex = 238;
				 this->Icon_Pict->TabStop = false;
				 this->toolTip1->SetToolTip(this->Icon_Pict, L"CubeX v1.0");
				 this->Icon_Pict->Visible = false;
				 this->Icon_Pict->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Inp_Form::label5_MouseDown);
				 this->Icon_Pict->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Inp_Form::label5_MouseMove);
				 this->Icon_Pict->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Inp_Form::label5_MouseUp);
				 // 
				 // Reset_Button
				 // 
				 this->Reset_Button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Reset_Button.BackgroundImage")));
				 this->Reset_Button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				 this->Reset_Button->Cursor = System::Windows::Forms::Cursors::Default;
				 this->Reset_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->Reset_Button->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->Reset_Button->Location = System::Drawing::Point(422, 47);
				 this->Reset_Button->Name = L"Reset_Button";
				 this->Reset_Button->Size = System::Drawing::Size(20, 20);
				 this->Reset_Button->TabIndex = 241;
				 this->Reset_Button->TabStop = false;
				 this->toolTip1->SetToolTip(this->Reset_Button, L"Reset Cube");
				 this->Reset_Button->UseVisualStyleBackColor = true;
				 this->Reset_Button->Visible = false;
				 this->Reset_Button->Click += gcnew System::EventHandler(this, &Inp_Form::button2_Click);
				 this->Reset_Button->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Inp_Form::Inp_Form_KeyDown);
				 this->Reset_Button->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Inp_Form::Cust_Close_PreviewKeyDown);
				 // 
				 // Scan
				 // 
				 this->Scan->BackColor = System::Drawing::SystemColors::AppWorkspace;
				 this->Scan->Cursor = System::Windows::Forms::Cursors::Help;
				 this->Scan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->Scan->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->Scan->Location = System::Drawing::Point(330, 5);
				 this->Scan->Name = L"Scan";
				 this->Scan->Size = System::Drawing::Size(26, 26);
				 this->Scan->TabIndex = 242;
				 this->Scan->TabStop = false;
				 this->Scan->Text = L"*";
				 this->toolTip1->SetToolTip(this->Scan, L"Help");
				 this->Scan->UseVisualStyleBackColor = false;
				 this->Scan->Visible = false;
				 this->Scan->Click += gcnew System::EventHandler(this, &Inp_Form::Scan_Click);
				 // 
				 // BTS
				 // 
				 this->BTS->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BTS.BackgroundImage")));
				 this->BTS->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				 this->BTS->Cursor = System::Windows::Forms::Cursors::Default;
				 this->BTS->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->BTS->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->BTS->Location = System::Drawing::Point(359, 5);
				 this->BTS->Name = L"BTS";
				 this->BTS->Size = System::Drawing::Size(26, 26);
				 this->BTS->TabIndex = 239;
				 this->BTS->TabStop = false;
				 this->BTS->UseVisualStyleBackColor = true;
				 this->BTS->Visible = false;
				 this->BTS->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Inp_Form::Inp_Form_KeyDown);
				 this->BTS->MouseEnter += gcnew System::EventHandler(this, &Inp_Form::BTS_MouseEnter);
				 this->BTS->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Inp_Form::Cust_Close_PreviewKeyDown);
				 // 
				 // Face
				 // 
				 this->Face->AutoSize = true;
				 this->Face->BackColor = System::Drawing::Color::Transparent;
				 this->Face->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
				 this->Face->Location = System::Drawing::Point(149, 5);
				 this->Face->Name = L"Face";
				 this->Face->Size = System::Drawing::Size(54, 25);
				 this->Face->TabIndex = 235;
				 this->Face->Text = L"Face";
				 this->Face->UseVisualStyleBackColor = false;
				 this->Face->Visible = false;
				 this->Face->CheckedChanged += gcnew System::EventHandler(this, &Inp_Form::Face_CheckedChanged);
				 this->Face->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Inp_Form::Cust_Close_PreviewKeyDown);
				 // 
				 // OpCube
				 // 
				 this->OpCube->AutoSize = true;
				 this->OpCube->BackColor = System::Drawing::Color::Transparent;
				 this->OpCube->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
				 this->OpCube->Location = System::Drawing::Point(209, 5);
				 this->OpCube->Name = L"OpCube";
				 this->OpCube->Size = System::Drawing::Size(93, 25);
				 this->OpCube->TabIndex = 236;
				 this->OpCube->Text = L"Open Cube";
				 this->OpCube->UseVisualStyleBackColor = false;
				 this->OpCube->Visible = false;
				 this->OpCube->CheckedChanged += gcnew System::EventHandler(this, &Inp_Form::OpCube_CheckedChanged);
				 this->OpCube->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Inp_Form::Cust_Close_PreviewKeyDown);
				 // 
				 // label8
				 // 
				 this->label8->BackColor = System::Drawing::Color::LightGray;
				 this->label8->Location = System::Drawing::Point(5, 40);
				 this->label8->Name = L"label8";
				 this->label8->Size = System::Drawing::Size(439, 1);
				 this->label8->TabIndex = 240;
				 // 
				 // _50
				 // 
				 this->_50->BackColor = System::Drawing::Color::White;
				 this->_50->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_50->Cursor = System::Windows::Forms::Cursors::No;
				 this->_50->Location = System::Drawing::Point(351, 186);
				 this->_50->Name = L"_50";
				 this->_50->Size = System::Drawing::Size(31, 31);
				 this->_50->TabIndex = 57;
				 this->_50->TabStop = false;
				 this->_50->Visible = false;
				 // 
				 // _25
				 // 
				 this->_25->BackColor = System::Drawing::Color::Silver;
				 this->_25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_25->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_25->Location = System::Drawing::Point(319, 84);
				 this->_25->Name = L"_25";
				 this->_25->Size = System::Drawing::Size(31, 31);
				 this->_25->TabIndex = 128;
				 this->_25->TabStop = false;
				 this->_25->Visible = false;
				 this->_25->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_25_MouseCaptureChanged);
				 // 
				 // _20
				 // 
				 this->_20->BackColor = System::Drawing::Color::Silver;
				 this->_20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_20->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_20->Location = System::Drawing::Point(351, 20);
				 this->_20->Name = L"_20";
				 this->_20->Size = System::Drawing::Size(31, 31);
				 this->_20->TabIndex = 120;
				 this->_20->TabStop = false;
				 this->_20->Visible = false;
				 this->_20->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_20_MouseCaptureChanged);
				 // 
				 // _19
				 // 
				 this->_19->BackColor = System::Drawing::Color::Silver;
				 this->_19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
				 this->_19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_19->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_19->Location = System::Drawing::Point(319, 20);
				 this->_19->Name = L"_19";
				 this->_19->Size = System::Drawing::Size(31, 31);
				 this->_19->TabIndex = 119;
				 this->_19->TabStop = false;
				 this->_19->Visible = false;
				 this->_19->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_19_MouseCaptureChanged);
				 // 
				 // _23
				 // 
				 this->_23->BackColor = System::Drawing::Color::Blue;
				 this->_23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_23->Cursor = System::Windows::Forms::Cursors::No;
				 this->_23->Location = System::Drawing::Point(351, 52);
				 this->_23->Name = L"_23";
				 this->_23->Size = System::Drawing::Size(31, 31);
				 this->_23->TabIndex = 44;
				 this->_23->TabStop = false;
				 this->_23->Visible = false;
				 // 
				 // _26
				 // 
				 this->_26->BackColor = System::Drawing::Color::Silver;
				 this->_26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_26->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_26->Location = System::Drawing::Point(351, 84);
				 this->_26->Name = L"_26";
				 this->_26->Size = System::Drawing::Size(31, 31);
				 this->_26->TabIndex = 129;
				 this->_26->TabStop = false;
				 this->_26->Visible = false;
				 this->_26->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_26_MouseCaptureChanged);
				 // 
				 // _18
				 // 
				 this->_18->BackColor = System::Drawing::Color::Silver;
				 this->_18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_18->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_18->Location = System::Drawing::Point(236, 84);
				 this->_18->Name = L"_18";
				 this->_18->Size = System::Drawing::Size(31, 31);
				 this->_18->TabIndex = 127;
				 this->_18->TabStop = false;
				 this->_18->Visible = false;
				 this->_18->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_18_MouseCaptureChanged);
				 // 
				 // _17
				 // 
				 this->_17->BackColor = System::Drawing::Color::Silver;
				 this->_17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_17->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_17->Location = System::Drawing::Point(204, 84);
				 this->_17->Name = L"_17";
				 this->_17->Size = System::Drawing::Size(31, 31);
				 this->_17->TabIndex = 126;
				 this->_17->TabStop = false;
				 this->_17->Visible = false;
				 this->_17->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_17_MouseCaptureChanged);
				 // 
				 // _16
				 // 
				 this->_16->BackColor = System::Drawing::Color::Silver;
				 this->_16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_16->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_16->Location = System::Drawing::Point(172, 84);
				 this->_16->Name = L"_16";
				 this->_16->Size = System::Drawing::Size(31, 31);
				 this->_16->TabIndex = 125;
				 this->_16->TabStop = false;
				 this->_16->Visible = false;
				 this->_16->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_16_MouseCaptureChanged);
				 // 
				 // _13
				 // 
				 this->_13->BackColor = System::Drawing::Color::Silver;
				 this->_13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_13->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_13->Location = System::Drawing::Point(172, 52);
				 this->_13->Name = L"_13";
				 this->_13->Size = System::Drawing::Size(31, 31);
				 this->_13->TabIndex = 151;
				 this->_13->TabStop = false;
				 this->_13->Visible = false;
				 this->_13->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_13_MouseCaptureChanged);
				 // 
				 // _12
				 // 
				 this->_12->BackColor = System::Drawing::Color::Silver;
				 this->_12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_12->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_12->Location = System::Drawing::Point(236, 20);
				 this->_12->Name = L"_12";
				 this->_12->Size = System::Drawing::Size(31, 31);
				 this->_12->TabIndex = 118;
				 this->_12->TabStop = false;
				 this->_12->Visible = false;
				 this->_12->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_12_MouseCaptureChanged);
				 // 
				 // _15
				 // 
				 this->_15->BackColor = System::Drawing::Color::Silver;
				 this->_15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_15->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_15->Location = System::Drawing::Point(236, 52);
				 this->_15->Name = L"_15";
				 this->_15->Size = System::Drawing::Size(31, 31);
				 this->_15->TabIndex = 152;
				 this->_15->TabStop = false;
				 this->_15->Visible = false;
				 this->_15->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_15_MouseCaptureChanged);
				 // 
				 // _10
				 // 
				 this->_10->BackColor = System::Drawing::Color::Silver;
				 this->_10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_10->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_10->Location = System::Drawing::Point(172, 20);
				 this->_10->Name = L"_10";
				 this->_10->Size = System::Drawing::Size(31, 31);
				 this->_10->TabIndex = 116;
				 this->_10->TabStop = false;
				 this->_10->Visible = false;
				 this->_10->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_10_MouseCaptureChanged);
				 // 
				 // _46
				 // 
				 this->_46->BackColor = System::Drawing::Color::Silver;
				 this->_46->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_46->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_46->Location = System::Drawing::Point(319, 154);
				 this->_46->Name = L"_46";
				 this->_46->Size = System::Drawing::Size(31, 31);
				 this->_46->TabIndex = 137;
				 this->_46->TabStop = false;
				 this->_46->Visible = false;
				 this->_46->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_46_MouseCaptureChanged);
				 // 
				 // _22
				 // 
				 this->_22->BackColor = System::Drawing::Color::Silver;
				 this->_22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_22->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_22->Location = System::Drawing::Point(319, 52);
				 this->_22->Name = L"_22";
				 this->_22->Size = System::Drawing::Size(31, 31);
				 this->_22->TabIndex = 153;
				 this->_22->TabStop = false;
				 this->_22->Visible = false;
				 this->_22->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_22_MouseCaptureChanged);
				 // 
				 // _47
				 // 
				 this->_47->BackColor = System::Drawing::Color::Silver;
				 this->_47->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_47->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_47->Location = System::Drawing::Point(351, 154);
				 this->_47->Name = L"_47";
				 this->_47->Size = System::Drawing::Size(31, 31);
				 this->_47->TabIndex = 138;
				 this->_47->TabStop = false;
				 this->_47->Visible = false;
				 this->_47->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_47_MouseCaptureChanged);
				 // 
				 // _41
				 // 
				 this->_41->BackColor = System::Drawing::Color::Yellow;
				 this->_41->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_41->Cursor = System::Windows::Forms::Cursors::No;
				 this->_41->Location = System::Drawing::Point(204, 186);
				 this->_41->Name = L"_41";
				 this->_41->Size = System::Drawing::Size(31, 31);
				 this->_41->TabIndex = 70;
				 this->_41->TabStop = false;
				 this->_41->Visible = false;
				 // 
				 // _32
				 // 
				 this->_32->BackColor = System::Drawing::Color::Red;
				 this->_32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_32->Cursor = System::Windows::Forms::Cursors::No;
				 this->_32->Location = System::Drawing::Point(57, 186);
				 this->_32->Name = L"_32";
				 this->_32->Size = System::Drawing::Size(31, 31);
				 this->_32->TabIndex = 83;
				 this->_32->TabStop = false;
				 this->_32->Visible = false;
				 // 
				 // _14
				 // 
				 this->_14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
					 static_cast<System::Int32>(static_cast<System::Byte>(0)));
				 this->_14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_14->Cursor = System::Windows::Forms::Cursors::No;
				 this->_14->Location = System::Drawing::Point(204, 52);
				 this->_14->Name = L"_14";
				 this->_14->Size = System::Drawing::Size(31, 31);
				 this->_14->TabIndex = 31;
				 this->_14->TabStop = false;
				 this->_14->Visible = false;
				 // 
				 // _8
				 // 
				 this->_8->BackColor = System::Drawing::Color::Silver;
				 this->_8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_8->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_8->Location = System::Drawing::Point(57, 84);
				 this->_8->Name = L"_8";
				 this->_8->Size = System::Drawing::Size(31, 31);
				 this->_8->TabIndex = 123;
				 this->_8->TabStop = false;
				 this->_8->Visible = false;
				 this->_8->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_8_MouseCaptureChanged);
				 // 
				 // _7
				 // 
				 this->_7->BackColor = System::Drawing::Color::Silver;
				 this->_7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_7->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_7->Location = System::Drawing::Point(25, 84);
				 this->_7->Name = L"_7";
				 this->_7->Size = System::Drawing::Size(31, 31);
				 this->_7->TabIndex = 122;
				 this->_7->TabStop = false;
				 this->_7->Visible = false;
				 this->_7->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_7_MouseCaptureChanged);
				 // 
				 // _52
				 // 
				 this->_52->BackColor = System::Drawing::Color::Silver;
				 this->_52->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_52->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_52->Location = System::Drawing::Point(319, 218);
				 this->_52->Name = L"_52";
				 this->_52->Size = System::Drawing::Size(31, 31);
				 this->_52->TabIndex = 146;
				 this->_52->TabStop = false;
				 this->_52->Visible = false;
				 this->_52->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_52_MouseCaptureChanged);
				 // 
				 // _4
				 // 
				 this->_4->BackColor = System::Drawing::Color::Silver;
				 this->_4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_4->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_4->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"_4.ErrorImage")));
				 this->_4->Location = System::Drawing::Point(25, 52);
				 this->_4->Name = L"_4";
				 this->_4->Size = System::Drawing::Size(31, 31);
				 this->_4->TabIndex = 149;
				 this->_4->TabStop = false;
				 this->_4->Visible = false;
				 this->_4->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_4_MouseCaptureChanged);
				 // 
				 // _28
				 // 
				 this->_28->BackColor = System::Drawing::Color::Silver;
				 this->_28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_28->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_28->Location = System::Drawing::Point(25, 154);
				 this->_28->Name = L"_28";
				 this->_28->Size = System::Drawing::Size(31, 31);
				 this->_28->TabIndex = 131;
				 this->_28->TabStop = false;
				 this->_28->Visible = false;
				 this->_28->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_28_MouseCaptureChanged);
				 // 
				 // _53
				 // 
				 this->_53->BackColor = System::Drawing::Color::Silver;
				 this->_53->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_53->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_53->Location = System::Drawing::Point(351, 218);
				 this->_53->Name = L"_53";
				 this->_53->Size = System::Drawing::Size(31, 31);
				 this->_53->TabIndex = 147;
				 this->_53->TabStop = false;
				 this->_53->Visible = false;
				 this->_53->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_53_MouseCaptureChanged);
				 // 
				 // _29
				 // 
				 this->_29->BackColor = System::Drawing::Color::Silver;
				 this->_29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_29->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_29->Location = System::Drawing::Point(57, 154);
				 this->_29->Name = L"_29";
				 this->_29->Size = System::Drawing::Size(31, 31);
				 this->_29->TabIndex = 132;
				 this->_29->TabStop = false;
				 this->_29->Visible = false;
				 this->_29->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_29_MouseCaptureChanged);
				 // 
				 // _30
				 // 
				 this->_30->BackColor = System::Drawing::Color::Silver;
				 this->_30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_30->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_30->Location = System::Drawing::Point(89, 154);
				 this->_30->Name = L"_30";
				 this->_30->Size = System::Drawing::Size(31, 31);
				 this->_30->TabIndex = 133;
				 this->_30->TabStop = false;
				 this->_30->Visible = false;
				 this->_30->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_30_MouseCaptureChanged);
				 // 
				 // _21
				 // 
				 this->_21->BackColor = System::Drawing::Color::Silver;
				 this->_21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_21->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_21->Location = System::Drawing::Point(383, 20);
				 this->_21->Name = L"_21";
				 this->_21->Size = System::Drawing::Size(31, 31);
				 this->_21->TabIndex = 167;
				 this->_21->TabStop = false;
				 this->_21->Visible = false;
				 this->_21->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_21_MouseCaptureChanged);
				 // 
				 // _37
				 // 
				 this->_37->BackColor = System::Drawing::Color::Silver;
				 this->_37->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_37->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_37->Location = System::Drawing::Point(172, 154);
				 this->_37->Name = L"_37";
				 this->_37->Size = System::Drawing::Size(31, 31);
				 this->_37->TabIndex = 134;
				 this->_37->TabStop = false;
				 this->_37->Visible = false;
				 this->_37->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_37_MouseCaptureChanged);
				 // 
				 // _38
				 // 
				 this->_38->BackColor = System::Drawing::Color::Silver;
				 this->_38->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_38->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_38->Location = System::Drawing::Point(204, 154);
				 this->_38->Name = L"_38";
				 this->_38->Size = System::Drawing::Size(31, 31);
				 this->_38->TabIndex = 135;
				 this->_38->TabStop = false;
				 this->_38->Visible = false;
				 this->_38->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_38_MouseCaptureChanged);
				 // 
				 // _27
				 // 
				 this->_27->BackColor = System::Drawing::Color::Silver;
				 this->_27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_27->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_27->Location = System::Drawing::Point(383, 84);
				 this->_27->Name = L"_27";
				 this->_27->Size = System::Drawing::Size(31, 31);
				 this->_27->TabIndex = 168;
				 this->_27->TabStop = false;
				 this->_27->Visible = false;
				 this->_27->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_27_MouseCaptureChanged);
				 // 
				 // _39
				 // 
				 this->_39->BackColor = System::Drawing::Color::Silver;
				 this->_39->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_39->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_39->Location = System::Drawing::Point(236, 154);
				 this->_39->Name = L"_39";
				 this->_39->Size = System::Drawing::Size(31, 31);
				 this->_39->TabIndex = 136;
				 this->_39->TabStop = false;
				 this->_39->Visible = false;
				 this->_39->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_39_MouseCaptureChanged);
				 // 
				 // _34
				 // 
				 this->_34->BackColor = System::Drawing::Color::Silver;
				 this->_34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_34->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_34->Location = System::Drawing::Point(25, 218);
				 this->_34->Name = L"_34";
				 this->_34->Size = System::Drawing::Size(31, 31);
				 this->_34->TabIndex = 140;
				 this->_34->TabStop = false;
				 this->_34->Visible = false;
				 this->_34->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_34_MouseCaptureChanged);
				 // 
				 // _49
				 // 
				 this->_49->BackColor = System::Drawing::Color::Silver;
				 this->_49->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_49->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_49->Location = System::Drawing::Point(319, 186);
				 this->_49->Name = L"_49";
				 this->_49->Size = System::Drawing::Size(31, 31);
				 this->_49->TabIndex = 159;
				 this->_49->TabStop = false;
				 this->_49->Visible = false;
				 this->_49->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_49_MouseCaptureChanged);
				 // 
				 // _35
				 // 
				 this->_35->BackColor = System::Drawing::Color::Silver;
				 this->_35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_35->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_35->Location = System::Drawing::Point(57, 218);
				 this->_35->Name = L"_35";
				 this->_35->Size = System::Drawing::Size(31, 31);
				 this->_35->TabIndex = 141;
				 this->_35->TabStop = false;
				 this->_35->Visible = false;
				 this->_35->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_35_MouseCaptureChanged);
				 // 
				 // _2
				 // 
				 this->_2->BackColor = System::Drawing::Color::Silver;
				 this->_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_2->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_2->Location = System::Drawing::Point(57, 20);
				 this->_2->Name = L"_2";
				 this->_2->Size = System::Drawing::Size(31, 31);
				 this->_2->TabIndex = 114;
				 this->_2->TabStop = false;
				 this->_2->Visible = false;
				 this->_2->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_2_MouseCaptureChanged);
				 // 
				 // _36
				 // 
				 this->_36->BackColor = System::Drawing::Color::Silver;
				 this->_36->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_36->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_36->Location = System::Drawing::Point(89, 218);
				 this->_36->Name = L"_36";
				 this->_36->Size = System::Drawing::Size(31, 31);
				 this->_36->TabIndex = 142;
				 this->_36->TabStop = false;
				 this->_36->Visible = false;
				 this->_36->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_36_MouseCaptureChanged);
				 // 
				 // _43
				 // 
				 this->_43->BackColor = System::Drawing::Color::Silver;
				 this->_43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_43->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_43->Location = System::Drawing::Point(172, 218);
				 this->_43->Name = L"_43";
				 this->_43->Size = System::Drawing::Size(31, 31);
				 this->_43->TabIndex = 143;
				 this->_43->TabStop = false;
				 this->_43->Visible = false;
				 this->_43->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_43_MouseCaptureChanged);
				 // 
				 // _5
				 // 
				 this->_5->BackColor = System::Drawing::Color::Green;
				 this->_5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_5->Cursor = System::Windows::Forms::Cursors::No;
				 this->_5->Location = System::Drawing::Point(57, 52);
				 this->_5->Name = L"_5";
				 this->_5->Size = System::Drawing::Size(31, 31);
				 this->_5->TabIndex = 14;
				 this->_5->TabStop = false;
				 this->_5->Visible = false;
				 // 
				 // _44
				 // 
				 this->_44->BackColor = System::Drawing::Color::Silver;
				 this->_44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_44->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_44->Location = System::Drawing::Point(204, 218);
				 this->_44->Name = L"_44";
				 this->_44->Size = System::Drawing::Size(31, 31);
				 this->_44->TabIndex = 144;
				 this->_44->TabStop = false;
				 this->_44->Visible = false;
				 this->_44->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_44_MouseCaptureChanged);
				 // 
				 // _48
				 // 
				 this->_48->BackColor = System::Drawing::Color::Silver;
				 this->_48->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_48->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_48->Location = System::Drawing::Point(383, 154);
				 this->_48->Name = L"_48";
				 this->_48->Size = System::Drawing::Size(31, 31);
				 this->_48->TabIndex = 169;
				 this->_48->TabStop = false;
				 this->_48->Visible = false;
				 this->_48->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_48_MouseCaptureChanged);
				 // 
				 // _45
				 // 
				 this->_45->BackColor = System::Drawing::Color::Silver;
				 this->_45->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_45->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_45->Location = System::Drawing::Point(236, 218);
				 this->_45->Name = L"_45";
				 this->_45->Size = System::Drawing::Size(31, 31);
				 this->_45->TabIndex = 145;
				 this->_45->TabStop = false;
				 this->_45->Visible = false;
				 this->_45->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_45_MouseCaptureChanged);
				 // 
				 // _24
				 // 
				 this->_24->BackColor = System::Drawing::Color::Silver;
				 this->_24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_24->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_24->Location = System::Drawing::Point(383, 52);
				 this->_24->Name = L"_24";
				 this->_24->Size = System::Drawing::Size(31, 31);
				 this->_24->TabIndex = 171;
				 this->_24->TabStop = false;
				 this->_24->Visible = false;
				 this->_24->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_24_MouseCaptureChanged);
				 // 
				 // _31
				 // 
				 this->_31->BackColor = System::Drawing::Color::Silver;
				 this->_31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_31->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_31->Location = System::Drawing::Point(25, 186);
				 this->_31->Name = L"_31";
				 this->_31->Size = System::Drawing::Size(31, 31);
				 this->_31->TabIndex = 155;
				 this->_31->TabStop = false;
				 this->_31->Visible = false;
				 this->_31->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_31_MouseCaptureChanged);
				 // 
				 // _54
				 // 
				 this->_54->BackColor = System::Drawing::Color::Silver;
				 this->_54->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_54->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_54->Location = System::Drawing::Point(383, 218);
				 this->_54->Name = L"_54";
				 this->_54->Size = System::Drawing::Size(31, 31);
				 this->_54->TabIndex = 170;
				 this->_54->TabStop = false;
				 this->_54->Visible = false;
				 this->_54->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_54_MouseCaptureChanged);
				 // 
				 // _33
				 // 
				 this->_33->BackColor = System::Drawing::Color::Silver;
				 this->_33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_33->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_33->Location = System::Drawing::Point(89, 186);
				 this->_33->Name = L"_33";
				 this->_33->Size = System::Drawing::Size(31, 31);
				 this->_33->TabIndex = 156;
				 this->_33->TabStop = false;
				 this->_33->Visible = false;
				 this->_33->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_33_MouseCaptureChanged);
				 // 
				 // _3
				 // 
				 this->_3->BackColor = System::Drawing::Color::Silver;
				 this->_3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_3->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_3->Location = System::Drawing::Point(89, 20);
				 this->_3->Name = L"_3";
				 this->_3->Size = System::Drawing::Size(31, 31);
				 this->_3->TabIndex = 115;
				 this->_3->TabStop = false;
				 this->_3->Visible = false;
				 this->_3->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_3_MouseCaptureChanged);
				 // 
				 // _40
				 // 
				 this->_40->BackColor = System::Drawing::Color::Silver;
				 this->_40->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_40->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_40->Location = System::Drawing::Point(172, 186);
				 this->_40->Name = L"_40";
				 this->_40->Size = System::Drawing::Size(31, 31);
				 this->_40->TabIndex = 157;
				 this->_40->TabStop = false;
				 this->_40->Visible = false;
				 this->_40->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_40_MouseCaptureChanged);
				 // 
				 // _51
				 // 
				 this->_51->BackColor = System::Drawing::Color::Silver;
				 this->_51->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_51->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_51->Location = System::Drawing::Point(383, 186);
				 this->_51->Name = L"_51";
				 this->_51->Size = System::Drawing::Size(31, 31);
				 this->_51->TabIndex = 172;
				 this->_51->TabStop = false;
				 this->_51->Visible = false;
				 this->_51->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_51_MouseCaptureChanged);
				 // 
				 // _42
				 // 
				 this->_42->BackColor = System::Drawing::Color::Silver;
				 this->_42->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_42->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_42->Location = System::Drawing::Point(236, 186);
				 this->_42->Name = L"_42";
				 this->_42->Size = System::Drawing::Size(31, 31);
				 this->_42->TabIndex = 158;
				 this->_42->TabStop = false;
				 this->_42->Visible = false;
				 this->_42->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_42_MouseCaptureChanged);
				 // 
				 // _6
				 // 
				 this->_6->BackColor = System::Drawing::Color::Silver;
				 this->_6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_6->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_6->Location = System::Drawing::Point(89, 52);
				 this->_6->Name = L"_6";
				 this->_6->Size = System::Drawing::Size(31, 31);
				 this->_6->TabIndex = 150;
				 this->_6->TabStop = false;
				 this->_6->Visible = false;
				 this->_6->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_6_MouseCaptureChanged);
				 // 
				 // _1
				 // 
				 this->_1->BackColor = System::Drawing::Color::Silver;
				 this->_1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_1->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_1->Location = System::Drawing::Point(25, 20);
				 this->_1->Name = L"_1";
				 this->_1->Size = System::Drawing::Size(31, 31);
				 this->_1->TabIndex = 113;
				 this->_1->TabStop = false;
				 this->_1->Visible = false;
				 this->_1->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_1_MouseCaptureChanged);
				 // 
				 // _9
				 // 
				 this->_9->BackColor = System::Drawing::Color::Silver;
				 this->_9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_9->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_9->Location = System::Drawing::Point(89, 84);
				 this->_9->Name = L"_9";
				 this->_9->Size = System::Drawing::Size(31, 31);
				 this->_9->TabIndex = 124;
				 this->_9->TabStop = false;
				 this->_9->Visible = false;
				 this->_9->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_9_MouseCaptureChanged);
				 // 
				 // __5
				 // 
				 this->__5->BackColor = System::Drawing::Color::Green;
				 this->__5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__5->Cursor = System::Windows::Forms::Cursors::No;
				 this->__5->Location = System::Drawing::Point(589, 137);
				 this->__5->Name = L"__5";
				 this->__5->Size = System::Drawing::Size(32, 32);
				 this->__5->TabIndex = 151;
				 this->__5->TabStop = false;
				 // 
				 // __1
				 // 
				 this->__1->BackColor = System::Drawing::Color::Silver;
				 this->__1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__1->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__1->Location = System::Drawing::Point(556, 104);
				 this->__1->Name = L"__1";
				 this->__1->Size = System::Drawing::Size(32, 32);
				 this->__1->TabIndex = 152;
				 this->__1->TabStop = false;
				 this->__1->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_1_MouseCaptureChanged);
				 // 
				 // __2
				 // 
				 this->__2->BackColor = System::Drawing::Color::Silver;
				 this->__2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__2->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__2->Location = System::Drawing::Point(589, 104);
				 this->__2->Name = L"__2";
				 this->__2->Size = System::Drawing::Size(32, 32);
				 this->__2->TabIndex = 153;
				 this->__2->TabStop = false;
				 this->__2->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_2_MouseCaptureChanged);
				 // 
				 // __3
				 // 
				 this->__3->BackColor = System::Drawing::Color::Silver;
				 this->__3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__3->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__3->Location = System::Drawing::Point(622, 104);
				 this->__3->Name = L"__3";
				 this->__3->Size = System::Drawing::Size(32, 32);
				 this->__3->TabIndex = 154;
				 this->__3->TabStop = false;
				 this->__3->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_3_MouseCaptureChanged);
				 // 
				 // __7
				 // 
				 this->__7->BackColor = System::Drawing::Color::Silver;
				 this->__7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__7->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__7->Location = System::Drawing::Point(556, 170);
				 this->__7->Name = L"__7";
				 this->__7->Size = System::Drawing::Size(32, 32);
				 this->__7->TabIndex = 155;
				 this->__7->TabStop = false;
				 this->__7->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_7_MouseCaptureChanged);
				 // 
				 // __8
				 // 
				 this->__8->BackColor = System::Drawing::Color::Silver;
				 this->__8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__8->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__8->Location = System::Drawing::Point(589, 170);
				 this->__8->Name = L"__8";
				 this->__8->Size = System::Drawing::Size(32, 32);
				 this->__8->TabIndex = 156;
				 this->__8->TabStop = false;
				 this->__8->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_8_MouseCaptureChanged);
				 // 
				 // __9
				 // 
				 this->__9->BackColor = System::Drawing::Color::Silver;
				 this->__9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__9->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__9->Location = System::Drawing::Point(622, 170);
				 this->__9->Name = L"__9";
				 this->__9->Size = System::Drawing::Size(32, 32);
				 this->__9->TabIndex = 157;
				 this->__9->TabStop = false;
				 this->__9->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_9_MouseCaptureChanged);
				 // 
				 // __4
				 // 
				 this->__4->BackColor = System::Drawing::Color::Silver;
				 this->__4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__4->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__4->Location = System::Drawing::Point(556, 137);
				 this->__4->Name = L"__4";
				 this->__4->Size = System::Drawing::Size(32, 32);
				 this->__4->TabIndex = 158;
				 this->__4->TabStop = false;
				 this->__4->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_4_MouseCaptureChanged);
				 // 
				 // __6
				 // 
				 this->__6->BackColor = System::Drawing::Color::Silver;
				 this->__6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__6->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__6->Location = System::Drawing::Point(622, 137);
				 this->__6->Name = L"__6";
				 this->__6->Size = System::Drawing::Size(32, 32);
				 this->__6->TabIndex = 159;
				 this->__6->TabStop = false;
				 this->__6->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_6_MouseCaptureChanged);
				 // 
				 // __32
				 // 
				 this->__32->BackColor = System::Drawing::Color::Red;
				 this->__32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__32->Cursor = System::Windows::Forms::Cursors::No;
				 this->__32->Location = System::Drawing::Point(488, 137);
				 this->__32->Name = L"__32";
				 this->__32->Size = System::Drawing::Size(32, 32);
				 this->__32->TabIndex = 160;
				 this->__32->TabStop = false;
				 // 
				 // __28
				 // 
				 this->__28->BackColor = System::Drawing::Color::Silver;
				 this->__28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__28->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__28->Location = System::Drawing::Point(455, 104);
				 this->__28->Name = L"__28";
				 this->__28->Size = System::Drawing::Size(32, 32);
				 this->__28->TabIndex = 161;
				 this->__28->TabStop = false;
				 this->__28->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_28_MouseCaptureChanged);
				 // 
				 // __29
				 // 
				 this->__29->BackColor = System::Drawing::Color::Silver;
				 this->__29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__29->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__29->Location = System::Drawing::Point(488, 104);
				 this->__29->Name = L"__29";
				 this->__29->Size = System::Drawing::Size(32, 32);
				 this->__29->TabIndex = 162;
				 this->__29->TabStop = false;
				 this->__29->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_29_MouseCaptureChanged);
				 // 
				 // __30
				 // 
				 this->__30->BackColor = System::Drawing::Color::Silver;
				 this->__30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__30->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__30->Location = System::Drawing::Point(521, 104);
				 this->__30->Name = L"__30";
				 this->__30->Size = System::Drawing::Size(32, 32);
				 this->__30->TabIndex = 163;
				 this->__30->TabStop = false;
				 this->__30->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_30_MouseCaptureChanged);
				 // 
				 // __34
				 // 
				 this->__34->BackColor = System::Drawing::Color::Silver;
				 this->__34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__34->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__34->Location = System::Drawing::Point(455, 170);
				 this->__34->Name = L"__34";
				 this->__34->Size = System::Drawing::Size(32, 32);
				 this->__34->TabIndex = 164;
				 this->__34->TabStop = false;
				 this->__34->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_34_MouseCaptureChanged);
				 // 
				 // __35
				 // 
				 this->__35->BackColor = System::Drawing::Color::Silver;
				 this->__35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__35->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__35->Location = System::Drawing::Point(488, 170);
				 this->__35->Name = L"__35";
				 this->__35->Size = System::Drawing::Size(32, 32);
				 this->__35->TabIndex = 165;
				 this->__35->TabStop = false;
				 this->__35->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_35_MouseCaptureChanged);
				 // 
				 // __36
				 // 
				 this->__36->BackColor = System::Drawing::Color::Silver;
				 this->__36->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__36->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__36->Location = System::Drawing::Point(521, 170);
				 this->__36->Name = L"__36";
				 this->__36->Size = System::Drawing::Size(32, 32);
				 this->__36->TabIndex = 166;
				 this->__36->TabStop = false;
				 this->__36->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_36_MouseCaptureChanged);
				 // 
				 // __31
				 // 
				 this->__31->BackColor = System::Drawing::Color::Silver;
				 this->__31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__31->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__31->Location = System::Drawing::Point(455, 137);
				 this->__31->Name = L"__31";
				 this->__31->Size = System::Drawing::Size(32, 32);
				 this->__31->TabIndex = 167;
				 this->__31->TabStop = false;
				 this->__31->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_31_MouseCaptureChanged);
				 // 
				 // __33
				 // 
				 this->__33->BackColor = System::Drawing::Color::Silver;
				 this->__33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__33->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__33->Location = System::Drawing::Point(521, 137);
				 this->__33->Name = L"__33";
				 this->__33->Size = System::Drawing::Size(32, 32);
				 this->__33->TabIndex = 168;
				 this->__33->TabStop = false;
				 this->__33->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_33_MouseCaptureChanged);
				 // 
				 // __41
				 // 
				 this->__41->BackColor = System::Drawing::Color::Yellow;
				 this->__41->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__41->Cursor = System::Windows::Forms::Cursors::No;
				 this->__41->Location = System::Drawing::Point(589, 36);
				 this->__41->Name = L"__41";
				 this->__41->Size = System::Drawing::Size(32, 32);
				 this->__41->TabIndex = 169;
				 this->__41->TabStop = false;
				 // 
				 // __43
				 // 
				 this->__43->BackColor = System::Drawing::Color::Silver;
				 this->__43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__43->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__43->Location = System::Drawing::Point(556, 3);
				 this->__43->Name = L"__43";
				 this->__43->Size = System::Drawing::Size(32, 32);
				 this->__43->TabIndex = 170;
				 this->__43->TabStop = false;
				 this->__43->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_43_MouseCaptureChanged);
				 // 
				 // __40
				 // 
				 this->__40->BackColor = System::Drawing::Color::Silver;
				 this->__40->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__40->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__40->Location = System::Drawing::Point(589, 3);
				 this->__40->Name = L"__40";
				 this->__40->Size = System::Drawing::Size(32, 32);
				 this->__40->TabIndex = 171;
				 this->__40->TabStop = false;
				 this->__40->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_40_MouseCaptureChanged);
				 // 
				 // __37
				 // 
				 this->__37->BackColor = System::Drawing::Color::Silver;
				 this->__37->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__37->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__37->Location = System::Drawing::Point(622, 3);
				 this->__37->Name = L"__37";
				 this->__37->Size = System::Drawing::Size(32, 32);
				 this->__37->TabIndex = 172;
				 this->__37->TabStop = false;
				 this->__37->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_37_MouseCaptureChanged);
				 // 
				 // __45
				 // 
				 this->__45->BackColor = System::Drawing::Color::Silver;
				 this->__45->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__45->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__45->Location = System::Drawing::Point(556, 69);
				 this->__45->Name = L"__45";
				 this->__45->Size = System::Drawing::Size(32, 32);
				 this->__45->TabIndex = 173;
				 this->__45->TabStop = false;
				 this->__45->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_45_MouseCaptureChanged);
				 // 
				 // __42
				 // 
				 this->__42->BackColor = System::Drawing::Color::Silver;
				 this->__42->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__42->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__42->Location = System::Drawing::Point(589, 69);
				 this->__42->Name = L"__42";
				 this->__42->Size = System::Drawing::Size(32, 32);
				 this->__42->TabIndex = 174;
				 this->__42->TabStop = false;
				 this->__42->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_42_MouseCaptureChanged);
				 // 
				 // __39
				 // 
				 this->__39->BackColor = System::Drawing::Color::Silver;
				 this->__39->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__39->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__39->Location = System::Drawing::Point(622, 69);
				 this->__39->Name = L"__39";
				 this->__39->Size = System::Drawing::Size(32, 32);
				 this->__39->TabIndex = 175;
				 this->__39->TabStop = false;
				 this->__39->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_39_MouseCaptureChanged);
				 // 
				 // __44
				 // 
				 this->__44->BackColor = System::Drawing::Color::Silver;
				 this->__44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__44->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__44->Location = System::Drawing::Point(556, 36);
				 this->__44->Name = L"__44";
				 this->__44->Size = System::Drawing::Size(32, 32);
				 this->__44->TabIndex = 176;
				 this->__44->TabStop = false;
				 this->__44->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_44_MouseCaptureChanged);
				 // 
				 // __38
				 // 
				 this->__38->BackColor = System::Drawing::Color::Silver;
				 this->__38->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__38->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__38->Location = System::Drawing::Point(622, 36);
				 this->__38->Name = L"__38";
				 this->__38->Size = System::Drawing::Size(32, 32);
				 this->__38->TabIndex = 177;
				 this->__38->TabStop = false;
				 this->__38->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_38_MouseCaptureChanged);
				 // 
				 // __50
				 // 
				 this->__50->BackColor = System::Drawing::Color::White;
				 this->__50->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__50->Cursor = System::Windows::Forms::Cursors::No;
				 this->__50->Location = System::Drawing::Point(589, 238);
				 this->__50->Name = L"__50";
				 this->__50->Size = System::Drawing::Size(32, 32);
				 this->__50->TabIndex = 178;
				 this->__50->TabStop = false;
				 // 
				 // __48
				 // 
				 this->__48->BackColor = System::Drawing::Color::Silver;
				 this->__48->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__48->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__48->Location = System::Drawing::Point(556, 205);
				 this->__48->Name = L"__48";
				 this->__48->Size = System::Drawing::Size(32, 32);
				 this->__48->TabIndex = 179;
				 this->__48->TabStop = false;
				 this->__48->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_48_MouseCaptureChanged);
				 // 
				 // __51
				 // 
				 this->__51->BackColor = System::Drawing::Color::Silver;
				 this->__51->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__51->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__51->Location = System::Drawing::Point(589, 205);
				 this->__51->Name = L"__51";
				 this->__51->Size = System::Drawing::Size(32, 32);
				 this->__51->TabIndex = 180;
				 this->__51->TabStop = false;
				 this->__51->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_51_MouseCaptureChanged);
				 // 
				 // __54
				 // 
				 this->__54->BackColor = System::Drawing::Color::Silver;
				 this->__54->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__54->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__54->Location = System::Drawing::Point(622, 205);
				 this->__54->Name = L"__54";
				 this->__54->Size = System::Drawing::Size(32, 32);
				 this->__54->TabIndex = 181;
				 this->__54->TabStop = false;
				 this->__54->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_54_MouseCaptureChanged);
				 // 
				 // __46
				 // 
				 this->__46->BackColor = System::Drawing::Color::Silver;
				 this->__46->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__46->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__46->Location = System::Drawing::Point(556, 271);
				 this->__46->Name = L"__46";
				 this->__46->Size = System::Drawing::Size(32, 32);
				 this->__46->TabIndex = 182;
				 this->__46->TabStop = false;
				 this->__46->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_46_MouseCaptureChanged);
				 // 
				 // __49
				 // 
				 this->__49->BackColor = System::Drawing::Color::Silver;
				 this->__49->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__49->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__49->Location = System::Drawing::Point(589, 271);
				 this->__49->Name = L"__49";
				 this->__49->Size = System::Drawing::Size(32, 32);
				 this->__49->TabIndex = 183;
				 this->__49->TabStop = false;
				 this->__49->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_49_MouseCaptureChanged);
				 // 
				 // __52
				 // 
				 this->__52->BackColor = System::Drawing::Color::Silver;
				 this->__52->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__52->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__52->Location = System::Drawing::Point(622, 271);
				 this->__52->Name = L"__52";
				 this->__52->Size = System::Drawing::Size(32, 32);
				 this->__52->TabIndex = 184;
				 this->__52->TabStop = false;
				 this->__52->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_52_MouseCaptureChanged);
				 // 
				 // __47
				 // 
				 this->__47->BackColor = System::Drawing::Color::Silver;
				 this->__47->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__47->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__47->Location = System::Drawing::Point(556, 238);
				 this->__47->Name = L"__47";
				 this->__47->Size = System::Drawing::Size(32, 32);
				 this->__47->TabIndex = 185;
				 this->__47->TabStop = false;
				 this->__47->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_47_MouseCaptureChanged);
				 // 
				 // __53
				 // 
				 this->__53->BackColor = System::Drawing::Color::Silver;
				 this->__53->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__53->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__53->Location = System::Drawing::Point(622, 238);
				 this->__53->Name = L"__53";
				 this->__53->Size = System::Drawing::Size(32, 32);
				 this->__53->TabIndex = 186;
				 this->__53->TabStop = false;
				 this->__53->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_53_MouseCaptureChanged);
				 // 
				 // __14
				 // 
				 this->__14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
					 static_cast<System::Int32>(static_cast<System::Byte>(0)));
				 this->__14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__14->Cursor = System::Windows::Forms::Cursors::No;
				 this->__14->Location = System::Drawing::Point(690, 137);
				 this->__14->Name = L"__14";
				 this->__14->Size = System::Drawing::Size(32, 32);
				 this->__14->TabIndex = 187;
				 this->__14->TabStop = false;
				 // 
				 // __10
				 // 
				 this->__10->BackColor = System::Drawing::Color::Silver;
				 this->__10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__10->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__10->Location = System::Drawing::Point(657, 104);
				 this->__10->Name = L"__10";
				 this->__10->Size = System::Drawing::Size(32, 32);
				 this->__10->TabIndex = 188;
				 this->__10->TabStop = false;
				 this->__10->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_10_MouseCaptureChanged);
				 // 
				 // __11
				 // 
				 this->__11->BackColor = System::Drawing::Color::Silver;
				 this->__11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__11->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__11->Location = System::Drawing::Point(690, 104);
				 this->__11->Name = L"__11";
				 this->__11->Size = System::Drawing::Size(32, 32);
				 this->__11->TabIndex = 189;
				 this->__11->TabStop = false;
				 this->__11->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_11_MouseCaptureChanged);
				 // 
				 // __12
				 // 
				 this->__12->BackColor = System::Drawing::Color::Silver;
				 this->__12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__12->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__12->Location = System::Drawing::Point(723, 104);
				 this->__12->Name = L"__12";
				 this->__12->Size = System::Drawing::Size(32, 32);
				 this->__12->TabIndex = 190;
				 this->__12->TabStop = false;
				 this->__12->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_12_MouseCaptureChanged);
				 // 
				 // __16
				 // 
				 this->__16->BackColor = System::Drawing::Color::Silver;
				 this->__16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__16->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__16->Location = System::Drawing::Point(657, 170);
				 this->__16->Name = L"__16";
				 this->__16->Size = System::Drawing::Size(32, 32);
				 this->__16->TabIndex = 191;
				 this->__16->TabStop = false;
				 this->__16->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_16_MouseCaptureChanged);
				 // 
				 // __17
				 // 
				 this->__17->BackColor = System::Drawing::Color::Silver;
				 this->__17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__17->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__17->Location = System::Drawing::Point(690, 170);
				 this->__17->Name = L"__17";
				 this->__17->Size = System::Drawing::Size(32, 32);
				 this->__17->TabIndex = 192;
				 this->__17->TabStop = false;
				 this->__17->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_17_MouseCaptureChanged);
				 // 
				 // __18
				 // 
				 this->__18->BackColor = System::Drawing::Color::Silver;
				 this->__18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__18->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__18->Location = System::Drawing::Point(723, 170);
				 this->__18->Name = L"__18";
				 this->__18->Size = System::Drawing::Size(32, 32);
				 this->__18->TabIndex = 193;
				 this->__18->TabStop = false;
				 this->__18->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_18_MouseCaptureChanged);
				 // 
				 // __13
				 // 
				 this->__13->BackColor = System::Drawing::Color::Silver;
				 this->__13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__13->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__13->Location = System::Drawing::Point(657, 137);
				 this->__13->Name = L"__13";
				 this->__13->Size = System::Drawing::Size(32, 32);
				 this->__13->TabIndex = 194;
				 this->__13->TabStop = false;
				 this->__13->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_13_MouseCaptureChanged);
				 // 
				 // __15
				 // 
				 this->__15->BackColor = System::Drawing::Color::Silver;
				 this->__15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__15->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__15->Location = System::Drawing::Point(723, 137);
				 this->__15->Name = L"__15";
				 this->__15->Size = System::Drawing::Size(32, 32);
				 this->__15->TabIndex = 195;
				 this->__15->TabStop = false;
				 this->__15->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_15_MouseCaptureChanged);
				 // 
				 // __23
				 // 
				 this->__23->BackColor = System::Drawing::Color::Blue;
				 this->__23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__23->Cursor = System::Windows::Forms::Cursors::No;
				 this->__23->Location = System::Drawing::Point(791, 137);
				 this->__23->Name = L"__23";
				 this->__23->Size = System::Drawing::Size(32, 32);
				 this->__23->TabIndex = 196;
				 this->__23->TabStop = false;
				 // 
				 // __19
				 // 
				 this->__19->BackColor = System::Drawing::Color::Silver;
				 this->__19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__19->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__19->Location = System::Drawing::Point(758, 104);
				 this->__19->Name = L"__19";
				 this->__19->Size = System::Drawing::Size(32, 32);
				 this->__19->TabIndex = 197;
				 this->__19->TabStop = false;
				 this->__19->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_19_MouseCaptureChanged);
				 // 
				 // __20
				 // 
				 this->__20->BackColor = System::Drawing::Color::Silver;
				 this->__20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__20->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__20->Location = System::Drawing::Point(791, 104);
				 this->__20->Name = L"__20";
				 this->__20->Size = System::Drawing::Size(32, 32);
				 this->__20->TabIndex = 198;
				 this->__20->TabStop = false;
				 this->__20->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_20_MouseCaptureChanged);
				 // 
				 // __21
				 // 
				 this->__21->BackColor = System::Drawing::Color::Silver;
				 this->__21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__21->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__21->Location = System::Drawing::Point(824, 104);
				 this->__21->Name = L"__21";
				 this->__21->Size = System::Drawing::Size(32, 32);
				 this->__21->TabIndex = 199;
				 this->__21->TabStop = false;
				 this->__21->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_21_MouseCaptureChanged);
				 // 
				 // __25
				 // 
				 this->__25->BackColor = System::Drawing::Color::Silver;
				 this->__25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__25->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__25->Location = System::Drawing::Point(758, 170);
				 this->__25->Name = L"__25";
				 this->__25->Size = System::Drawing::Size(32, 32);
				 this->__25->TabIndex = 200;
				 this->__25->TabStop = false;
				 this->__25->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_25_MouseCaptureChanged);
				 // 
				 // __26
				 // 
				 this->__26->BackColor = System::Drawing::Color::Silver;
				 this->__26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__26->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__26->Location = System::Drawing::Point(791, 170);
				 this->__26->Name = L"__26";
				 this->__26->Size = System::Drawing::Size(32, 32);
				 this->__26->TabIndex = 201;
				 this->__26->TabStop = false;
				 this->__26->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_26_MouseCaptureChanged);
				 // 
				 // __27
				 // 
				 this->__27->BackColor = System::Drawing::Color::Silver;
				 this->__27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__27->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__27->Location = System::Drawing::Point(824, 170);
				 this->__27->Name = L"__27";
				 this->__27->Size = System::Drawing::Size(32, 32);
				 this->__27->TabIndex = 202;
				 this->__27->TabStop = false;
				 this->__27->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_27_MouseCaptureChanged);
				 // 
				 // __22
				 // 
				 this->__22->BackColor = System::Drawing::Color::Silver;
				 this->__22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__22->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__22->Location = System::Drawing::Point(758, 137);
				 this->__22->Name = L"__22";
				 this->__22->Size = System::Drawing::Size(32, 32);
				 this->__22->TabIndex = 203;
				 this->__22->TabStop = false;
				 this->__22->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_22_MouseCaptureChanged);
				 // 
				 // __24
				 // 
				 this->__24->BackColor = System::Drawing::Color::Silver;
				 this->__24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->__24->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->__24->Location = System::Drawing::Point(824, 137);
				 this->__24->Name = L"__24";
				 this->__24->Size = System::Drawing::Size(32, 32);
				 this->__24->TabIndex = 204;
				 this->__24->TabStop = false;
				 this->__24->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_24_MouseCaptureChanged);
				 // 
				 // _11
				 // 
				 this->_11->BackColor = System::Drawing::Color::Silver;
				 this->_11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->_11->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->_11->Location = System::Drawing::Point(204, 20);
				 this->_11->Name = L"_11";
				 this->_11->Size = System::Drawing::Size(31, 31);
				 this->_11->TabIndex = 117;
				 this->_11->TabStop = false;
				 this->_11->Visible = false;
				 this->_11->MouseCaptureChanged += gcnew System::EventHandler(this, &Inp_Form::_11_MouseCaptureChanged);
				 // 
				 // shayam
				 // 
				 this->shayam->BackColor = System::Drawing::Color::DarkGray;
				 this->shayam->Location = System::Drawing::Point(878, 11);
				 this->shayam->Name = L"shayam";
				 this->shayam->Size = System::Drawing::Size(10, 90);
				 this->shayam->TabIndex = 205;
				 // 
				 // Solve_Button_2
				 // 
				 this->Solve_Button_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->Solve_Button_2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->Solve_Button_2->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
				 this->Solve_Button_2->Location = System::Drawing::Point(697, 245);
				 this->Solve_Button_2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
				 this->Solve_Button_2->Name = L"Solve_Button_2";
				 this->Solve_Button_2->Size = System::Drawing::Size(142, 31);
				 this->Solve_Button_2->TabIndex = 206;
				 this->Solve_Button_2->TabStop = false;
				 this->Solve_Button_2->Text = L"Solve!";
				 this->Solve_Button_2->UseVisualStyleBackColor = true;
				 this->Solve_Button_2->Click += gcnew System::EventHandler(this, &Inp_Form::Solve_Button_Click);
				 this->Solve_Button_2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Inp_Form::Inp_Form_KeyDown);
				 this->Solve_Button_2->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Inp_Form::Cust_Close_PreviewKeyDown);
				 // 
				 // label15
				 // 
				 this->label15->BackColor = System::Drawing::Color::DarkGray;
				 this->label15->Location = System::Drawing::Point(5, 490);
				 this->label15->Name = L"label15";
				 this->label15->Size = System::Drawing::Size(419, 13);
				 this->label15->TabIndex = 207;
				 // 
				 // Solve_Button
				 // 
				 this->Solve_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->Solve_Button->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->Solve_Button->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
				 this->Solve_Button->Location = System::Drawing::Point(3, 274);
				 this->Solve_Button->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
				 this->Solve_Button->Name = L"Solve_Button";
				 this->Solve_Button->Size = System::Drawing::Size(432, 30);
				 this->Solve_Button->TabIndex = 0;
				 this->Solve_Button->TabStop = false;
				 this->Solve_Button->Text = L"Solve!";
				 this->Solve_Button->UseVisualStyleBackColor = true;
				 this->Solve_Button->Visible = false;
				 this->Solve_Button->Click += gcnew System::EventHandler(this, &Inp_Form::Solve_Button_Click);
				 this->Solve_Button->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Inp_Form::Inp_Form_KeyDown);
				 this->Solve_Button->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Inp_Form::Cust_Close_PreviewKeyDown);
				 // 
				 // label16
				 // 
				 this->label16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					 static_cast<System::Int32>(static_cast<System::Byte>(64)));
				 this->label16->Location = System::Drawing::Point(454, 102);
				 this->label16->Name = L"label16";
				 this->label16->Size = System::Drawing::Size(403, 1);
				 this->label16->TabIndex = 208;
				 // 
				 // label17
				 // 
				 this->label17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					 static_cast<System::Int32>(static_cast<System::Byte>(64)));
				 this->label17->Location = System::Drawing::Point(453, 203);
				 this->label17->Name = L"label17";
				 this->label17->Size = System::Drawing::Size(405, 1);
				 this->label17->TabIndex = 209;
				 // 
				 // label18
				 // 
				 this->label18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					 static_cast<System::Int32>(static_cast<System::Byte>(64)));
				 this->label18->Location = System::Drawing::Point(554, 2);
				 this->label18->Name = L"label18";
				 this->label18->Size = System::Drawing::Size(1, 302);
				 this->label18->TabIndex = 210;
				 // 
				 // label19
				 // 
				 this->label19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					 static_cast<System::Int32>(static_cast<System::Byte>(64)));
				 this->label19->Location = System::Drawing::Point(655, 2);
				 this->label19->Name = L"label19";
				 this->label19->Size = System::Drawing::Size(1, 302);
				 this->label19->TabIndex = 211;
				 // 
				 // label20
				 // 
				 this->label20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					 static_cast<System::Int32>(static_cast<System::Byte>(64)));
				 this->label20->Location = System::Drawing::Point(554, 1);
				 this->label20->Name = L"label20";
				 this->label20->Size = System::Drawing::Size(102, 1);
				 this->label20->TabIndex = 212;
				 // 
				 // label21
				 // 
				 this->label21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					 static_cast<System::Int32>(static_cast<System::Byte>(64)));
				 this->label21->Location = System::Drawing::Point(554, 304);
				 this->label21->Name = L"label21";
				 this->label21->Size = System::Drawing::Size(102, 1);
				 this->label21->TabIndex = 213;
				 // 
				 // label22
				 // 
				 this->label22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					 static_cast<System::Int32>(static_cast<System::Byte>(64)));
				 this->label22->ForeColor = System::Drawing::SystemColors::Desktop;
				 this->label22->Location = System::Drawing::Point(756, 103);
				 this->label22->Name = L"label22";
				 this->label22->Size = System::Drawing::Size(1, 101);
				 this->label22->TabIndex = 214;
				 // 
				 // label23
				 // 
				 this->label23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					 static_cast<System::Int32>(static_cast<System::Byte>(64)));
				 this->label23->Location = System::Drawing::Point(857, 102);
				 this->label23->Name = L"label23";
				 this->label23->Size = System::Drawing::Size(1, 101);
				 this->label23->TabIndex = 215;
				 // 
				 // label24
				 // 
				 this->label24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					 static_cast<System::Int32>(static_cast<System::Byte>(64)));
				 this->label24->Location = System::Drawing::Point(453, 102);
				 this->label24->Name = L"label24";
				 this->label24->Size = System::Drawing::Size(1, 101);
				 this->label24->TabIndex = 216;
				 // 
				 // label25
				 // 
				 this->label25->BackColor = System::Drawing::Color::Gray;
				 this->label25->Location = System::Drawing::Point(121, 18);
				 this->label25->Name = L"label25";
				 this->label25->Size = System::Drawing::Size(1, 99);
				 this->label25->TabIndex = 217;
				 // 
				 // label26
				 // 
				 this->label26->BackColor = System::Drawing::Color::Gray;
				 this->label26->Location = System::Drawing::Point(23, 18);
				 this->label26->Name = L"label26";
				 this->label26->Size = System::Drawing::Size(1, 99);
				 this->label26->TabIndex = 218;
				 // 
				 // label27
				 // 
				 this->label27->BackColor = System::Drawing::Color::Gray;
				 this->label27->Location = System::Drawing::Point(23, 18);
				 this->label27->Name = L"label27";
				 this->label27->Size = System::Drawing::Size(98, 1);
				 this->label27->TabIndex = 219;
				 // 
				 // label28
				 // 
				 this->label28->BackColor = System::Drawing::Color::Gray;
				 this->label28->Location = System::Drawing::Point(23, 116);
				 this->label28->Name = L"label28";
				 this->label28->Size = System::Drawing::Size(98, 1);
				 this->label28->TabIndex = 220;
				 // 
				 // label32
				 // 
				 this->label32->BackColor = System::Drawing::Color::Gray;
				 this->label32->Location = System::Drawing::Point(268, 18);
				 this->label32->Name = L"label32";
				 this->label32->Size = System::Drawing::Size(1, 99);
				 this->label32->TabIndex = 221;
				 // 
				 // label31
				 // 
				 this->label31->BackColor = System::Drawing::Color::Gray;
				 this->label31->Location = System::Drawing::Point(170, 18);
				 this->label31->Name = L"label31";
				 this->label31->Size = System::Drawing::Size(1, 99);
				 this->label31->TabIndex = 222;
				 // 
				 // label30
				 // 
				 this->label30->BackColor = System::Drawing::Color::Gray;
				 this->label30->Location = System::Drawing::Point(170, 18);
				 this->label30->Name = L"label30";
				 this->label30->Size = System::Drawing::Size(98, 1);
				 this->label30->TabIndex = 223;
				 // 
				 // label29
				 // 
				 this->label29->BackColor = System::Drawing::Color::Gray;
				 this->label29->Location = System::Drawing::Point(170, 116);
				 this->label29->Name = L"label29";
				 this->label29->Size = System::Drawing::Size(98, 1);
				 this->label29->TabIndex = 224;
				 // 
				 // label36
				 // 
				 this->label36->BackColor = System::Drawing::Color::Gray;
				 this->label36->Location = System::Drawing::Point(415, 18);
				 this->label36->Name = L"label36";
				 this->label36->Size = System::Drawing::Size(1, 99);
				 this->label36->TabIndex = 225;
				 // 
				 // label35
				 // 
				 this->label35->BackColor = System::Drawing::Color::Gray;
				 this->label35->Location = System::Drawing::Point(317, 18);
				 this->label35->Name = L"label35";
				 this->label35->Size = System::Drawing::Size(1, 99);
				 this->label35->TabIndex = 226;
				 // 
				 // label34
				 // 
				 this->label34->BackColor = System::Drawing::Color::Gray;
				 this->label34->Location = System::Drawing::Point(317, 18);
				 this->label34->Name = L"label34";
				 this->label34->Size = System::Drawing::Size(98, 1);
				 this->label34->TabIndex = 227;
				 // 
				 // label33
				 // 
				 this->label33->BackColor = System::Drawing::Color::Gray;
				 this->label33->Location = System::Drawing::Point(317, 116);
				 this->label33->Name = L"label33";
				 this->label33->Size = System::Drawing::Size(98, 1);
				 this->label33->TabIndex = 228;
				 // 
				 // label40
				 // 
				 this->label40->BackColor = System::Drawing::Color::Gray;
				 this->label40->Location = System::Drawing::Point(415, 152);
				 this->label40->Name = L"label40";
				 this->label40->Size = System::Drawing::Size(1, 99);
				 this->label40->TabIndex = 229;
				 // 
				 // label39
				 // 
				 this->label39->BackColor = System::Drawing::Color::Gray;
				 this->label39->Location = System::Drawing::Point(317, 152);
				 this->label39->Name = L"label39";
				 this->label39->Size = System::Drawing::Size(1, 99);
				 this->label39->TabIndex = 230;
				 // 
				 // label38
				 // 
				 this->label38->BackColor = System::Drawing::Color::Gray;
				 this->label38->Location = System::Drawing::Point(317, 152);
				 this->label38->Name = L"label38";
				 this->label38->Size = System::Drawing::Size(98, 1);
				 this->label38->TabIndex = 231;
				 // 
				 // label37
				 // 
				 this->label37->BackColor = System::Drawing::Color::Gray;
				 this->label37->Location = System::Drawing::Point(317, 250);
				 this->label37->Name = L"label37";
				 this->label37->Size = System::Drawing::Size(98, 1);
				 this->label37->TabIndex = 232;
				 // 
				 // label44
				 // 
				 this->label44->BackColor = System::Drawing::Color::Gray;
				 this->label44->Location = System::Drawing::Point(268, 152);
				 this->label44->Name = L"label44";
				 this->label44->Size = System::Drawing::Size(1, 99);
				 this->label44->TabIndex = 233;
				 // 
				 // label43
				 // 
				 this->label43->BackColor = System::Drawing::Color::Gray;
				 this->label43->Location = System::Drawing::Point(170, 152);
				 this->label43->Name = L"label43";
				 this->label43->Size = System::Drawing::Size(1, 99);
				 this->label43->TabIndex = 234;
				 // 
				 // label42
				 // 
				 this->label42->BackColor = System::Drawing::Color::Gray;
				 this->label42->Location = System::Drawing::Point(170, 152);
				 this->label42->Name = L"label42";
				 this->label42->Size = System::Drawing::Size(98, 1);
				 this->label42->TabIndex = 235;
				 // 
				 // label41
				 // 
				 this->label41->BackColor = System::Drawing::Color::Gray;
				 this->label41->Location = System::Drawing::Point(170, 250);
				 this->label41->Name = L"label41";
				 this->label41->Size = System::Drawing::Size(98, 1);
				 this->label41->TabIndex = 236;
				 // 
				 // label48
				 // 
				 this->label48->BackColor = System::Drawing::Color::Gray;
				 this->label48->Location = System::Drawing::Point(121, 152);
				 this->label48->Name = L"label48";
				 this->label48->Size = System::Drawing::Size(1, 99);
				 this->label48->TabIndex = 237;
				 // 
				 // label47
				 // 
				 this->label47->BackColor = System::Drawing::Color::Gray;
				 this->label47->Location = System::Drawing::Point(23, 152);
				 this->label47->Name = L"label47";
				 this->label47->Size = System::Drawing::Size(1, 99);
				 this->label47->TabIndex = 238;
				 // 
				 // label46
				 // 
				 this->label46->BackColor = System::Drawing::Color::Gray;
				 this->label46->Location = System::Drawing::Point(23, 152);
				 this->label46->Name = L"label46";
				 this->label46->Size = System::Drawing::Size(98, 1);
				 this->label46->TabIndex = 239;
				 // 
				 // label45
				 // 
				 this->label45->BackColor = System::Drawing::Color::Gray;
				 this->label45->Location = System::Drawing::Point(23, 250);
				 this->label45->Name = L"label45";
				 this->label45->Size = System::Drawing::Size(98, 1);
				 this->label45->TabIndex = 240;
				 // 
				 // pictureBox11
				 // 
				 this->pictureBox11->BackColor = System::Drawing::Color::Yellow;
				 this->pictureBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->pictureBox11->Location = System::Drawing::Point(351, 10);
				 this->pictureBox11->Name = L"pictureBox11";
				 this->pictureBox11->Size = System::Drawing::Size(31, 7);
				 this->pictureBox11->TabIndex = 55;
				 this->pictureBox11->TabStop = false;
				 this->pictureBox11->Visible = false;
				 // 
				 // pictureBox12
				 // 
				 this->pictureBox12->BackColor = System::Drawing::Color::White;
				 this->pictureBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->pictureBox12->Location = System::Drawing::Point(351, 118);
				 this->pictureBox12->Name = L"pictureBox12";
				 this->pictureBox12->Size = System::Drawing::Size(31, 7);
				 this->pictureBox12->TabIndex = 54;
				 this->pictureBox12->TabStop = false;
				 this->pictureBox12->Visible = false;
				 // 
				 // pictureBox13
				 // 
				 this->pictureBox13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
					 static_cast<System::Int32>(static_cast<System::Byte>(0)));
				 this->pictureBox13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->pictureBox13->Location = System::Drawing::Point(309, 52);
				 this->pictureBox13->Name = L"pictureBox13";
				 this->pictureBox13->Size = System::Drawing::Size(7, 31);
				 this->pictureBox13->TabIndex = 53;
				 this->pictureBox13->TabStop = false;
				 this->pictureBox13->Visible = false;
				 // 
				 // pictureBox16
				 // 
				 this->pictureBox16->BackColor = System::Drawing::Color::Red;
				 this->pictureBox16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->pictureBox16->Location = System::Drawing::Point(351, 144);
				 this->pictureBox16->Name = L"pictureBox16";
				 this->pictureBox16->Size = System::Drawing::Size(31, 7);
				 this->pictureBox16->TabIndex = 101;
				 this->pictureBox16->TabStop = false;
				 this->pictureBox16->Visible = false;
				 // 
				 // pictureBox18
				 // 
				 this->pictureBox18->BackColor = System::Drawing::Color::Blue;
				 this->pictureBox18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->pictureBox18->Location = System::Drawing::Point(309, 186);
				 this->pictureBox18->Name = L"pictureBox18";
				 this->pictureBox18->Size = System::Drawing::Size(7, 31);
				 this->pictureBox18->TabIndex = 102;
				 this->pictureBox18->TabStop = false;
				 this->pictureBox18->Visible = false;
				 // 
				 // pictureBox17
				 // 
				 this->pictureBox17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
					 static_cast<System::Int32>(static_cast<System::Byte>(0)));
				 this->pictureBox17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->pictureBox17->Location = System::Drawing::Point(351, 252);
				 this->pictureBox17->Name = L"pictureBox17";
				 this->pictureBox17->Size = System::Drawing::Size(31, 7);
				 this->pictureBox17->TabIndex = 104;
				 this->pictureBox17->TabStop = false;
				 this->pictureBox17->Visible = false;
				 // 
				 // pictureBox6
				 // 
				 this->pictureBox6->BackColor = System::Drawing::Color::Yellow;
				 this->pictureBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->pictureBox6->Location = System::Drawing::Point(204, 10);
				 this->pictureBox6->Name = L"pictureBox6";
				 this->pictureBox6->Size = System::Drawing::Size(31, 7);
				 this->pictureBox6->TabIndex = 42;
				 this->pictureBox6->TabStop = false;
				 this->pictureBox6->Visible = false;
				 // 
				 // pictureBox7
				 // 
				 this->pictureBox7->BackColor = System::Drawing::Color::White;
				 this->pictureBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->pictureBox7->Location = System::Drawing::Point(204, 118);
				 this->pictureBox7->Name = L"pictureBox7";
				 this->pictureBox7->Size = System::Drawing::Size(31, 7);
				 this->pictureBox7->TabIndex = 41;
				 this->pictureBox7->TabStop = false;
				 this->pictureBox7->Visible = false;
				 // 
				 // pictureBox8
				 // 
				 this->pictureBox8->BackColor = System::Drawing::Color::Green;
				 this->pictureBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->pictureBox8->Location = System::Drawing::Point(162, 52);
				 this->pictureBox8->Name = L"pictureBox8";
				 this->pictureBox8->Size = System::Drawing::Size(7, 31);
				 this->pictureBox8->TabIndex = 40;
				 this->pictureBox8->TabStop = false;
				 this->pictureBox8->Visible = false;
				 // 
				 // pictureBox22
				 // 
				 this->pictureBox22->BackColor = System::Drawing::Color::Red;
				 this->pictureBox22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->pictureBox22->Location = System::Drawing::Point(204, 252);
				 this->pictureBox22->Name = L"pictureBox22";
				 this->pictureBox22->Size = System::Drawing::Size(31, 7);
				 this->pictureBox22->TabIndex = 80;
				 this->pictureBox22->TabStop = false;
				 this->pictureBox22->Visible = false;
				 // 
				 // pictureBox9
				 // 
				 this->pictureBox9->BackColor = System::Drawing::Color::Blue;
				 this->pictureBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->pictureBox9->Location = System::Drawing::Point(270, 52);
				 this->pictureBox9->Name = L"pictureBox9";
				 this->pictureBox9->Size = System::Drawing::Size(7, 31);
				 this->pictureBox9->TabIndex = 32;
				 this->pictureBox9->TabStop = false;
				 this->pictureBox9->Visible = false;
				 // 
				 // pictureBox21
				 // 
				 this->pictureBox21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
					 static_cast<System::Int32>(static_cast<System::Byte>(0)));
				 this->pictureBox21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->pictureBox21->Location = System::Drawing::Point(204, 144);
				 this->pictureBox21->Name = L"pictureBox21";
				 this->pictureBox21->Size = System::Drawing::Size(31, 7);
				 this->pictureBox21->TabIndex = 81;
				 this->pictureBox21->TabStop = false;
				 this->pictureBox21->Visible = false;
				 // 
				 // pictureBox27
				 // 
				 this->pictureBox27->BackColor = System::Drawing::Color::White;
				 this->pictureBox27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->pictureBox27->Location = System::Drawing::Point(57, 252);
				 this->pictureBox27->Name = L"pictureBox27";
				 this->pictureBox27->Size = System::Drawing::Size(31, 7);
				 this->pictureBox27->TabIndex = 93;
				 this->pictureBox27->TabStop = false;
				 this->pictureBox27->Visible = false;
				 // 
				 // pictureBox26
				 // 
				 this->pictureBox26->BackColor = System::Drawing::Color::Yellow;
				 this->pictureBox26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->pictureBox26->Location = System::Drawing::Point(57, 144);
				 this->pictureBox26->Name = L"pictureBox26";
				 this->pictureBox26->Size = System::Drawing::Size(31, 7);
				 this->pictureBox26->TabIndex = 94;
				 this->pictureBox26->TabStop = false;
				 this->pictureBox26->Visible = false;
				 // 
				 // pictureBox2
				 // 
				 this->pictureBox2->BackColor = System::Drawing::Color::Red;
				 this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->pictureBox2->Location = System::Drawing::Point(15, 52);
				 this->pictureBox2->Name = L"pictureBox2";
				 this->pictureBox2->Size = System::Drawing::Size(7, 31);
				 this->pictureBox2->TabIndex = 27;
				 this->pictureBox2->TabStop = false;
				 this->pictureBox2->Visible = false;
				 // 
				 // pictureBox28
				 // 
				 this->pictureBox28->BackColor = System::Drawing::Color::Blue;
				 this->pictureBox28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->pictureBox28->Location = System::Drawing::Point(15, 186);
				 this->pictureBox28->Name = L"pictureBox28";
				 this->pictureBox28->Size = System::Drawing::Size(7, 31);
				 this->pictureBox28->TabIndex = 97;
				 this->pictureBox28->TabStop = false;
				 this->pictureBox28->Visible = false;
				 // 
				 // pictureBox29
				 // 
				 this->pictureBox29->BackColor = System::Drawing::Color::Green;
				 this->pictureBox29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->pictureBox29->Location = System::Drawing::Point(123, 186);
				 this->pictureBox29->Name = L"pictureBox29";
				 this->pictureBox29->Size = System::Drawing::Size(7, 31);
				 this->pictureBox29->TabIndex = 98;
				 this->pictureBox29->TabStop = false;
				 this->pictureBox29->Visible = false;
				 // 
				 // pictureBox14
				 // 
				 this->pictureBox14->BackColor = System::Drawing::Color::Red;
				 this->pictureBox14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->pictureBox14->Location = System::Drawing::Point(417, 52);
				 this->pictureBox14->Name = L"pictureBox14";
				 this->pictureBox14->Size = System::Drawing::Size(7, 31);
				 this->pictureBox14->TabIndex = 165;
				 this->pictureBox14->TabStop = false;
				 this->pictureBox14->Visible = false;
				 // 
				 // pictureBox23
				 // 
				 this->pictureBox23->BackColor = System::Drawing::Color::Blue;
				 this->pictureBox23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->pictureBox23->Location = System::Drawing::Point(162, 186);
				 this->pictureBox23->Name = L"pictureBox23";
				 this->pictureBox23->Size = System::Drawing::Size(7, 31);
				 this->pictureBox23->TabIndex = 99;
				 this->pictureBox23->TabStop = false;
				 this->pictureBox23->Visible = false;
				 // 
				 // pictureBox31
				 // 
				 this->pictureBox31->BackColor = System::Drawing::Color::Green;
				 this->pictureBox31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->pictureBox31->Location = System::Drawing::Point(270, 186);
				 this->pictureBox31->Name = L"pictureBox31";
				 this->pictureBox31->Size = System::Drawing::Size(7, 31);
				 this->pictureBox31->TabIndex = 100;
				 this->pictureBox31->TabStop = false;
				 this->pictureBox31->Visible = false;
				 // 
				 // pictureBox4
				 // 
				 this->pictureBox4->BackColor = System::Drawing::Color::White;
				 this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->pictureBox4->Location = System::Drawing::Point(57, 118);
				 this->pictureBox4->Name = L"pictureBox4";
				 this->pictureBox4->Size = System::Drawing::Size(31, 7);
				 this->pictureBox4->TabIndex = 28;
				 this->pictureBox4->TabStop = false;
				 this->pictureBox4->Visible = false;
				 // 
				 // pictureBox5
				 // 
				 this->pictureBox5->BackColor = System::Drawing::Color::Yellow;
				 this->pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->pictureBox5->Location = System::Drawing::Point(57, 10);
				 this->pictureBox5->Name = L"pictureBox5";
				 this->pictureBox5->Size = System::Drawing::Size(31, 7);
				 this->pictureBox5->TabIndex = 29;
				 this->pictureBox5->TabStop = false;
				 this->pictureBox5->Visible = false;
				 // 
				 // pictureBox19
				 // 
				 this->pictureBox19->BackColor = System::Drawing::Color::Green;
				 this->pictureBox19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->pictureBox19->Location = System::Drawing::Point(417, 186);
				 this->pictureBox19->Name = L"pictureBox19";
				 this->pictureBox19->Size = System::Drawing::Size(7, 31);
				 this->pictureBox19->TabIndex = 166;
				 this->pictureBox19->TabStop = false;
				 this->pictureBox19->Visible = false;
				 // 
				 // pictureBox3
				 // 
				 this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
					 static_cast<System::Int32>(static_cast<System::Byte>(0)));
				 this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->pictureBox3->Location = System::Drawing::Point(123, 52);
				 this->pictureBox3->Name = L"pictureBox3";
				 this->pictureBox3->Size = System::Drawing::Size(7, 31);
				 this->pictureBox3->TabIndex = 16;
				 this->pictureBox3->TabStop = false;
				 this->pictureBox3->Visible = false;
				 // 
				 // Inp_Panel
				 // 
				 this->Inp_Panel->AutoScroll = true;
				 this->Inp_Panel->AutoScrollMinSize = System::Drawing::Size(440, 0);
				 this->Inp_Panel->BackColor = System::Drawing::SystemColors::AppWorkspace;
				 this->Inp_Panel->Controls->Add(this->pictureBox3);
				 this->Inp_Panel->Controls->Add(this->pictureBox19);
				 this->Inp_Panel->Controls->Add(this->pictureBox5);
				 this->Inp_Panel->Controls->Add(this->pictureBox4);
				 this->Inp_Panel->Controls->Add(this->pictureBox31);
				 this->Inp_Panel->Controls->Add(this->pictureBox23);
				 this->Inp_Panel->Controls->Add(this->pictureBox14);
				 this->Inp_Panel->Controls->Add(this->pictureBox29);
				 this->Inp_Panel->Controls->Add(this->pictureBox28);
				 this->Inp_Panel->Controls->Add(this->pictureBox2);
				 this->Inp_Panel->Controls->Add(this->pictureBox26);
				 this->Inp_Panel->Controls->Add(this->pictureBox27);
				 this->Inp_Panel->Controls->Add(this->pictureBox21);
				 this->Inp_Panel->Controls->Add(this->pictureBox9);
				 this->Inp_Panel->Controls->Add(this->pictureBox22);
				 this->Inp_Panel->Controls->Add(this->pictureBox8);
				 this->Inp_Panel->Controls->Add(this->pictureBox7);
				 this->Inp_Panel->Controls->Add(this->pictureBox6);
				 this->Inp_Panel->Controls->Add(this->pictureBox17);
				 this->Inp_Panel->Controls->Add(this->pictureBox18);
				 this->Inp_Panel->Controls->Add(this->pictureBox16);
				 this->Inp_Panel->Controls->Add(this->pictureBox13);
				 this->Inp_Panel->Controls->Add(this->pictureBox12);
				 this->Inp_Panel->Controls->Add(this->pictureBox11);
				 this->Inp_Panel->Controls->Add(this->label45);
				 this->Inp_Panel->Controls->Add(this->label46);
				 this->Inp_Panel->Controls->Add(this->label47);
				 this->Inp_Panel->Controls->Add(this->label48);
				 this->Inp_Panel->Controls->Add(this->label41);
				 this->Inp_Panel->Controls->Add(this->label42);
				 this->Inp_Panel->Controls->Add(this->label43);
				 this->Inp_Panel->Controls->Add(this->label44);
				 this->Inp_Panel->Controls->Add(this->label37);
				 this->Inp_Panel->Controls->Add(this->label38);
				 this->Inp_Panel->Controls->Add(this->label39);
				 this->Inp_Panel->Controls->Add(this->label40);
				 this->Inp_Panel->Controls->Add(this->label33);
				 this->Inp_Panel->Controls->Add(this->label34);
				 this->Inp_Panel->Controls->Add(this->label35);
				 this->Inp_Panel->Controls->Add(this->label36);
				 this->Inp_Panel->Controls->Add(this->label29);
				 this->Inp_Panel->Controls->Add(this->label30);
				 this->Inp_Panel->Controls->Add(this->label31);
				 this->Inp_Panel->Controls->Add(this->label32);
				 this->Inp_Panel->Controls->Add(this->label28);
				 this->Inp_Panel->Controls->Add(this->label27);
				 this->Inp_Panel->Controls->Add(this->label26);
				 this->Inp_Panel->Controls->Add(this->label25);
				 this->Inp_Panel->Controls->Add(this->label24);
				 this->Inp_Panel->Controls->Add(this->label23);
				 this->Inp_Panel->Controls->Add(this->label22);
				 this->Inp_Panel->Controls->Add(this->label21);
				 this->Inp_Panel->Controls->Add(this->label20);
				 this->Inp_Panel->Controls->Add(this->label19);
				 this->Inp_Panel->Controls->Add(this->label18);
				 this->Inp_Panel->Controls->Add(this->label17);
				 this->Inp_Panel->Controls->Add(this->label16);
				 this->Inp_Panel->Controls->Add(this->Solve_Button);
				 this->Inp_Panel->Controls->Add(this->label15);
				 this->Inp_Panel->Controls->Add(this->Solve_Button_2);
				 this->Inp_Panel->Controls->Add(this->shayam);
				 this->Inp_Panel->Controls->Add(this->_11);
				 this->Inp_Panel->Controls->Add(this->__24);
				 this->Inp_Panel->Controls->Add(this->__22);
				 this->Inp_Panel->Controls->Add(this->__27);
				 this->Inp_Panel->Controls->Add(this->__26);
				 this->Inp_Panel->Controls->Add(this->__25);
				 this->Inp_Panel->Controls->Add(this->__21);
				 this->Inp_Panel->Controls->Add(this->__20);
				 this->Inp_Panel->Controls->Add(this->__19);
				 this->Inp_Panel->Controls->Add(this->__23);
				 this->Inp_Panel->Controls->Add(this->__15);
				 this->Inp_Panel->Controls->Add(this->__13);
				 this->Inp_Panel->Controls->Add(this->__18);
				 this->Inp_Panel->Controls->Add(this->__17);
				 this->Inp_Panel->Controls->Add(this->__16);
				 this->Inp_Panel->Controls->Add(this->__12);
				 this->Inp_Panel->Controls->Add(this->__11);
				 this->Inp_Panel->Controls->Add(this->__10);
				 this->Inp_Panel->Controls->Add(this->__14);
				 this->Inp_Panel->Controls->Add(this->__53);
				 this->Inp_Panel->Controls->Add(this->__47);
				 this->Inp_Panel->Controls->Add(this->__52);
				 this->Inp_Panel->Controls->Add(this->__49);
				 this->Inp_Panel->Controls->Add(this->__46);
				 this->Inp_Panel->Controls->Add(this->__54);
				 this->Inp_Panel->Controls->Add(this->__51);
				 this->Inp_Panel->Controls->Add(this->__48);
				 this->Inp_Panel->Controls->Add(this->__50);
				 this->Inp_Panel->Controls->Add(this->__38);
				 this->Inp_Panel->Controls->Add(this->__44);
				 this->Inp_Panel->Controls->Add(this->__39);
				 this->Inp_Panel->Controls->Add(this->__42);
				 this->Inp_Panel->Controls->Add(this->__45);
				 this->Inp_Panel->Controls->Add(this->__37);
				 this->Inp_Panel->Controls->Add(this->__40);
				 this->Inp_Panel->Controls->Add(this->__43);
				 this->Inp_Panel->Controls->Add(this->__41);
				 this->Inp_Panel->Controls->Add(this->__33);
				 this->Inp_Panel->Controls->Add(this->__31);
				 this->Inp_Panel->Controls->Add(this->__36);
				 this->Inp_Panel->Controls->Add(this->__35);
				 this->Inp_Panel->Controls->Add(this->__34);
				 this->Inp_Panel->Controls->Add(this->__30);
				 this->Inp_Panel->Controls->Add(this->__29);
				 this->Inp_Panel->Controls->Add(this->__28);
				 this->Inp_Panel->Controls->Add(this->__32);
				 this->Inp_Panel->Controls->Add(this->__6);
				 this->Inp_Panel->Controls->Add(this->__4);
				 this->Inp_Panel->Controls->Add(this->__9);
				 this->Inp_Panel->Controls->Add(this->__8);
				 this->Inp_Panel->Controls->Add(this->__7);
				 this->Inp_Panel->Controls->Add(this->__3);
				 this->Inp_Panel->Controls->Add(this->__2);
				 this->Inp_Panel->Controls->Add(this->__1);
				 this->Inp_Panel->Controls->Add(this->__5);
				 this->Inp_Panel->Controls->Add(this->_9);
				 this->Inp_Panel->Controls->Add(this->_1);
				 this->Inp_Panel->Controls->Add(this->_6);
				 this->Inp_Panel->Controls->Add(this->_42);
				 this->Inp_Panel->Controls->Add(this->_51);
				 this->Inp_Panel->Controls->Add(this->_40);
				 this->Inp_Panel->Controls->Add(this->_3);
				 this->Inp_Panel->Controls->Add(this->_33);
				 this->Inp_Panel->Controls->Add(this->_54);
				 this->Inp_Panel->Controls->Add(this->_31);
				 this->Inp_Panel->Controls->Add(this->_24);
				 this->Inp_Panel->Controls->Add(this->_45);
				 this->Inp_Panel->Controls->Add(this->_48);
				 this->Inp_Panel->Controls->Add(this->_44);
				 this->Inp_Panel->Controls->Add(this->_5);
				 this->Inp_Panel->Controls->Add(this->_43);
				 this->Inp_Panel->Controls->Add(this->_36);
				 this->Inp_Panel->Controls->Add(this->_2);
				 this->Inp_Panel->Controls->Add(this->_35);
				 this->Inp_Panel->Controls->Add(this->_49);
				 this->Inp_Panel->Controls->Add(this->_34);
				 this->Inp_Panel->Controls->Add(this->_39);
				 this->Inp_Panel->Controls->Add(this->_27);
				 this->Inp_Panel->Controls->Add(this->_38);
				 this->Inp_Panel->Controls->Add(this->_37);
				 this->Inp_Panel->Controls->Add(this->_21);
				 this->Inp_Panel->Controls->Add(this->_30);
				 this->Inp_Panel->Controls->Add(this->_29);
				 this->Inp_Panel->Controls->Add(this->_53);
				 this->Inp_Panel->Controls->Add(this->_28);
				 this->Inp_Panel->Controls->Add(this->_4);
				 this->Inp_Panel->Controls->Add(this->_52);
				 this->Inp_Panel->Controls->Add(this->_7);
				 this->Inp_Panel->Controls->Add(this->_8);
				 this->Inp_Panel->Controls->Add(this->_14);
				 this->Inp_Panel->Controls->Add(this->_32);
				 this->Inp_Panel->Controls->Add(this->_41);
				 this->Inp_Panel->Controls->Add(this->_47);
				 this->Inp_Panel->Controls->Add(this->_22);
				 this->Inp_Panel->Controls->Add(this->_46);
				 this->Inp_Panel->Controls->Add(this->_10);
				 this->Inp_Panel->Controls->Add(this->_15);
				 this->Inp_Panel->Controls->Add(this->_12);
				 this->Inp_Panel->Controls->Add(this->_13);
				 this->Inp_Panel->Controls->Add(this->_16);
				 this->Inp_Panel->Controls->Add(this->_17);
				 this->Inp_Panel->Controls->Add(this->_18);
				 this->Inp_Panel->Controls->Add(this->_26);
				 this->Inp_Panel->Controls->Add(this->_23);
				 this->Inp_Panel->Controls->Add(this->_19);
				 this->Inp_Panel->Controls->Add(this->_20);
				 this->Inp_Panel->Controls->Add(this->_25);
				 this->Inp_Panel->Controls->Add(this->_50);
				 this->Inp_Panel->Font = (gcnew System::Drawing::Font(L"Segoe Print", 8.5F, System::Drawing::FontStyle::Italic));
				 this->Inp_Panel->Location = System::Drawing::Point(5, 78);
				 this->Inp_Panel->Name = L"Inp_Panel";
				 this->Inp_Panel->Size = System::Drawing::Size(466, 519);
				 this->Inp_Panel->TabIndex = 234;
				 this->Inp_Panel->MouseWheel += gcnew System::Windows::Forms::MouseEventHandler(this, &Inp_Form::Inp_Panel_MouseWheel);
				 this->Inp_Panel->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &Inp_Form::Cust_Close_PreviewKeyDown);
				 // 
				 // Inp_Form
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(7, 19);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::Color::DarkGray;
				 this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
				 this->ClientSize = System::Drawing::Size(448, 390);
				 this->ControlBox = false;
				 this->Controls->Add(this->Scan);
				 this->Controls->Add(this->Reset_Button);
				 this->Controls->Add(this->label8);
				 this->Controls->Add(this->label13);
				 this->Controls->Add(this->BTS);
				 this->Controls->Add(this->Setting_Button);
				 this->Controls->Add(this->Icon_Pict);
				 this->Controls->Add(this->bod2);
				 this->Controls->Add(this->OpCube);
				 this->Controls->Add(this->Face);
				 this->Controls->Add(this->Cust_Close);
				 this->Controls->Add(this->Help_Button);
				 this->Controls->Add(this->label14);
				 this->Controls->Add(this->label12);
				 this->Controls->Add(this->label11);
				 this->Controls->Add(this->label10);
				 this->Controls->Add(this->About_Button);
				 this->Controls->Add(this->Picker_P);
				 this->Controls->Add(this->Picked);
				 this->Controls->Add(this->label6);
				 this->Controls->Add(this->Green_Pick);
				 this->Controls->Add(this->White_Pick);
				 this->Controls->Add(this->Yellow_Pick);
				 this->Controls->Add(this->Red_Pick);
				 this->Controls->Add(this->Blue_Pick);
				 this->Controls->Add(this->Orange_Pick);
				 this->Controls->Add(this->Alg_Label);
				 this->Controls->Add(this->Next_Label);
				 this->Controls->Add(this->Prev_Label);
				 this->Controls->Add(this->Title);
				 this->Controls->Add(this->label5);
				 this->Controls->Add(this->label4);
				 this->Controls->Add(this->Pict_Ut);
				 this->Controls->Add(this->Pict_Rt);
				 this->Controls->Add(this->Pict_Lt);
				 this->Controls->Add(this->Pict_Ft);
				 this->Controls->Add(this->Pict_Dt);
				 this->Controls->Add(this->Pict_Bt);
				 this->Controls->Add(this->Pict_Up);
				 this->Controls->Add(this->Pict_U);
				 this->Controls->Add(this->Pict_Rp);
				 this->Controls->Add(this->Pict_R);
				 this->Controls->Add(this->Pict_Lp);
				 this->Controls->Add(this->Pict_L);
				 this->Controls->Add(this->Pict_Fp);
				 this->Controls->Add(this->Pict_F);
				 this->Controls->Add(this->Pict_Dp);
				 this->Controls->Add(this->Pict_D);
				 this->Controls->Add(this->Pict_Bp);
				 this->Controls->Add(this->Pict_B);
				 this->Controls->Add(this->label3);
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->Progress);
				 this->Controls->Add(this->stat);
				 this->Controls->Add(this->Next_Button);
				 this->Controls->Add(this->Prev_Button);
				 this->Controls->Add(this->Not_Hlp);
				 this->Controls->Add(this->bod5);
				 this->Controls->Add(this->bod4);
				 this->Controls->Add(this->bod3);
				 this->Controls->Add(this->bod1);
				 this->Controls->Add(this->Again_Button);
				 this->Controls->Add(this->label7);
				 this->Controls->Add(this->label9);
				 this->Controls->Add(this->groupBox2);
				 this->Controls->Add(this->groupBox3);
				 this->Controls->Add(this->Inp_Panel);
				 this->Cursor = System::Windows::Forms::Cursors::Default;
				 this->Font = (gcnew System::Drawing::Font(L"Segoe Print", 8.5F, System::Drawing::FontStyle::Italic));
				 this->ForeColor = System::Drawing::SystemColors::ControlText;
				 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
				 this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
				 this->KeyPreview = true;
				 this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
				 this->MaximizeBox = false;
				 this->MinimizeBox = false;
				 this->Name = L"Inp_Form";
				 this->Opacity = 0.99;
				 this->RightToLeft = System::Windows::Forms::RightToLeft::No;
				 this->RightToLeftLayout = true;
				 this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
				 this->Text = L"CubeX";
				 this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Inp_Form::Inp_Form_FormClosing);
				 this->Load += gcnew System::EventHandler(this, &Inp_Form::Inp_Form_Load);
				 this->Shown += gcnew System::EventHandler(this, &Inp_Form::Inp_Form_Shown);
				 this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Inp_Form::Inp_Form_KeyDown);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_B))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_Bp))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_D))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_Dp))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_F))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_Fp))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_L))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_Lp))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_R))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_Rp))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_U))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_Up))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_Bt))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_Dt))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_Ft))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_Lt))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_Rt))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pict_Ut))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Orange_Pick))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Blue_Pick))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Red_Pick))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Yellow_Pick))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->White_Pick))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Green_Pick))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Picker_P))->EndInit();
				 this->groupBox3->ResumeLayout(false);
				 this->groupBox3->PerformLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icon_Pict))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_50))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_25))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_20))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_19))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_23))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_26))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_18))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_17))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_16))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_13))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_12))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_15))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_10))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_46))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_22))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_47))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_41))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_32))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_14))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_8))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_7))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_52))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_4))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_28))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_53))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_29))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_30))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_21))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_37))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_38))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_27))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_39))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_34))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_49))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_35))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_2))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_36))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_43))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_5))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_44))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_48))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_45))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_24))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_31))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_54))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_33))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_3))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_40))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_51))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_42))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_6))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_1))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_9))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__5))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__1))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__2))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__3))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__7))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__8))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__9))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__4))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__6))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__32))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__28))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__29))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__30))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__34))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__35))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__36))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__31))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__33))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__41))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__43))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__40))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__37))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__45))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__42))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__39))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__44))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__38))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__50))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__48))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__51))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__54))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__46))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__49))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__52))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__47))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__53))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__14))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__10))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__11))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__12))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__16))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__17))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__18))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__13))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__15))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__23))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__19))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__20))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__21))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__25))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__26))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__27))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__22))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->__24))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_11))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
				 this->Inp_Panel->ResumeLayout(false);
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }


			 /////////////////////////////////////////////////////////////////////////// this->Inp_Panel->MouseWheel += gcnew System::Windows::Forms::MouseEventHandler(this, &Inp_Form::Inp_Panel_MouseWheel);

			 void ColUpdate(string alg)
			 {
				 sp_flag = true;

				 if (alg == "R")
					 profrot(14, 1);
				 else if (alg == "R'")
					 profrot(14, 2);
				 else if (alg == "R2")
					 profrot(14, 3);
				 else if (alg == "U")
					 profrot(15, 1);
				 else if (alg == "U'")
					 profrot(15, 2);
				 else if (alg == "U2")
					 profrot(15, 3);
				 else if (alg == "F")
					 profrot(16, 1);
				 else if (alg == "F'")
					 profrot(16, 2);
				 else if (alg == "F2")
					 profrot(16, 3);
				 else if (alg == "B")
					 profrot(17, 1);
				 else if (alg == "B'")
					 profrot(17, 2);
				 else if (alg == "B2")
					 profrot(17, 3);
				 else if (alg == "L")
					 profrot(18, 1);
				 else if (alg == "L'")
					 profrot(18, 2);
				 else if (alg == "L2")
					 profrot(18, 3);
				 else if (alg == "D")
					 profrot(19, 1);
				 else if (alg == "D'")
					 profrot(19, 2);
				 else if (alg == "D2")
					 profrot(19, 3);

				 switch (sp_b[0])
				 {
				 case 'g':this->_1->BackColor = System::Drawing::Color::Green; this->__1->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_1->BackColor = System::Drawing::Color::Blue; this->__1->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_1->BackColor = System::Drawing::Color::Red; this->__1->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_1->BackColor = System::Drawing::Color::Yellow; this->__1->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_1->BackColor = System::Drawing::Color::White; this->__1->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[1])
				 {
				 case 'g':this->_2->BackColor = System::Drawing::Color::Green; this->__2->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_2->BackColor = System::Drawing::Color::Blue; this->__2->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_2->BackColor = System::Drawing::Color::Red; this->__2->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_2->BackColor = System::Drawing::Color::Yellow; this->__2->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_2->BackColor = System::Drawing::Color::White; this->__2->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[2])
				 {
				 case 'g':this->_3->BackColor = System::Drawing::Color::Green; this->__3->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_3->BackColor = System::Drawing::Color::Blue; this->__3->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_3->BackColor = System::Drawing::Color::Red; this->__3->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_3->BackColor = System::Drawing::Color::Yellow; this->__3->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_3->BackColor = System::Drawing::Color::White; this->__3->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[3])
				 {
				 case 'g':this->_4->BackColor = System::Drawing::Color::Green; this->__4->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_4->BackColor = System::Drawing::Color::Blue; this->__4->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_4->BackColor = System::Drawing::Color::Red; this->__4->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_4->BackColor = System::Drawing::Color::Yellow; this->__4->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_4->BackColor = System::Drawing::Color::White; this->__4->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[5])
				 {
				 case 'g':this->_6->BackColor = System::Drawing::Color::Green; this->__6->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_6->BackColor = System::Drawing::Color::Blue; this->__6->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_6->BackColor = System::Drawing::Color::Red; this->__6->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_6->BackColor = System::Drawing::Color::Yellow; this->__6->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_6->BackColor = System::Drawing::Color::White; this->__6->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[6])
				 {
				 case 'g':this->_7->BackColor = System::Drawing::Color::Green; this->__7->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_7->BackColor = System::Drawing::Color::Blue; this->__7->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_7->BackColor = System::Drawing::Color::Red; this->__7->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_7->BackColor = System::Drawing::Color::Yellow; this->__7->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_7->BackColor = System::Drawing::Color::White; this->__7->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[7])
				 {
				 case 'g':this->_8->BackColor = System::Drawing::Color::Green; this->__8->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_8->BackColor = System::Drawing::Color::Blue; this->__8->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_8->BackColor = System::Drawing::Color::Red; this->__8->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_8->BackColor = System::Drawing::Color::Yellow; this->__8->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_8->BackColor = System::Drawing::Color::White; this->__8->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[8])
				 {
				 case 'g':this->_9->BackColor = System::Drawing::Color::Green; this->__9->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_9->BackColor = System::Drawing::Color::Blue; this->__9->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_9->BackColor = System::Drawing::Color::Red; this->__9->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_9->BackColor = System::Drawing::Color::Yellow; this->__9->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_9->BackColor = System::Drawing::Color::White; this->__9->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[9])
				 {
				 case 'g':this->_10->BackColor = System::Drawing::Color::Green; this->__10->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_10->BackColor = System::Drawing::Color::Blue; this->__10->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_10->BackColor = System::Drawing::Color::Red; this->__10->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_10->BackColor = System::Drawing::Color::Yellow; this->__10->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_10->BackColor = System::Drawing::Color::White; this->__10->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[10])
				 {
				 case 'g':this->_11->BackColor = System::Drawing::Color::Green; this->__11->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_11->BackColor = System::Drawing::Color::Blue; this->__11->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_11->BackColor = System::Drawing::Color::Red; this->__11->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_11->BackColor = System::Drawing::Color::Yellow; this->__11->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_11->BackColor = System::Drawing::Color::White; this->__11->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[11])
				 {
				 case 'g':this->_12->BackColor = System::Drawing::Color::Green; this->__12->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_12->BackColor = System::Drawing::Color::Blue; this->__12->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_12->BackColor = System::Drawing::Color::Red; this->__12->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_12->BackColor = System::Drawing::Color::Yellow; this->__12->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_12->BackColor = System::Drawing::Color::White; this->__12->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[12])
				 {
				 case 'g':this->_13->BackColor = System::Drawing::Color::Green; this->__13->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_13->BackColor = System::Drawing::Color::Blue; this->__13->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_13->BackColor = System::Drawing::Color::Red; this->__13->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_13->BackColor = System::Drawing::Color::Yellow; this->__13->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_13->BackColor = System::Drawing::Color::White; this->__13->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[14])
				 {
				 case 'g':this->_15->BackColor = System::Drawing::Color::Green; this->__15->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_15->BackColor = System::Drawing::Color::Blue; this->__15->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_15->BackColor = System::Drawing::Color::Red; this->__15->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_15->BackColor = System::Drawing::Color::Yellow; this->__15->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_15->BackColor = System::Drawing::Color::White; this->__15->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[15])
				 {
				 case 'g':this->_16->BackColor = System::Drawing::Color::Green; this->__16->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_16->BackColor = System::Drawing::Color::Blue; this->__16->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_16->BackColor = System::Drawing::Color::Red; this->__16->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_16->BackColor = System::Drawing::Color::Yellow; this->__16->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_16->BackColor = System::Drawing::Color::White; this->__16->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[16])
				 {
				 case 'g':this->_17->BackColor = System::Drawing::Color::Green; this->__17->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_17->BackColor = System::Drawing::Color::Blue; this->__17->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_17->BackColor = System::Drawing::Color::Red; this->__17->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_17->BackColor = System::Drawing::Color::Yellow; this->__17->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_17->BackColor = System::Drawing::Color::White; this->__17->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[17])
				 {
				 case 'g':this->_18->BackColor = System::Drawing::Color::Green; this->__18->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_18->BackColor = System::Drawing::Color::Blue; this->__18->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_18->BackColor = System::Drawing::Color::Red; this->__18->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_18->BackColor = System::Drawing::Color::Yellow; this->__18->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_18->BackColor = System::Drawing::Color::White; this->__18->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[18])
				 {
				 case 'g':this->_19->BackColor = System::Drawing::Color::Green; this->__19->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_19->BackColor = System::Drawing::Color::Blue; this->__19->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_19->BackColor = System::Drawing::Color::Red; this->__19->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_19->BackColor = System::Drawing::Color::Yellow; this->__19->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_19->BackColor = System::Drawing::Color::White; this->__19->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[19])
				 {
				 case 'g':this->_20->BackColor = System::Drawing::Color::Green; this->__20->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_20->BackColor = System::Drawing::Color::Blue; this->__20->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_20->BackColor = System::Drawing::Color::Red; this->__20->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_20->BackColor = System::Drawing::Color::Yellow; this->__20->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_20->BackColor = System::Drawing::Color::White; this->__20->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[20])
				 {
				 case 'g':this->_21->BackColor = System::Drawing::Color::Green; this->__21->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_21->BackColor = System::Drawing::Color::Blue; this->__21->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_21->BackColor = System::Drawing::Color::Red; this->__21->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_21->BackColor = System::Drawing::Color::Yellow; this->__21->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_21->BackColor = System::Drawing::Color::White; this->__21->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[21])
				 {
				 case 'g':this->_22->BackColor = System::Drawing::Color::Green; this->__22->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_22->BackColor = System::Drawing::Color::Blue; this->__22->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_22->BackColor = System::Drawing::Color::Red; this->__22->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_22->BackColor = System::Drawing::Color::Yellow; this->__22->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_22->BackColor = System::Drawing::Color::White; this->__22->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[23])
				 {
				 case 'g':this->_24->BackColor = System::Drawing::Color::Green; this->__24->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_24->BackColor = System::Drawing::Color::Blue; this->__24->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_24->BackColor = System::Drawing::Color::Red; this->__24->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_24->BackColor = System::Drawing::Color::Yellow; this->__24->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_24->BackColor = System::Drawing::Color::White; this->__24->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[24])
				 {
				 case 'g':this->_25->BackColor = System::Drawing::Color::Green; this->__25->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_25->BackColor = System::Drawing::Color::Blue; this->__25->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_25->BackColor = System::Drawing::Color::Red; this->__25->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_25->BackColor = System::Drawing::Color::Yellow; this->__25->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_25->BackColor = System::Drawing::Color::White; this->__25->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[25])
				 {
				 case 'g':this->_26->BackColor = System::Drawing::Color::Green; this->__26->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_26->BackColor = System::Drawing::Color::Blue; this->__26->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_26->BackColor = System::Drawing::Color::Red; this->__26->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_26->BackColor = System::Drawing::Color::Yellow; this->__26->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_26->BackColor = System::Drawing::Color::White; this->__26->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[26])
				 {
				 case 'g':this->_27->BackColor = System::Drawing::Color::Green; this->__27->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_27->BackColor = System::Drawing::Color::Blue; this->__27->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_27->BackColor = System::Drawing::Color::Red; this->__27->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_27->BackColor = System::Drawing::Color::Yellow; this->__27->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_27->BackColor = System::Drawing::Color::White; this->__27->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[27])
				 {
				 case 'g':this->_28->BackColor = System::Drawing::Color::Green; this->__28->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_28->BackColor = System::Drawing::Color::Blue; this->__28->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_28->BackColor = System::Drawing::Color::Red; this->__28->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_28->BackColor = System::Drawing::Color::Yellow; this->__28->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_28->BackColor = System::Drawing::Color::White; this->__28->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[28])
				 {
				 case 'g':this->_29->BackColor = System::Drawing::Color::Green; this->__29->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_29->BackColor = System::Drawing::Color::Blue; this->__29->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_29->BackColor = System::Drawing::Color::Red; this->__29->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_29->BackColor = System::Drawing::Color::Yellow; this->__29->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_29->BackColor = System::Drawing::Color::White; this->__29->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[29])
				 {
				 case 'g':this->_30->BackColor = System::Drawing::Color::Green; this->__30->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_30->BackColor = System::Drawing::Color::Blue; this->__30->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_30->BackColor = System::Drawing::Color::Red; this->__30->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_30->BackColor = System::Drawing::Color::Yellow; this->__30->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_30->BackColor = System::Drawing::Color::White; this->__30->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[30])
				 {
				 case 'g':this->_31->BackColor = System::Drawing::Color::Green; this->__31->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_31->BackColor = System::Drawing::Color::Blue; this->__31->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_31->BackColor = System::Drawing::Color::Red; this->__31->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_31->BackColor = System::Drawing::Color::Yellow; this->__31->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_31->BackColor = System::Drawing::Color::White; this->__31->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[32])
				 {
				 case 'g':this->_33->BackColor = System::Drawing::Color::Green; this->__33->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_33->BackColor = System::Drawing::Color::Blue; this->__33->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_33->BackColor = System::Drawing::Color::Red; this->__33->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_33->BackColor = System::Drawing::Color::Yellow; this->__33->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_33->BackColor = System::Drawing::Color::White; this->__33->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[33])
				 {
				 case 'g':this->_34->BackColor = System::Drawing::Color::Green; this->__34->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_34->BackColor = System::Drawing::Color::Blue; this->__34->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_34->BackColor = System::Drawing::Color::Red; this->__34->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_34->BackColor = System::Drawing::Color::Yellow; this->__34->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_34->BackColor = System::Drawing::Color::White; this->__34->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[34])
				 {
				 case 'g':this->_35->BackColor = System::Drawing::Color::Green; this->__35->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_35->BackColor = System::Drawing::Color::Blue; this->__35->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_35->BackColor = System::Drawing::Color::Red; this->__35->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_35->BackColor = System::Drawing::Color::Yellow; this->__35->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_35->BackColor = System::Drawing::Color::White; this->__35->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[35])
				 {
				 case 'g':this->_36->BackColor = System::Drawing::Color::Green; this->__36->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_36->BackColor = System::Drawing::Color::Blue; this->__36->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_36->BackColor = System::Drawing::Color::Red; this->__36->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_36->BackColor = System::Drawing::Color::Yellow; this->__36->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_36->BackColor = System::Drawing::Color::White; this->__36->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[36])
				 {
				 case 'g':this->_37->BackColor = System::Drawing::Color::Green; this->__37->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_37->BackColor = System::Drawing::Color::Blue; this->__37->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_37->BackColor = System::Drawing::Color::Red; this->__37->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_37->BackColor = System::Drawing::Color::Yellow; this->__37->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_37->BackColor = System::Drawing::Color::White; this->__37->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[37])
				 {
				 case 'g':this->_38->BackColor = System::Drawing::Color::Green; this->__38->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_38->BackColor = System::Drawing::Color::Blue; this->__38->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_38->BackColor = System::Drawing::Color::Red; this->__38->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_38->BackColor = System::Drawing::Color::Yellow; this->__38->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_38->BackColor = System::Drawing::Color::White; this->__38->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[38])
				 {
				 case 'g':this->_39->BackColor = System::Drawing::Color::Green; this->__39->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_39->BackColor = System::Drawing::Color::Blue; this->__39->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_39->BackColor = System::Drawing::Color::Red; this->__39->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_39->BackColor = System::Drawing::Color::Yellow; this->__39->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_39->BackColor = System::Drawing::Color::White; this->__39->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[39])
				 {
				 case 'g':this->_40->BackColor = System::Drawing::Color::Green; this->__40->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_40->BackColor = System::Drawing::Color::Blue; this->__40->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_40->BackColor = System::Drawing::Color::Red; this->__40->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_40->BackColor = System::Drawing::Color::Yellow; this->__40->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_40->BackColor = System::Drawing::Color::White; this->__40->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[41])
				 {
				 case 'g':this->_42->BackColor = System::Drawing::Color::Green; this->__42->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_42->BackColor = System::Drawing::Color::Blue; this->__42->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_42->BackColor = System::Drawing::Color::Red; this->__42->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_42->BackColor = System::Drawing::Color::Yellow; this->__42->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_42->BackColor = System::Drawing::Color::White; this->__42->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[42])
				 {
				 case 'g':this->_43->BackColor = System::Drawing::Color::Green; this->__43->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_43->BackColor = System::Drawing::Color::Blue; this->__43->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_43->BackColor = System::Drawing::Color::Red; this->__43->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_43->BackColor = System::Drawing::Color::Yellow; this->__43->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_43->BackColor = System::Drawing::Color::White; this->__43->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[43])
				 {
				 case 'g':this->_44->BackColor = System::Drawing::Color::Green; this->__44->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_44->BackColor = System::Drawing::Color::Blue; this->__44->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_44->BackColor = System::Drawing::Color::Red; this->__44->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_44->BackColor = System::Drawing::Color::Yellow; this->__44->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_44->BackColor = System::Drawing::Color::White; this->__44->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[44])
				 {
				 case 'g':this->_45->BackColor = System::Drawing::Color::Green; this->__45->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_45->BackColor = System::Drawing::Color::Blue; this->__45->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_45->BackColor = System::Drawing::Color::Red; this->__45->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_45->BackColor = System::Drawing::Color::Yellow; this->__45->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_45->BackColor = System::Drawing::Color::White; this->__45->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[45])
				 {
				 case 'g':this->_46->BackColor = System::Drawing::Color::Green; this->__46->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_46->BackColor = System::Drawing::Color::Blue; this->__46->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_46->BackColor = System::Drawing::Color::Red; this->__46->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_46->BackColor = System::Drawing::Color::Yellow; this->__46->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_46->BackColor = System::Drawing::Color::White; this->__46->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[46])
				 {
				 case 'g':this->_47->BackColor = System::Drawing::Color::Green; this->__47->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_47->BackColor = System::Drawing::Color::Blue; this->__47->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_47->BackColor = System::Drawing::Color::Red; this->__47->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_47->BackColor = System::Drawing::Color::Yellow; this->__47->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_47->BackColor = System::Drawing::Color::White; this->__47->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[47])
				 {
				 case 'g':this->_48->BackColor = System::Drawing::Color::Green; this->__48->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_48->BackColor = System::Drawing::Color::Blue; this->__48->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_48->BackColor = System::Drawing::Color::Red; this->__48->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_48->BackColor = System::Drawing::Color::Yellow; this->__48->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_48->BackColor = System::Drawing::Color::White; this->__48->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[48])
				 {
				 case 'g':this->_49->BackColor = System::Drawing::Color::Green; this->__49->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_49->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__49->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_49->BackColor = System::Drawing::Color::Blue; this->__49->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_49->BackColor = System::Drawing::Color::Red; this->__49->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_49->BackColor = System::Drawing::Color::Yellow; this->__49->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_49->BackColor = System::Drawing::Color::White; this->__49->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[50])
				 {
				 case 'g':this->_51->BackColor = System::Drawing::Color::Green; this->__51->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_51->BackColor = System::Drawing::Color::Blue; this->__51->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_51->BackColor = System::Drawing::Color::Red; this->__51->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_51->BackColor = System::Drawing::Color::Yellow; this->__51->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_51->BackColor = System::Drawing::Color::White; this->__51->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[51])
				 {
				 case 'g':this->_52->BackColor = System::Drawing::Color::Green; this->__52->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_52->BackColor = System::Drawing::Color::Blue; this->__52->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_52->BackColor = System::Drawing::Color::Red; this->__52->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_52->BackColor = System::Drawing::Color::Yellow; this->__52->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_52->BackColor = System::Drawing::Color::White; this->__52->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[52])
				 {
				 case 'g':this->_53->BackColor = System::Drawing::Color::Green; this->__53->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_53->BackColor = System::Drawing::Color::Blue; this->__53->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_53->BackColor = System::Drawing::Color::Red; this->__53->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_53->BackColor = System::Drawing::Color::Yellow; this->__53->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_53->BackColor = System::Drawing::Color::White; this->__53->BackColor = System::Drawing::Color::White; break;
				 }
				 switch (sp_b[53])
				 {
				 case 'g':this->_54->BackColor = System::Drawing::Color::Green; this->__54->BackColor = System::Drawing::Color::Green; break;
				 case 'o':this->_54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); this->__54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))); break;
				 case 'b':this->_54->BackColor = System::Drawing::Color::Blue; this->__54->BackColor = System::Drawing::Color::Blue; break;
				 case 'r':this->_54->BackColor = System::Drawing::Color::Red; this->__54->BackColor = System::Drawing::Color::Red; break;
				 case 'y':this->_54->BackColor = System::Drawing::Color::Yellow; this->__54->BackColor = System::Drawing::Color::Yellow; break;
				 case 'w':this->_54->BackColor = System::Drawing::Color::White; this->__54->BackColor = System::Drawing::Color::White; break;
				 }


			 }
	private: System::Void _1_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*	if (Inp_Form::_1->BackColor == System::Drawing::Color::Silver)
		this->_1->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_1->BackColor == System::Drawing::Color::Green)
		this->_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_1->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_1->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_1->BackColor == System::Drawing::Color::Blue)
		this->_1->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_1->BackColor == System::Drawing::Color::Red)
		this->_1->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_1->BackColor == System::Drawing::Color::Yellow)
		this->_1->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_1->BackColor == System::Drawing::Color::White)
		this->_1->BackColor = System::Drawing::Color::Green;*/
		this->_1->BackColor = this->Picker_P->BackColor;
		this->__1->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _2_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_2->BackColor == System::Drawing::Color::Silver)
		this->_2->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_2->BackColor == System::Drawing::Color::Green)
		this->_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_2->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_2->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_2->BackColor == System::Drawing::Color::Blue)
		this->_2->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_2->BackColor == System::Drawing::Color::Red)
		this->_2->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_2->BackColor == System::Drawing::Color::Yellow)
		this->_2->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_2->BackColor == System::Drawing::Color::White)
		this->_2->BackColor = System::Drawing::Color::Green;*/
		this->_2->BackColor = this->Picker_P->BackColor;
		this->__2->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _3_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_3->BackColor == System::Drawing::Color::Silver)
		this->_3->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_3->BackColor == System::Drawing::Color::Green)
		this->_3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_3->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_3->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_3->BackColor == System::Drawing::Color::Blue)
		this->_3->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_3->BackColor == System::Drawing::Color::Red)
		this->_3->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_3->BackColor == System::Drawing::Color::Yellow)
		this->_3->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_3->BackColor == System::Drawing::Color::White)
		this->_3->BackColor = System::Drawing::Color::Green;*/
		this->_3->BackColor = this->Picker_P->BackColor;
		this->__3->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _4_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_4->BackColor == System::Drawing::Color::Silver)
		this->_4->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_4->BackColor == System::Drawing::Color::Green)
		this->_4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_4->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_4->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_4->BackColor == System::Drawing::Color::Blue)
		this->_4->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_4->BackColor == System::Drawing::Color::Red)
		this->_4->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_4->BackColor == System::Drawing::Color::Yellow)
		this->_4->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_4->BackColor == System::Drawing::Color::White)
		this->_4->BackColor = System::Drawing::Color::Green;*/
		this->_4->BackColor = this->Picker_P->BackColor;
		this->__4->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _6_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_6->BackColor == System::Drawing::Color::Silver)
		this->_6->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_6->BackColor == System::Drawing::Color::Green)
		this->_6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_6->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_6->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_6->BackColor == System::Drawing::Color::Blue)
		this->_6->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_6->BackColor == System::Drawing::Color::Red)
		this->_6->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_6->BackColor == System::Drawing::Color::Yellow)
		this->_6->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_6->BackColor == System::Drawing::Color::White)
		this->_6->BackColor = System::Drawing::Color::Green;*/
		this->_6->BackColor = this->Picker_P->BackColor;
		this->__6->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _7_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_7->BackColor == System::Drawing::Color::Silver)
		this->_7->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_7->BackColor == System::Drawing::Color::Green)
		this->_7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_7->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_7->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_7->BackColor == System::Drawing::Color::Blue)
		this->_7->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_7->BackColor == System::Drawing::Color::Red)
		this->_7->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_7->BackColor == System::Drawing::Color::Yellow)
		this->_7->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_7->BackColor == System::Drawing::Color::White)
		this->_7->BackColor = System::Drawing::Color::Green;*/
		this->_7->BackColor = this->Picker_P->BackColor;
		this->__7->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _8_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_8->BackColor == System::Drawing::Color::Silver)
		this->_8->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_8->BackColor == System::Drawing::Color::Green)
		this->_8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_8->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_8->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_8->BackColor == System::Drawing::Color::Blue)
		this->_8->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_8->BackColor == System::Drawing::Color::Red)
		this->_8->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_8->BackColor == System::Drawing::Color::Yellow)
		this->_8->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_8->BackColor == System::Drawing::Color::White)
		this->_8->BackColor = System::Drawing::Color::Green;*/
		this->_8->BackColor = this->Picker_P->BackColor;
		this->__8->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _9_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_9->BackColor == System::Drawing::Color::Silver)
		this->_9->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_9->BackColor == System::Drawing::Color::Green)
		this->_9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_9->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_9->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_9->BackColor == System::Drawing::Color::Blue)
		this->_9->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_9->BackColor == System::Drawing::Color::Red)
		this->_9->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_9->BackColor == System::Drawing::Color::Yellow)
		this->_9->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_9->BackColor == System::Drawing::Color::White)
		this->_9->BackColor = System::Drawing::Color::Green;*/
		this->_9->BackColor = this->Picker_P->BackColor;
		this->__9->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _10_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_10->BackColor == System::Drawing::Color::Silver)
		this->_10->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_10->BackColor == System::Drawing::Color::Green)
		this->_10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_10->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_10->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_10->BackColor == System::Drawing::Color::Blue)
		this->_10->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_10->BackColor == System::Drawing::Color::Red)
		this->_10->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_10->BackColor == System::Drawing::Color::Yellow)
		this->_10->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_10->BackColor == System::Drawing::Color::White)
		this->_10->BackColor = System::Drawing::Color::Green;*/
		this->_10->BackColor = this->Picker_P->BackColor;
		this->__10->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _11_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_11->BackColor == System::Drawing::Color::Silver)
		this->_11->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_11->BackColor == System::Drawing::Color::Green)
		this->_11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_11->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_11->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_11->BackColor == System::Drawing::Color::Blue)
		this->_11->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_11->BackColor == System::Drawing::Color::Red)
		this->_11->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_11->BackColor == System::Drawing::Color::Yellow)
		this->_11->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_11->BackColor == System::Drawing::Color::White)
		this->_11->BackColor = System::Drawing::Color::Green;*/
		this->_11->BackColor = this->Picker_P->BackColor;
		this->__11->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _12_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_12->BackColor == System::Drawing::Color::Silver)
		this->_12->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_12->BackColor == System::Drawing::Color::Green)
		this->_12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_12->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_12->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_12->BackColor == System::Drawing::Color::Blue)
		this->_12->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_12->BackColor == System::Drawing::Color::Red)
		this->_12->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_12->BackColor == System::Drawing::Color::Yellow)
		this->_12->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_12->BackColor == System::Drawing::Color::White)
		this->_12->BackColor = System::Drawing::Color::Green;*/
		this->_12->BackColor = this->Picker_P->BackColor;
		this->__12->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _13_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_13->BackColor == System::Drawing::Color::Silver)
		this->_13->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_13->BackColor == System::Drawing::Color::Green)
		this->_13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_13->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_13->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_13->BackColor == System::Drawing::Color::Blue)
		this->_13->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_13->BackColor == System::Drawing::Color::Red)
		this->_13->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_13->BackColor == System::Drawing::Color::Yellow)
		this->_13->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_13->BackColor == System::Drawing::Color::White)
		this->_13->BackColor = System::Drawing::Color::Green;*/
		this->_13->BackColor = this->Picker_P->BackColor;
		this->__13->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _15_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_15->BackColor == System::Drawing::Color::Silver)
		this->_15->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_15->BackColor == System::Drawing::Color::Green)
		this->_15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_15->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_15->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_15->BackColor == System::Drawing::Color::Blue)
		this->_15->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_15->BackColor == System::Drawing::Color::Red)
		this->_15->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_15->BackColor == System::Drawing::Color::Yellow)
		this->_15->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_15->BackColor == System::Drawing::Color::White)
		this->_15->BackColor = System::Drawing::Color::Green;*/
		this->_15->BackColor = this->Picker_P->BackColor;
		this->__15->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _16_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_16->BackColor == System::Drawing::Color::Silver)
		this->_16->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_16->BackColor == System::Drawing::Color::Green)
		this->_16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_16->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_16->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_16->BackColor == System::Drawing::Color::Blue)
		this->_16->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_16->BackColor == System::Drawing::Color::Red)
		this->_16->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_16->BackColor == System::Drawing::Color::Yellow)
		this->_16->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_16->BackColor == System::Drawing::Color::White)
		this->_16->BackColor = System::Drawing::Color::Green;*/
		this->_16->BackColor = this->Picker_P->BackColor;
		this->__16->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _17_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_17->BackColor == System::Drawing::Color::Silver)
		this->_17->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_17->BackColor == System::Drawing::Color::Green)
		this->_17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_17->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_17->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_17->BackColor == System::Drawing::Color::Blue)
		this->_17->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_17->BackColor == System::Drawing::Color::Red)
		this->_17->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_17->BackColor == System::Drawing::Color::Yellow)
		this->_17->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_17->BackColor == System::Drawing::Color::White)
		this->_17->BackColor = System::Drawing::Color::Green;*/
		this->_17->BackColor = this->Picker_P->BackColor;
		this->__17->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _18_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_18->BackColor == System::Drawing::Color::Silver)
		this->_18->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_18->BackColor == System::Drawing::Color::Green)
		this->_18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_18->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_18->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_18->BackColor == System::Drawing::Color::Blue)
		this->_18->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_18->BackColor == System::Drawing::Color::Red)
		this->_18->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_18->BackColor == System::Drawing::Color::Yellow)
		this->_18->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_18->BackColor == System::Drawing::Color::White)
		this->_18->BackColor = System::Drawing::Color::Green;*/
		this->_18->BackColor = this->Picker_P->BackColor;
		this->__18->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _19_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_19->BackColor == System::Drawing::Color::Silver)
		this->_19->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_19->BackColor == System::Drawing::Color::Green)
		this->_19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_19->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_19->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_19->BackColor == System::Drawing::Color::Blue)
		this->_19->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_19->BackColor == System::Drawing::Color::Red)
		this->_19->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_19->BackColor == System::Drawing::Color::Yellow)
		this->_19->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_19->BackColor == System::Drawing::Color::White)
		this->_19->BackColor = System::Drawing::Color::Green;*/
		this->_19->BackColor = this->Picker_P->BackColor;
		this->__19->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _20_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_20->BackColor == System::Drawing::Color::Silver)
		this->_20->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_20->BackColor == System::Drawing::Color::Green)
		this->_20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_20->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_20->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_20->BackColor == System::Drawing::Color::Blue)
		this->_20->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_20->BackColor == System::Drawing::Color::Red)
		this->_20->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_20->BackColor == System::Drawing::Color::Yellow)
		this->_20->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_20->BackColor == System::Drawing::Color::White)
		this->_20->BackColor = System::Drawing::Color::Green;*/
		this->_20->BackColor = this->Picker_P->BackColor;
		this->__20->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _21_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_21->BackColor == System::Drawing::Color::Silver)
		this->_21->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_21->BackColor == System::Drawing::Color::Green)
		this->_21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_21->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_21->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_21->BackColor == System::Drawing::Color::Blue)
		this->_21->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_21->BackColor == System::Drawing::Color::Red)
		this->_21->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_21->BackColor == System::Drawing::Color::Yellow)
		this->_21->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_21->BackColor == System::Drawing::Color::White)
		this->_21->BackColor = System::Drawing::Color::Green;*/
		this->_21->BackColor = this->Picker_P->BackColor;
		this->__21->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _22_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_22->BackColor == System::Drawing::Color::Silver)
		this->_22->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_22->BackColor == System::Drawing::Color::Green)
		this->_22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_22->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_22->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_22->BackColor == System::Drawing::Color::Blue)
		this->_22->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_22->BackColor == System::Drawing::Color::Red)
		this->_22->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_22->BackColor == System::Drawing::Color::Yellow)
		this->_22->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_22->BackColor == System::Drawing::Color::White)
		this->_22->BackColor = System::Drawing::Color::Green;*/
		this->_22->BackColor = this->Picker_P->BackColor;
		this->__22->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _24_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_24->BackColor == System::Drawing::Color::Silver)
		this->_24->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_24->BackColor == System::Drawing::Color::Green)
		this->_24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_24->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_24->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_24->BackColor == System::Drawing::Color::Blue)
		this->_24->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_24->BackColor == System::Drawing::Color::Red)
		this->_24->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_24->BackColor == System::Drawing::Color::Yellow)
		this->_24->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_24->BackColor == System::Drawing::Color::White)
		this->_24->BackColor = System::Drawing::Color::Green;*/
		this->_24->BackColor = this->Picker_P->BackColor;
		this->__24->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _25_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_25->BackColor == System::Drawing::Color::Silver)
		this->_25->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_25->BackColor == System::Drawing::Color::Green)
		this->_25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_25->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_25->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_25->BackColor == System::Drawing::Color::Blue)
		this->_25->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_25->BackColor == System::Drawing::Color::Red)
		this->_25->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_25->BackColor == System::Drawing::Color::Yellow)
		this->_25->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_25->BackColor == System::Drawing::Color::White)
		this->_25->BackColor = System::Drawing::Color::Green;*/
		this->_25->BackColor = this->Picker_P->BackColor;
		this->__25->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _26_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_26->BackColor == System::Drawing::Color::Silver)
		this->_26->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_26->BackColor == System::Drawing::Color::Green)
		this->_26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_26->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_26->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_26->BackColor == System::Drawing::Color::Blue)
		this->_26->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_26->BackColor == System::Drawing::Color::Red)
		this->_26->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_26->BackColor == System::Drawing::Color::Yellow)
		this->_26->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_26->BackColor == System::Drawing::Color::White)
		this->_26->BackColor = System::Drawing::Color::Green;*/
		this->_26->BackColor = this->Picker_P->BackColor;
		this->__26->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _27_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)  
			return; 
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_27->BackColor == System::Drawing::Color::Silver)
		this->_27->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_27->BackColor == System::Drawing::Color::Green)
		this->_27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_27->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_27->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_27->BackColor == System::Drawing::Color::Blue)
		this->_27->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_27->BackColor == System::Drawing::Color::Red)
		this->_27->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_27->BackColor == System::Drawing::Color::Yellow)
		this->_27->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_27->BackColor == System::Drawing::Color::White)
		this->_27->BackColor = System::Drawing::Color::Green;*/
		this->_27->BackColor = this->Picker_P->BackColor;
		this->__27->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _28_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_28->BackColor == System::Drawing::Color::Silver)
		this->_28->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_28->BackColor == System::Drawing::Color::Green)
		this->_28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_28->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_28->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_28->BackColor == System::Drawing::Color::Blue)
		this->_28->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_28->BackColor == System::Drawing::Color::Red)
		this->_28->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_28->BackColor == System::Drawing::Color::Yellow)
		this->_28->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_28->BackColor == System::Drawing::Color::White)
		this->_28->BackColor = System::Drawing::Color::Green;*/
		this->_28->BackColor = this->Picker_P->BackColor;
		this->__28->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _29_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_29->BackColor == System::Drawing::Color::Silver)
		this->_29->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_29->BackColor == System::Drawing::Color::Green)
		this->_29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_29->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_29->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_29->BackColor == System::Drawing::Color::Blue)
		this->_29->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_29->BackColor == System::Drawing::Color::Red)
		this->_29->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_29->BackColor == System::Drawing::Color::Yellow)
		this->_29->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_29->BackColor == System::Drawing::Color::White)
		this->_29->BackColor = System::Drawing::Color::Green;*/
		this->_29->BackColor = this->Picker_P->BackColor;
		this->__29->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _30_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_30->BackColor == System::Drawing::Color::Silver)
		this->_30->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_30->BackColor == System::Drawing::Color::Green)
		this->_30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_30->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_30->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_30->BackColor == System::Drawing::Color::Blue)
		this->_30->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_30->BackColor == System::Drawing::Color::Red)
		this->_30->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_30->BackColor == System::Drawing::Color::Yellow)
		this->_30->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_30->BackColor == System::Drawing::Color::White)
		this->_30->BackColor = System::Drawing::Color::Green;*/
		this->_30->BackColor = this->Picker_P->BackColor;
		this->__30->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _31_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_31->BackColor == System::Drawing::Color::Silver)
		this->_31->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_31->BackColor == System::Drawing::Color::Green)
		this->_31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_31->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_31->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_31->BackColor == System::Drawing::Color::Blue)
		this->_31->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_31->BackColor == System::Drawing::Color::Red)
		this->_31->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_31->BackColor == System::Drawing::Color::Yellow)
		this->_31->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_31->BackColor == System::Drawing::Color::White)
		this->_31->BackColor = System::Drawing::Color::Green;*/
		this->_31->BackColor = this->Picker_P->BackColor;
		this->__31->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _33_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_33->BackColor == System::Drawing::Color::Silver)
		this->_33->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_33->BackColor == System::Drawing::Color::Green)
		this->_33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_33->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_33->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_33->BackColor == System::Drawing::Color::Blue)
		this->_33->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_33->BackColor == System::Drawing::Color::Red)
		this->_33->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_33->BackColor == System::Drawing::Color::Yellow)
		this->_33->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_33->BackColor == System::Drawing::Color::White)
		this->_33->BackColor = System::Drawing::Color::Green;*/
		this->_33->BackColor = this->Picker_P->BackColor;
		this->__33->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _34_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_34->BackColor == System::Drawing::Color::Silver)
		this->_34->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_34->BackColor == System::Drawing::Color::Green)
		this->_34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_34->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_34->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_34->BackColor == System::Drawing::Color::Blue)
		this->_34->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_34->BackColor == System::Drawing::Color::Red)
		this->_34->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_34->BackColor == System::Drawing::Color::Yellow)
		this->_34->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_34->BackColor == System::Drawing::Color::White)
		this->_34->BackColor = System::Drawing::Color::Green;*/
		this->_34->BackColor = this->Picker_P->BackColor;
		this->__34->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _35_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_35->BackColor == System::Drawing::Color::Silver)
		this->_35->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_35->BackColor == System::Drawing::Color::Green)
		this->_35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_35->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_35->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_35->BackColor == System::Drawing::Color::Blue)
		this->_35->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_35->BackColor == System::Drawing::Color::Red)
		this->_35->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_35->BackColor == System::Drawing::Color::Yellow)
		this->_35->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_35->BackColor == System::Drawing::Color::White)
		this->_35->BackColor = System::Drawing::Color::Green;*/
		this->_35->BackColor = this->Picker_P->BackColor;
		this->__35->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _36_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_36->BackColor == System::Drawing::Color::Silver)
		this->_36->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_36->BackColor == System::Drawing::Color::Green)
		this->_36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_36->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_36->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_36->BackColor == System::Drawing::Color::Blue)
		this->_36->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_36->BackColor == System::Drawing::Color::Red)
		this->_36->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_36->BackColor == System::Drawing::Color::Yellow)
		this->_36->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_36->BackColor == System::Drawing::Color::White)
		this->_36->BackColor = System::Drawing::Color::Green;*/
		this->_36->BackColor = this->Picker_P->BackColor;
		this->__36->BackColor = this->Picker_P->BackColor;


	}
	private: System::Void _37_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_37->BackColor == System::Drawing::Color::Silver)
		this->_37->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_37->BackColor == System::Drawing::Color::Green)
		this->_37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_37->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_37->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_37->BackColor == System::Drawing::Color::Blue)
		this->_37->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_37->BackColor == System::Drawing::Color::Red)
		this->_37->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_37->BackColor == System::Drawing::Color::Yellow)
		this->_37->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_37->BackColor == System::Drawing::Color::White)
		this->_37->BackColor = System::Drawing::Color::Green;*/
		this->_37->BackColor = this->Picker_P->BackColor;
		this->__37->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _38_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_38->BackColor == System::Drawing::Color::Silver)
		this->_38->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_38->BackColor == System::Drawing::Color::Green)
		this->_38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_38->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_38->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_38->BackColor == System::Drawing::Color::Blue)
		this->_38->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_38->BackColor == System::Drawing::Color::Red)
		this->_38->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_38->BackColor == System::Drawing::Color::Yellow)
		this->_38->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_38->BackColor == System::Drawing::Color::White)
		this->_38->BackColor = System::Drawing::Color::Green;*/
		this->_38->BackColor = this->Picker_P->BackColor;
		this->__38->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _39_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_39->BackColor == System::Drawing::Color::Silver)
		this->_39->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_39->BackColor == System::Drawing::Color::Green)
		this->_39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_39->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_39->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_39->BackColor == System::Drawing::Color::Blue)
		this->_39->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_39->BackColor == System::Drawing::Color::Red)
		this->_39->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_39->BackColor == System::Drawing::Color::Yellow)
		this->_39->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_39->BackColor == System::Drawing::Color::White)
		this->_39->BackColor = System::Drawing::Color::Green;*/
		this->_39->BackColor = this->Picker_P->BackColor;
		this->__39->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _40_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_40->BackColor == System::Drawing::Color::Silver)
		this->_40->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_40->BackColor == System::Drawing::Color::Green)
		this->_40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_40->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_40->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_40->BackColor == System::Drawing::Color::Blue)
		this->_40->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_40->BackColor == System::Drawing::Color::Red)
		this->_40->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_40->BackColor == System::Drawing::Color::Yellow)
		this->_40->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_40->BackColor == System::Drawing::Color::White)
		this->_40->BackColor = System::Drawing::Color::Green;*/
		this->_40->BackColor = this->Picker_P->BackColor;
		this->__40->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _42_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_42->BackColor == System::Drawing::Color::Silver)
		this->_42->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_42->BackColor == System::Drawing::Color::Green)
		this->_42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_42->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_42->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_42->BackColor == System::Drawing::Color::Blue)
		this->_42->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_42->BackColor == System::Drawing::Color::Red)
		this->_42->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_42->BackColor == System::Drawing::Color::Yellow)
		this->_42->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_42->BackColor == System::Drawing::Color::White)
		this->_42->BackColor = System::Drawing::Color::Green;*/
		this->_42->BackColor = this->Picker_P->BackColor;
		this->__42->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _43_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_43->BackColor == System::Drawing::Color::Silver)
		this->_43->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_43->BackColor == System::Drawing::Color::Green)
		this->_43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_43->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_43->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_43->BackColor == System::Drawing::Color::Blue)
		this->_43->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_43->BackColor == System::Drawing::Color::Red)
		this->_43->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_43->BackColor == System::Drawing::Color::Yellow)
		this->_43->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_43->BackColor == System::Drawing::Color::White)
		this->_43->BackColor = System::Drawing::Color::Green;*/
		this->_43->BackColor = this->Picker_P->BackColor;
		this->__43->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _44_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_44->BackColor == System::Drawing::Color::Silver)
		this->_44->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_44->BackColor == System::Drawing::Color::Green)
		this->_44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_44->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_44->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_44->BackColor == System::Drawing::Color::Blue)
		this->_44->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_44->BackColor == System::Drawing::Color::Red)
		this->_44->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_44->BackColor == System::Drawing::Color::Yellow)
		this->_44->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_44->BackColor == System::Drawing::Color::White)
		this->_44->BackColor = System::Drawing::Color::Green;*/
		this->_44->BackColor = this->Picker_P->BackColor;
		this->__44->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _45_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_45->BackColor == System::Drawing::Color::Silver)
		this->_45->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_45->BackColor == System::Drawing::Color::Green)
		this->_45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_45->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_45->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_45->BackColor == System::Drawing::Color::Blue)
		this->_45->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_45->BackColor == System::Drawing::Color::Red)
		this->_45->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_45->BackColor == System::Drawing::Color::Yellow)
		this->_45->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_45->BackColor == System::Drawing::Color::White)
		this->_45->BackColor = System::Drawing::Color::Green;*/
		this->_45->BackColor = this->Picker_P->BackColor;
		this->__45->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _46_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_46->BackColor == System::Drawing::Color::Silver)
		this->_46->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_46->BackColor == System::Drawing::Color::Green)
		this->_46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_46->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_46->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_46->BackColor == System::Drawing::Color::Blue)
		this->_46->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_46->BackColor == System::Drawing::Color::Red)
		this->_46->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_46->BackColor == System::Drawing::Color::Yellow)
		this->_46->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_46->BackColor == System::Drawing::Color::White)
		this->_46->BackColor = System::Drawing::Color::Green;*/
		this->_46->BackColor = this->Picker_P->BackColor;
		this->__46->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _47_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_47->BackColor == System::Drawing::Color::Silver)
		this->_47->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_47->BackColor == System::Drawing::Color::Green)
		this->_47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_47->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_47->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_47->BackColor == System::Drawing::Color::Blue)
		this->_47->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_47->BackColor == System::Drawing::Color::Red)
		this->_47->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_47->BackColor == System::Drawing::Color::Yellow)
		this->_47->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_47->BackColor == System::Drawing::Color::White)
		this->_47->BackColor = System::Drawing::Color::Green;*/
		this->_47->BackColor = this->Picker_P->BackColor;
		this->__47->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _48_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_48->BackColor == System::Drawing::Color::Silver)
		this->_48->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_48->BackColor == System::Drawing::Color::Green)
		this->_48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_48->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_48->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_48->BackColor == System::Drawing::Color::Blue)
		this->_48->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_48->BackColor == System::Drawing::Color::Red)
		this->_48->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_48->BackColor == System::Drawing::Color::Yellow)
		this->_48->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_48->BackColor == System::Drawing::Color::White)
		this->_48->BackColor = System::Drawing::Color::Green;*/
		this->_48->BackColor = this->Picker_P->BackColor;
		this->__48->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _49_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_49->BackColor == System::Drawing::Color::Silver)
		this->_49->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_49->BackColor == System::Drawing::Color::Green)
		this->_49->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_49->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_49->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_49->BackColor == System::Drawing::Color::Blue)
		this->_49->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_49->BackColor == System::Drawing::Color::Red)
		this->_49->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_49->BackColor == System::Drawing::Color::Yellow)
		this->_49->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_49->BackColor == System::Drawing::Color::White)
		this->_49->BackColor = System::Drawing::Color::Green;*/
		this->_49->BackColor = this->Picker_P->BackColor;
		this->__49->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _51_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_51->BackColor == System::Drawing::Color::Silver)
		this->_51->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_51->BackColor == System::Drawing::Color::Green)
		this->_51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_51->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_51->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_51->BackColor == System::Drawing::Color::Blue)
		this->_51->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_51->BackColor == System::Drawing::Color::Red)
		this->_51->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_51->BackColor == System::Drawing::Color::Yellow)
		this->_51->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_51->BackColor == System::Drawing::Color::White)
		this->_51->BackColor = System::Drawing::Color::Green;*/
		this->_51->BackColor = this->Picker_P->BackColor;
		this->__51->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _52_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_52->BackColor == System::Drawing::Color::Silver)
		this->_52->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_52->BackColor == System::Drawing::Color::Green)
		this->_52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_52->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_52->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_52->BackColor == System::Drawing::Color::Blue)
		this->_52->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_52->BackColor == System::Drawing::Color::Red)
		this->_52->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_52->BackColor == System::Drawing::Color::Yellow)
		this->_52->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_52->BackColor == System::Drawing::Color::White)
		this->_52->BackColor = System::Drawing::Color::Green;*/
		this->_52->BackColor = this->Picker_P->BackColor;
		this->__52->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _53_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_53->BackColor == System::Drawing::Color::Silver)
		this->_53->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_53->BackColor == System::Drawing::Color::Green)
		this->_53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_53->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_53->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_53->BackColor == System::Drawing::Color::Blue)
		this->_53->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_53->BackColor == System::Drawing::Color::Red)
		this->_53->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_53->BackColor == System::Drawing::Color::Yellow)
		this->_53->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_53->BackColor == System::Drawing::Color::White)
		this->_53->BackColor = System::Drawing::Color::Green;*/
		this->_53->BackColor = this->Picker_P->BackColor;
		this->__53->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void _54_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (!color_flag)
			return;
		if (this->Picked->BackColor == System::Drawing::SystemColors::ActiveBorder)
		{
			MessageBox::Show("Select a color from the Color Picker first.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		/*if (Inp_Form::_54->BackColor == System::Drawing::Color::Silver)
		this->_54->BackColor = System::Drawing::Color::Green;
		else
		if (Inp_Form::_54->BackColor == System::Drawing::Color::Green)
		this->_54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		else
		if (Inp_Form::_54->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
		this->_54->BackColor = System::Drawing::Color::Blue;
		else
		if (Inp_Form::_54->BackColor == System::Drawing::Color::Blue)
		this->_54->BackColor = System::Drawing::Color::Red;
		else
		if (Inp_Form::_54->BackColor == System::Drawing::Color::Red)
		this->_54->BackColor = System::Drawing::Color::Yellow;
		else
		if (Inp_Form::_54->BackColor == System::Drawing::Color::Yellow)
		this->_54->BackColor = System::Drawing::Color::White;
		else
		if (Inp_Form::_54->BackColor == System::Drawing::Color::White)
		this->_54->BackColor = System::Drawing::Color::Green;*/
		this->_54->BackColor = this->Picker_P->BackColor;
		this->__54->BackColor = this->Picker_P->BackColor;

	}
	private: System::Void Solve_Button_Click(System::Object^  sender, System::EventArgs^  e)
	{
		int i;

		memset(sp, 0, 54);
		memset(sp_b, 0, 54);
		memset(sp_bb, 0, 54);
		memset(salg, 0, 500);
		for (int ic = 0; ic < 500; ic++)
			memset(sala[ic], 0, 5);

		if (Inp_Form::_1->BackColor == System::Drawing::Color::Green)
			sp[0] = 'g';
		else
			if (Inp_Form::_1->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[0] = 'o';
			else
				if (Inp_Form::_1->BackColor == System::Drawing::Color::Blue)
					sp[0] = 'b';
				else
					if (Inp_Form::_1->BackColor == System::Drawing::Color::Red)
						sp[0] = 'r';
					else
						if (Inp_Form::_1->BackColor == System::Drawing::Color::Yellow)
							sp[0] = 'y';
						else
							if (Inp_Form::_1->BackColor == System::Drawing::Color::White)
								sp[0] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_2->BackColor == System::Drawing::Color::Green)
			sp[1] = 'g';
		else
			if (Inp_Form::_2->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[1] = 'o';
			else
				if (Inp_Form::_2->BackColor == System::Drawing::Color::Blue)
					sp[1] = 'b';
				else
					if (Inp_Form::_2->BackColor == System::Drawing::Color::Red)
						sp[1] = 'r';
					else
						if (Inp_Form::_2->BackColor == System::Drawing::Color::Yellow)
							sp[1] = 'y';
						else
							if (Inp_Form::_2->BackColor == System::Drawing::Color::White)
								sp[1] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_3->BackColor == System::Drawing::Color::Green)
			sp[2] = 'g';
		else
			if (Inp_Form::_3->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[2] = 'o';
			else
				if (Inp_Form::_3->BackColor == System::Drawing::Color::Blue)
					sp[2] = 'b';
				else
					if (Inp_Form::_3->BackColor == System::Drawing::Color::Red)
						sp[2] = 'r';
					else
						if (Inp_Form::_3->BackColor == System::Drawing::Color::Yellow)
							sp[2] = 'y';
						else
							if (Inp_Form::_3->BackColor == System::Drawing::Color::White)
								sp[2] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_4->BackColor == System::Drawing::Color::Green)
			sp[3] = 'g';
		else
			if (Inp_Form::_4->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[3] = 'o';
			else
				if (Inp_Form::_4->BackColor == System::Drawing::Color::Blue)
					sp[3] = 'b';
				else
					if (Inp_Form::_4->BackColor == System::Drawing::Color::Red)
						sp[3] = 'r';
					else
						if (Inp_Form::_4->BackColor == System::Drawing::Color::Yellow)
							sp[3] = 'y';
						else
							if (Inp_Form::_4->BackColor == System::Drawing::Color::White)
								sp[3] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_6->BackColor == System::Drawing::Color::Green)
			sp[5] = 'g';
		else
			if (Inp_Form::_6->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[5] = 'o';
			else
				if (Inp_Form::_6->BackColor == System::Drawing::Color::Blue)
					sp[5] = 'b';
				else
					if (Inp_Form::_6->BackColor == System::Drawing::Color::Red)
						sp[5] = 'r';
					else
						if (Inp_Form::_6->BackColor == System::Drawing::Color::Yellow)
							sp[5] = 'y';
						else
							if (Inp_Form::_6->BackColor == System::Drawing::Color::White)
								sp[5] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_7->BackColor == System::Drawing::Color::Green)
			sp[6] = 'g';
		else
			if (Inp_Form::_7->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[6] = 'o';
			else
				if (Inp_Form::_7->BackColor == System::Drawing::Color::Blue)
					sp[6] = 'b';
				else
					if (Inp_Form::_7->BackColor == System::Drawing::Color::Red)
						sp[6] = 'r';
					else
						if (Inp_Form::_7->BackColor == System::Drawing::Color::Yellow)
							sp[6] = 'y';
						else
							if (Inp_Form::_7->BackColor == System::Drawing::Color::White)
								sp[6] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_8->BackColor == System::Drawing::Color::Green)
			sp[7] = 'g';
		else
			if (Inp_Form::_8->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[7] = 'o';
			else
				if (Inp_Form::_8->BackColor == System::Drawing::Color::Blue)
					sp[7] = 'b';
				else
					if (Inp_Form::_8->BackColor == System::Drawing::Color::Red)
						sp[7] = 'r';
					else
						if (Inp_Form::_8->BackColor == System::Drawing::Color::Yellow)
							sp[7] = 'y';
						else
							if (Inp_Form::_8->BackColor == System::Drawing::Color::White)
								sp[7] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_9->BackColor == System::Drawing::Color::Green)
			sp[8] = 'g';
		else
			if (Inp_Form::_9->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[8] = 'o';
			else
				if (Inp_Form::_9->BackColor == System::Drawing::Color::Blue)
					sp[8] = 'b';
				else
					if (Inp_Form::_9->BackColor == System::Drawing::Color::Red)
						sp[8] = 'r';
					else
						if (Inp_Form::_9->BackColor == System::Drawing::Color::Yellow)
							sp[8] = 'y';
						else
							if (Inp_Form::_9->BackColor == System::Drawing::Color::White)
								sp[8] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_10->BackColor == System::Drawing::Color::Green)
			sp[9] = 'g';
		else
			if (Inp_Form::_10->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[9] = 'o';
			else
				if (Inp_Form::_10->BackColor == System::Drawing::Color::Blue)
					sp[9] = 'b';
				else
					if (Inp_Form::_10->BackColor == System::Drawing::Color::Red)
						sp[9] = 'r';
					else
						if (Inp_Form::_10->BackColor == System::Drawing::Color::Yellow)
							sp[9] = 'y';
						else
							if (Inp_Form::_10->BackColor == System::Drawing::Color::White)
								sp[9] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_11->BackColor == System::Drawing::Color::Green)
			sp[10] = 'g';
		else
			if (Inp_Form::_11->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[10] = 'o';
			else
				if (Inp_Form::_11->BackColor == System::Drawing::Color::Blue)
					sp[10] = 'b';
				else
					if (Inp_Form::_11->BackColor == System::Drawing::Color::Red)
						sp[10] = 'r';
					else
						if (Inp_Form::_11->BackColor == System::Drawing::Color::Yellow)
							sp[10] = 'y';
						else
							if (Inp_Form::_11->BackColor == System::Drawing::Color::White)
								sp[10] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_12->BackColor == System::Drawing::Color::Green)
			sp[11] = 'g';
		else
			if (Inp_Form::_12->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[11] = 'o';
			else
				if (Inp_Form::_12->BackColor == System::Drawing::Color::Blue)
					sp[11] = 'b';
				else
					if (Inp_Form::_12->BackColor == System::Drawing::Color::Red)
						sp[11] = 'r';
					else
						if (Inp_Form::_12->BackColor == System::Drawing::Color::Yellow)
							sp[11] = 'y';
						else
							if (Inp_Form::_12->BackColor == System::Drawing::Color::White)
								sp[11] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_13->BackColor == System::Drawing::Color::Green)
			sp[12] = 'g';
		else
			if (Inp_Form::_13->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[12] = 'o';
			else
				if (Inp_Form::_13->BackColor == System::Drawing::Color::Blue)
					sp[12] = 'b';
				else
					if (Inp_Form::_13->BackColor == System::Drawing::Color::Red)
						sp[12] = 'r';
					else
						if (Inp_Form::_13->BackColor == System::Drawing::Color::Yellow)
							sp[12] = 'y';
						else
							if (Inp_Form::_13->BackColor == System::Drawing::Color::White)
								sp[12] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_15->BackColor == System::Drawing::Color::Green)
			sp[14] = 'g';
		else
			if (Inp_Form::_15->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[14] = 'o';
			else
				if (Inp_Form::_15->BackColor == System::Drawing::Color::Blue)
					sp[14] = 'b';
				else
					if (Inp_Form::_15->BackColor == System::Drawing::Color::Red)
						sp[14] = 'r';
					else
						if (Inp_Form::_15->BackColor == System::Drawing::Color::Yellow)
							sp[14] = 'y';
						else
							if (Inp_Form::_15->BackColor == System::Drawing::Color::White)
								sp[14] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_16->BackColor == System::Drawing::Color::Green)
			sp[15] = 'g';
		else
			if (Inp_Form::_16->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[15] = 'o';
			else
				if (Inp_Form::_16->BackColor == System::Drawing::Color::Blue)
					sp[15] = 'b';
				else
					if (Inp_Form::_16->BackColor == System::Drawing::Color::Red)
						sp[15] = 'r';
					else
						if (Inp_Form::_16->BackColor == System::Drawing::Color::Yellow)
							sp[15] = 'y';
						else
							if (Inp_Form::_16->BackColor == System::Drawing::Color::White)
								sp[15] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_17->BackColor == System::Drawing::Color::Green)
			sp[16] = 'g';
		else
			if (Inp_Form::_17->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[16] = 'o';
			else
				if (Inp_Form::_17->BackColor == System::Drawing::Color::Blue)
					sp[16] = 'b';
				else
					if (Inp_Form::_17->BackColor == System::Drawing::Color::Red)
						sp[16] = 'r';
					else
						if (Inp_Form::_17->BackColor == System::Drawing::Color::Yellow)
							sp[16] = 'y';
						else
							if (Inp_Form::_17->BackColor == System::Drawing::Color::White)
								sp[16] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_18->BackColor == System::Drawing::Color::Green)
			sp[17] = 'g';
		else
			if (Inp_Form::_18->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[17] = 'o';
			else
				if (Inp_Form::_18->BackColor == System::Drawing::Color::Blue)
					sp[17] = 'b';
				else
					if (Inp_Form::_18->BackColor == System::Drawing::Color::Red)
						sp[17] = 'r';
					else
						if (Inp_Form::_18->BackColor == System::Drawing::Color::Yellow)
							sp[17] = 'y';
						else
							if (Inp_Form::_18->BackColor == System::Drawing::Color::White)
								sp[17] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_19->BackColor == System::Drawing::Color::Green)
			sp[18] = 'g';
		else
			if (Inp_Form::_19->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[18] = 'o';
			else
				if (Inp_Form::_19->BackColor == System::Drawing::Color::Blue)
					sp[18] = 'b';
				else
					if (Inp_Form::_19->BackColor == System::Drawing::Color::Red)
						sp[18] = 'r';
					else
						if (Inp_Form::_19->BackColor == System::Drawing::Color::Yellow)
							sp[18] = 'y';
						else
							if (Inp_Form::_19->BackColor == System::Drawing::Color::White)
								sp[18] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_20->BackColor == System::Drawing::Color::Green)
			sp[19] = 'g';
		else
			if (Inp_Form::_20->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[19] = 'o';
			else
				if (Inp_Form::_20->BackColor == System::Drawing::Color::Blue)
					sp[19] = 'b';
				else
					if (Inp_Form::_20->BackColor == System::Drawing::Color::Red)
						sp[19] = 'r';
					else
						if (Inp_Form::_20->BackColor == System::Drawing::Color::Yellow)
							sp[19] = 'y';
						else
							if (Inp_Form::_20->BackColor == System::Drawing::Color::White)
								sp[19] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_21->BackColor == System::Drawing::Color::Green)
			sp[20] = 'g';
		else
			if (Inp_Form::_21->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[20] = 'o';
			else
				if (Inp_Form::_21->BackColor == System::Drawing::Color::Blue)
					sp[20] = 'b';
				else
					if (Inp_Form::_21->BackColor == System::Drawing::Color::Red)
						sp[20] = 'r';
					else
						if (Inp_Form::_21->BackColor == System::Drawing::Color::Yellow)
							sp[20] = 'y';
						else
							if (Inp_Form::_21->BackColor == System::Drawing::Color::White)
								sp[20] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_22->BackColor == System::Drawing::Color::Green)
			sp[21] = 'g';
		else
			if (Inp_Form::_22->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[21] = 'o';
			else
				if (Inp_Form::_22->BackColor == System::Drawing::Color::Blue)
					sp[21] = 'b';
				else
					if (Inp_Form::_22->BackColor == System::Drawing::Color::Red)
						sp[21] = 'r';
					else
						if (Inp_Form::_22->BackColor == System::Drawing::Color::Yellow)
							sp[21] = 'y';
						else
							if (Inp_Form::_22->BackColor == System::Drawing::Color::White)
								sp[21] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_24->BackColor == System::Drawing::Color::Green)
			sp[23] = 'g';
		else
			if (Inp_Form::_24->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[23] = 'o';
			else
				if (Inp_Form::_24->BackColor == System::Drawing::Color::Blue)
					sp[23] = 'b';
				else
					if (Inp_Form::_24->BackColor == System::Drawing::Color::Red)
						sp[23] = 'r';
					else
						if (Inp_Form::_24->BackColor == System::Drawing::Color::Yellow)
							sp[23] = 'y';
						else
							if (Inp_Form::_24->BackColor == System::Drawing::Color::White)
								sp[23] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_25->BackColor == System::Drawing::Color::Green)
			sp[24] = 'g';
		else
			if (Inp_Form::_25->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[24] = 'o';
			else
				if (Inp_Form::_25->BackColor == System::Drawing::Color::Blue)
					sp[24] = 'b';
				else
					if (Inp_Form::_25->BackColor == System::Drawing::Color::Red)
						sp[24] = 'r';
					else
						if (Inp_Form::_25->BackColor == System::Drawing::Color::Yellow)
							sp[24] = 'y';
						else
							if (Inp_Form::_25->BackColor == System::Drawing::Color::White)
								sp[24] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_26->BackColor == System::Drawing::Color::Green)
			sp[25] = 'g';
		else
			if (Inp_Form::_26->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[25] = 'o';
			else
				if (Inp_Form::_26->BackColor == System::Drawing::Color::Blue)
					sp[25] = 'b';
				else
					if (Inp_Form::_26->BackColor == System::Drawing::Color::Red)
						sp[25] = 'r';
					else
						if (Inp_Form::_26->BackColor == System::Drawing::Color::Yellow)
							sp[25] = 'y';
						else
							if (Inp_Form::_26->BackColor == System::Drawing::Color::White)
								sp[25] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_27->BackColor == System::Drawing::Color::Green)
			sp[26] = 'g';
		else
			if (Inp_Form::_27->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[26] = 'o';
			else
				if (Inp_Form::_27->BackColor == System::Drawing::Color::Blue)
					sp[26] = 'b';
				else
					if (Inp_Form::_27->BackColor == System::Drawing::Color::Red)
						sp[26] = 'r';
					else
						if (Inp_Form::_27->BackColor == System::Drawing::Color::Yellow)
							sp[26] = 'y';
						else
							if (Inp_Form::_27->BackColor == System::Drawing::Color::White)
								sp[26] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_28->BackColor == System::Drawing::Color::Green)
			sp[27] = 'g';
		else
			if (Inp_Form::_28->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[27] = 'o';
			else
				if (Inp_Form::_28->BackColor == System::Drawing::Color::Blue)
					sp[27] = 'b';
				else
					if (Inp_Form::_28->BackColor == System::Drawing::Color::Red)
						sp[27] = 'r';
					else
						if (Inp_Form::_28->BackColor == System::Drawing::Color::Yellow)
							sp[27] = 'y';
						else
							if (Inp_Form::_28->BackColor == System::Drawing::Color::White)
								sp[27] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_29->BackColor == System::Drawing::Color::Green)
			sp[28] = 'g';
		else
			if (Inp_Form::_29->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[28] = 'o';
			else
				if (Inp_Form::_29->BackColor == System::Drawing::Color::Blue)
					sp[28] = 'b';
				else
					if (Inp_Form::_29->BackColor == System::Drawing::Color::Red)
						sp[28] = 'r';
					else
						if (Inp_Form::_29->BackColor == System::Drawing::Color::Yellow)
							sp[28] = 'y';
						else
							if (Inp_Form::_29->BackColor == System::Drawing::Color::White)
								sp[28] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_30->BackColor == System::Drawing::Color::Green)
			sp[29] = 'g';
		else
			if (Inp_Form::_30->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[29] = 'o';
			else
				if (Inp_Form::_30->BackColor == System::Drawing::Color::Blue)
					sp[29] = 'b';
				else
					if (Inp_Form::_30->BackColor == System::Drawing::Color::Red)
						sp[29] = 'r';
					else
						if (Inp_Form::_30->BackColor == System::Drawing::Color::Yellow)
							sp[29] = 'y';
						else
							if (Inp_Form::_30->BackColor == System::Drawing::Color::White)
								sp[29] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_31->BackColor == System::Drawing::Color::Green)
			sp[30] = 'g';
		else
			if (Inp_Form::_31->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[30] = 'o';
			else
				if (Inp_Form::_31->BackColor == System::Drawing::Color::Blue)
					sp[30] = 'b';
				else
					if (Inp_Form::_31->BackColor == System::Drawing::Color::Red)
						sp[30] = 'r';
					else
						if (Inp_Form::_31->BackColor == System::Drawing::Color::Yellow)
							sp[30] = 'y';
						else
							if (Inp_Form::_31->BackColor == System::Drawing::Color::White)
								sp[30] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_33->BackColor == System::Drawing::Color::Green)
			sp[32] = 'g';
		else
			if (Inp_Form::_33->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[32] = 'o';
			else
				if (Inp_Form::_33->BackColor == System::Drawing::Color::Blue)
					sp[32] = 'b';
				else
					if (Inp_Form::_33->BackColor == System::Drawing::Color::Red)
						sp[32] = 'r';
					else
						if (Inp_Form::_33->BackColor == System::Drawing::Color::Yellow)
							sp[32] = 'y';
						else
							if (Inp_Form::_33->BackColor == System::Drawing::Color::White)
								sp[32] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_34->BackColor == System::Drawing::Color::Green)
			sp[33] = 'g';
		else
			if (Inp_Form::_34->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[33] = 'o';
			else
				if (Inp_Form::_34->BackColor == System::Drawing::Color::Blue)
					sp[33] = 'b';
				else
					if (Inp_Form::_34->BackColor == System::Drawing::Color::Red)
						sp[33] = 'r';
					else
						if (Inp_Form::_34->BackColor == System::Drawing::Color::Yellow)
							sp[33] = 'y';
						else
							if (Inp_Form::_34->BackColor == System::Drawing::Color::White)
								sp[33] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_35->BackColor == System::Drawing::Color::Green)
			sp[34] = 'g';
		else
			if (Inp_Form::_35->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[34] = 'o';
			else
				if (Inp_Form::_35->BackColor == System::Drawing::Color::Blue)
					sp[34] = 'b';
				else
					if (Inp_Form::_35->BackColor == System::Drawing::Color::Red)
						sp[34] = 'r';
					else
						if (Inp_Form::_35->BackColor == System::Drawing::Color::Yellow)
							sp[34] = 'y';
						else
							if (Inp_Form::_35->BackColor == System::Drawing::Color::White)
								sp[34] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_36->BackColor == System::Drawing::Color::Green)
			sp[35] = 'g';
		else
			if (Inp_Form::_36->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[35] = 'o';
			else
				if (Inp_Form::_36->BackColor == System::Drawing::Color::Blue)
					sp[35] = 'b';
				else
					if (Inp_Form::_36->BackColor == System::Drawing::Color::Red)
						sp[35] = 'r';
					else
						if (Inp_Form::_36->BackColor == System::Drawing::Color::Yellow)
							sp[35] = 'y';
						else
							if (Inp_Form::_36->BackColor == System::Drawing::Color::White)
								sp[35] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_37->BackColor == System::Drawing::Color::Green)
			sp[36] = 'g';
		else
			if (Inp_Form::_37->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[36] = 'o';
			else
				if (Inp_Form::_37->BackColor == System::Drawing::Color::Blue)
					sp[36] = 'b';
				else
					if (Inp_Form::_37->BackColor == System::Drawing::Color::Red)
						sp[36] = 'r';
					else
						if (Inp_Form::_37->BackColor == System::Drawing::Color::Yellow)
							sp[36] = 'y';
						else
							if (Inp_Form::_37->BackColor == System::Drawing::Color::White)
								sp[36] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_38->BackColor == System::Drawing::Color::Green)
			sp[37] = 'g';
		else
			if (Inp_Form::_38->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[37] = 'o';
			else
				if (Inp_Form::_38->BackColor == System::Drawing::Color::Blue)
					sp[37] = 'b';
				else
					if (Inp_Form::_38->BackColor == System::Drawing::Color::Red)
						sp[37] = 'r';
					else
						if (Inp_Form::_38->BackColor == System::Drawing::Color::Yellow)
							sp[37] = 'y';
						else
							if (Inp_Form::_38->BackColor == System::Drawing::Color::White)
								sp[37] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_39->BackColor == System::Drawing::Color::Green)
			sp[38] = 'g';
		else
			if (Inp_Form::_39->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[38] = 'o';
			else
				if (Inp_Form::_39->BackColor == System::Drawing::Color::Blue)
					sp[38] = 'b';
				else
					if (Inp_Form::_39->BackColor == System::Drawing::Color::Red)
						sp[38] = 'r';
					else
						if (Inp_Form::_39->BackColor == System::Drawing::Color::Yellow)
							sp[38] = 'y';
						else
							if (Inp_Form::_39->BackColor == System::Drawing::Color::White)
								sp[38] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_40->BackColor == System::Drawing::Color::Green)
			sp[39] = 'g';
		else
			if (Inp_Form::_40->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[39] = 'o';
			else
				if (Inp_Form::_40->BackColor == System::Drawing::Color::Blue)
					sp[39] = 'b';
				else
					if (Inp_Form::_40->BackColor == System::Drawing::Color::Red)
						sp[39] = 'r';
					else
						if (Inp_Form::_40->BackColor == System::Drawing::Color::Yellow)
							sp[39] = 'y';
						else
							if (Inp_Form::_40->BackColor == System::Drawing::Color::White)
								sp[39] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_42->BackColor == System::Drawing::Color::Green)
			sp[41] = 'g';
		else
			if (Inp_Form::_42->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[41] = 'o';
			else
				if (Inp_Form::_42->BackColor == System::Drawing::Color::Blue)
					sp[41] = 'b';
				else
					if (Inp_Form::_42->BackColor == System::Drawing::Color::Red)
						sp[41] = 'r';
					else
						if (Inp_Form::_42->BackColor == System::Drawing::Color::Yellow)
							sp[41] = 'y';
						else
							if (Inp_Form::_42->BackColor == System::Drawing::Color::White)
								sp[41] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_43->BackColor == System::Drawing::Color::Green)
			sp[42] = 'g';
		else
			if (Inp_Form::_43->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[42] = 'o';
			else
				if (Inp_Form::_43->BackColor == System::Drawing::Color::Blue)
					sp[42] = 'b';
				else
					if (Inp_Form::_43->BackColor == System::Drawing::Color::Red)
						sp[42] = 'r';
					else
						if (Inp_Form::_43->BackColor == System::Drawing::Color::Yellow)
							sp[42] = 'y';
						else
							if (Inp_Form::_43->BackColor == System::Drawing::Color::White)
								sp[42] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_44->BackColor == System::Drawing::Color::Green)
			sp[43] = 'g';
		else
			if (Inp_Form::_44->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[43] = 'o';
			else
				if (Inp_Form::_44->BackColor == System::Drawing::Color::Blue)
					sp[43] = 'b';
				else
					if (Inp_Form::_44->BackColor == System::Drawing::Color::Red)
						sp[43] = 'r';
					else
						if (Inp_Form::_44->BackColor == System::Drawing::Color::Yellow)
							sp[43] = 'y';
						else
							if (Inp_Form::_44->BackColor == System::Drawing::Color::White)
								sp[43] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_45->BackColor == System::Drawing::Color::Green)
			sp[44] = 'g';
		else
			if (Inp_Form::_45->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[44] = 'o';
			else
				if (Inp_Form::_45->BackColor == System::Drawing::Color::Blue)
					sp[44] = 'b';
				else
					if (Inp_Form::_45->BackColor == System::Drawing::Color::Red)
						sp[44] = 'r';
					else
						if (Inp_Form::_45->BackColor == System::Drawing::Color::Yellow)
							sp[44] = 'y';
						else
							if (Inp_Form::_45->BackColor == System::Drawing::Color::White)
								sp[44] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_46->BackColor == System::Drawing::Color::Green)
			sp[45] = 'g';
		else
			if (Inp_Form::_46->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[45] = 'o';
			else
				if (Inp_Form::_46->BackColor == System::Drawing::Color::Blue)
					sp[45] = 'b';
				else
					if (Inp_Form::_46->BackColor == System::Drawing::Color::Red)
						sp[45] = 'r';
					else
						if (Inp_Form::_46->BackColor == System::Drawing::Color::Yellow)
							sp[45] = 'y';
						else
							if (Inp_Form::_46->BackColor == System::Drawing::Color::White)
								sp[45] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_47->BackColor == System::Drawing::Color::Green)
			sp[46] = 'g';
		else
			if (Inp_Form::_47->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[46] = 'o';
			else
				if (Inp_Form::_47->BackColor == System::Drawing::Color::Blue)
					sp[46] = 'b';
				else
					if (Inp_Form::_47->BackColor == System::Drawing::Color::Red)
						sp[46] = 'r';
					else
						if (Inp_Form::_47->BackColor == System::Drawing::Color::Yellow)
							sp[46] = 'y';
						else
							if (Inp_Form::_47->BackColor == System::Drawing::Color::White)
								sp[46] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_48->BackColor == System::Drawing::Color::Green)
			sp[47] = 'g';
		else
			if (Inp_Form::_48->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[47] = 'o';
			else
				if (Inp_Form::_48->BackColor == System::Drawing::Color::Blue)
					sp[47] = 'b';
				else
					if (Inp_Form::_48->BackColor == System::Drawing::Color::Red)
						sp[47] = 'r';
					else
						if (Inp_Form::_48->BackColor == System::Drawing::Color::Yellow)
							sp[47] = 'y';
						else
							if (Inp_Form::_48->BackColor == System::Drawing::Color::White)
								sp[47] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_49->BackColor == System::Drawing::Color::Green)
			sp[48] = 'g';
		else
			if (Inp_Form::_49->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[48] = 'o';
			else
				if (Inp_Form::_49->BackColor == System::Drawing::Color::Blue)
					sp[48] = 'b';
				else
					if (Inp_Form::_49->BackColor == System::Drawing::Color::Red)
						sp[48] = 'r';
					else
						if (Inp_Form::_49->BackColor == System::Drawing::Color::Yellow)
							sp[48] = 'y';
						else
							if (Inp_Form::_49->BackColor == System::Drawing::Color::White)
								sp[48] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_51->BackColor == System::Drawing::Color::Green)
			sp[50] = 'g';
		else
			if (Inp_Form::_51->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[50] = 'o';
			else
				if (Inp_Form::_51->BackColor == System::Drawing::Color::Blue)
					sp[50] = 'b';
				else
					if (Inp_Form::_51->BackColor == System::Drawing::Color::Red)
						sp[50] = 'r';
					else
						if (Inp_Form::_51->BackColor == System::Drawing::Color::Yellow)
							sp[50] = 'y';
						else
							if (Inp_Form::_51->BackColor == System::Drawing::Color::White)
								sp[50] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_52->BackColor == System::Drawing::Color::Green)
			sp[51] = 'g';
		else
			if (Inp_Form::_52->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[51] = 'o';
			else
				if (Inp_Form::_52->BackColor == System::Drawing::Color::Blue)
					sp[51] = 'b';
				else
					if (Inp_Form::_52->BackColor == System::Drawing::Color::Red)
						sp[51] = 'r';
					else
						if (Inp_Form::_52->BackColor == System::Drawing::Color::Yellow)
							sp[51] = 'y';
						else
							if (Inp_Form::_52->BackColor == System::Drawing::Color::White)
								sp[51] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_53->BackColor == System::Drawing::Color::Green)
			sp[52] = 'g';
		else
			if (Inp_Form::_53->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[52] = 'o';
			else
				if (Inp_Form::_53->BackColor == System::Drawing::Color::Blue)
					sp[52] = 'b';
				else
					if (Inp_Form::_53->BackColor == System::Drawing::Color::Red)
						sp[52] = 'r';
					else
						if (Inp_Form::_53->BackColor == System::Drawing::Color::Yellow)
							sp[52] = 'y';
						else
							if (Inp_Form::_53->BackColor == System::Drawing::Color::White)
								sp[52] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////
		if (Inp_Form::_54->BackColor == System::Drawing::Color::Green)
			sp[53] = 'g';
		else
			if (Inp_Form::_54->BackColor == System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))))
				sp[53] = 'o';
			else
				if (Inp_Form::_54->BackColor == System::Drawing::Color::Blue)
					sp[53] = 'b';
				else
					if (Inp_Form::_54->BackColor == System::Drawing::Color::Red)
						sp[53] = 'r';
					else
						if (Inp_Form::_54->BackColor == System::Drawing::Color::Yellow)
							sp[53] = 'y';
						else
							if (Inp_Form::_54->BackColor == System::Drawing::Color::White)
								sp[53] = 'w';
							else
							{
								MessageBox::Show("Please fill every Cubelets.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
								return;
							}
		/////////////////////////////////////////////////////////////

		sp[4] = 'g';
		sp[13] = 'o';
		sp[22] = 'b';
		sp[31] = 'r';
		sp[40] = 'y';
		sp[49] = 'w';

		int gc = 0, oc = 0, bc = 0, rc = 0, yc = 0, wc = 0;

		for (i = 0; i < 54; i++)
			switch (sp[i])
		{
			case 'g': gc++; break;
			case 'o': oc++; break;
			case 'b': bc++; break;
			case 'r': rc++; break;
			case 'y': yc++; break;
			case 'w': wc++; break;
		}
		if (gc != 9 || oc != 9 || bc != 9 || rc != 9 || yc != 9 || wc != 9)
		{
			MessageBox::Show("Invalid Cube state. Please check and try again.", "Oops..", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		int k = 0;

		for (i = 0; i < 9; i++)
			if (sp[i] == 'g')
				k++;
		for (; i < 18; i++)
			if (sp[i] == 'o')
				k++;
		for (; i < 27; i++)
			if (sp[i] == 'b')
				k++;
		for (; i < 36; i++)
			if (sp[i] == 'r')
				k++;
		for (; i < 45; i++)
			if (sp[i] == 'y')
				k++;
		for (; i < 54; i++)
			if (sp[i] == 'w')
				k++;

		if (k == 54)
		{
			MessageBox::Show("Your Cube Is Already Solved.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		/*char tet[55];

		for (int i = 0; i < 54; i++)
		tet[i] = sp[i];

		tet[54] = '\0';
		string stru(tet);
		String^ fine = gcnew String(stru.c_str());

		MessageBox::Show(fine,"input sate");
		*/

		if (solve_strt() == 1)
		{
			this->Picked->BackColor = System::Drawing::SystemColors::ActiveBorder;

			Orient_Form^ fr = gcnew Orient_Form;
			fr->ShowDialog(this);


			if (this->Top > ((Screen::PrimaryScreen->Bounds.Height / 2) - 315))
				for (; this->Top > ((Screen::PrimaryScreen->Bounds.Height / 2) - 314); Sleep(1))
					this->Top -= 10;
			else if (this->Top < ((Screen::PrimaryScreen->Bounds.Height / 2) - 315))
				for (; this->Top < ((Screen::PrimaryScreen->Bounds.Height / 2) - 316); Sleep(1))
					this->Top += 10;

			//this->bod2->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->bod2->Visible = false;

			Next_Button->Enabled = true;
			Prev_Button->Enabled = true;
			Not_Hlp->Enabled = true;
			Solve_Button->Enabled = false;
			Solve_Button_2->Enabled = false;
			color_flag = false;
			Pick_flag = false;

			this->label3->BackColor = System::Drawing::Color::Black;
			this->_1->Cursor = System::Windows::Forms::Cursors::No;
			this->_2->Cursor = System::Windows::Forms::Cursors::No;
			this->_3->Cursor = System::Windows::Forms::Cursors::No;
			this->_4->Cursor = System::Windows::Forms::Cursors::No;
			this->_6->Cursor = System::Windows::Forms::Cursors::No;
			this->_7->Cursor = System::Windows::Forms::Cursors::No;
			this->_8->Cursor = System::Windows::Forms::Cursors::No;
			this->_9->Cursor = System::Windows::Forms::Cursors::No;
			this->_10->Cursor = System::Windows::Forms::Cursors::No;
			this->_11->Cursor = System::Windows::Forms::Cursors::No;
			this->_12->Cursor = System::Windows::Forms::Cursors::No;
			this->_13->Cursor = System::Windows::Forms::Cursors::No;
			this->_15->Cursor = System::Windows::Forms::Cursors::No;
			this->_16->Cursor = System::Windows::Forms::Cursors::No;
			this->_17->Cursor = System::Windows::Forms::Cursors::No;
			this->_18->Cursor = System::Windows::Forms::Cursors::No;
			this->_19->Cursor = System::Windows::Forms::Cursors::No;
			this->_20->Cursor = System::Windows::Forms::Cursors::No;
			this->_21->Cursor = System::Windows::Forms::Cursors::No;
			this->_22->Cursor = System::Windows::Forms::Cursors::No;
			this->_24->Cursor = System::Windows::Forms::Cursors::No;
			this->_25->Cursor = System::Windows::Forms::Cursors::No;
			this->_26->Cursor = System::Windows::Forms::Cursors::No;
			this->_27->Cursor = System::Windows::Forms::Cursors::No;
			this->_28->Cursor = System::Windows::Forms::Cursors::No;
			this->_29->Cursor = System::Windows::Forms::Cursors::No;
			this->_30->Cursor = System::Windows::Forms::Cursors::No;
			this->_31->Cursor = System::Windows::Forms::Cursors::No;
			this->_33->Cursor = System::Windows::Forms::Cursors::No;
			this->_34->Cursor = System::Windows::Forms::Cursors::No;
			this->_35->Cursor = System::Windows::Forms::Cursors::No;
			this->_36->Cursor = System::Windows::Forms::Cursors::No;
			this->_37->Cursor = System::Windows::Forms::Cursors::No;
			this->_38->Cursor = System::Windows::Forms::Cursors::No;
			this->_39->Cursor = System::Windows::Forms::Cursors::No;
			this->_40->Cursor = System::Windows::Forms::Cursors::No;
			this->_42->Cursor = System::Windows::Forms::Cursors::No;
			this->_43->Cursor = System::Windows::Forms::Cursors::No;
			this->_44->Cursor = System::Windows::Forms::Cursors::No;
			this->_45->Cursor = System::Windows::Forms::Cursors::No;
			this->_46->Cursor = System::Windows::Forms::Cursors::No;
			this->_47->Cursor = System::Windows::Forms::Cursors::No;
			this->_48->Cursor = System::Windows::Forms::Cursors::No;
			this->_49->Cursor = System::Windows::Forms::Cursors::No;
			this->_51->Cursor = System::Windows::Forms::Cursors::No;
			this->_52->Cursor = System::Windows::Forms::Cursors::No;
			this->_53->Cursor = System::Windows::Forms::Cursors::No;
			this->_54->Cursor = System::Windows::Forms::Cursors::No;

			this->__1->Cursor = System::Windows::Forms::Cursors::No;
			this->__2->Cursor = System::Windows::Forms::Cursors::No;
			this->__3->Cursor = System::Windows::Forms::Cursors::No;
			this->__4->Cursor = System::Windows::Forms::Cursors::No;
			this->__6->Cursor = System::Windows::Forms::Cursors::No;
			this->__7->Cursor = System::Windows::Forms::Cursors::No;
			this->__8->Cursor = System::Windows::Forms::Cursors::No;
			this->__9->Cursor = System::Windows::Forms::Cursors::No;
			this->__10->Cursor = System::Windows::Forms::Cursors::No;
			this->__11->Cursor = System::Windows::Forms::Cursors::No;
			this->__12->Cursor = System::Windows::Forms::Cursors::No;
			this->__13->Cursor = System::Windows::Forms::Cursors::No;
			this->__15->Cursor = System::Windows::Forms::Cursors::No;
			this->__16->Cursor = System::Windows::Forms::Cursors::No;
			this->__17->Cursor = System::Windows::Forms::Cursors::No;
			this->__18->Cursor = System::Windows::Forms::Cursors::No;
			this->__19->Cursor = System::Windows::Forms::Cursors::No;
			this->__20->Cursor = System::Windows::Forms::Cursors::No;
			this->__21->Cursor = System::Windows::Forms::Cursors::No;
			this->__22->Cursor = System::Windows::Forms::Cursors::No;
			this->__24->Cursor = System::Windows::Forms::Cursors::No;
			this->__25->Cursor = System::Windows::Forms::Cursors::No;
			this->__26->Cursor = System::Windows::Forms::Cursors::No;
			this->__27->Cursor = System::Windows::Forms::Cursors::No;
			this->__28->Cursor = System::Windows::Forms::Cursors::No;
			this->__29->Cursor = System::Windows::Forms::Cursors::No;
			this->__30->Cursor = System::Windows::Forms::Cursors::No;
			this->__31->Cursor = System::Windows::Forms::Cursors::No;
			this->__33->Cursor = System::Windows::Forms::Cursors::No;
			this->__34->Cursor = System::Windows::Forms::Cursors::No;
			this->__35->Cursor = System::Windows::Forms::Cursors::No;
			this->__36->Cursor = System::Windows::Forms::Cursors::No;
			this->__37->Cursor = System::Windows::Forms::Cursors::No;
			this->__38->Cursor = System::Windows::Forms::Cursors::No;
			this->__39->Cursor = System::Windows::Forms::Cursors::No;
			this->__40->Cursor = System::Windows::Forms::Cursors::No;
			this->__42->Cursor = System::Windows::Forms::Cursors::No;
			this->__43->Cursor = System::Windows::Forms::Cursors::No;
			this->__44->Cursor = System::Windows::Forms::Cursors::No;
			this->__45->Cursor = System::Windows::Forms::Cursors::No;
			this->__46->Cursor = System::Windows::Forms::Cursors::No;
			this->__47->Cursor = System::Windows::Forms::Cursors::No;
			this->__48->Cursor = System::Windows::Forms::Cursors::No;
			this->__49->Cursor = System::Windows::Forms::Cursors::No;
			this->__51->Cursor = System::Windows::Forms::Cursors::No;
			this->__52->Cursor = System::Windows::Forms::Cursors::No;
			this->__53->Cursor = System::Windows::Forms::Cursors::No;
			this->__54->Cursor = System::Windows::Forms::Cursors::No;

			this->Green_Pick->Cursor = System::Windows::Forms::Cursors::No;
			this->Orange_Pick->Cursor = System::Windows::Forms::Cursors::No;
			this->Blue_Pick->Cursor = System::Windows::Forms::Cursors::No;
			this->Red_Pick->Cursor = System::Windows::Forms::Cursors::No;
			this->Yellow_Pick->Cursor = System::Windows::Forms::Cursors::No;
			this->White_Pick->Cursor = System::Windows::Forms::Cursors::No;

			this->Reset_Button->Enabled = false;

			string str(salg);
			String^ finall = gcnew String(str.c_str());
			this->Prev_Label->Text = " ";

			this->Prev_Button->Enabled = false;
			this->Next_Button->Enabled = true;

			int fa, tim, dir;
			ie = 0; d = 0;
		ts:

			if (salg[ie] == '\0')
				goto away;
			if (salg[ie] == ' ')
			{
				ie++;
				goto ts;
			}
			else
				if (salg[ie] == 'R' || salg[ie] == 'U' || salg[ie] == 'F' || salg[ie] == 'D' || salg[ie] == 'B' || salg[ie] == 'L')
				{
					switch (tolower(salg[ie]))
					{
					case 'r': fa = 1; break;
					case 'u': fa = 2; break;
					case 'f': fa = 3; break;
					case 'l': fa = 4; break;
					case 'b': fa = 5; break;
					case 'd': fa = 6; break;
					}
				}
			if (salg[ie + 1] == 39)
			{
				dir = -1;
				tim = 1;
				ie++;
			}
			else if (salg[ie + 1] == '2')
			{
				dir = 1;
				tim = 2;
				ie++;
			}
			else if (salg[ie] != 'R'&&salg[ie] != 'U'&&salg[ie] != 'F'&&salg[ie] != 'D'&&salg[ie] != 'B'&&salg[ie] != 'L')
			{
				ie++;
				goto ts;
			}
			else
			{
				dir = 1;
				tim = 1;
			}


			switch (fa)
			{
			case 1: switch (tim)
			{
			case 1: if (dir == 1)		 //R
			{
				strcpy(sala[d++], "R");  ie++; goto ts;
			}
					else if (dir == -1)  //R'
					{
						strcpy(sala[d++], "R'"); ie++; goto ts;
					}
			case 2:						 //R2	
				strcpy(sala[d++], "R2");  ie++; goto ts;
			}
			case 2: switch (tim)
			{
			case 1: if (dir == 1)		 //U
			{
				strcpy(sala[d++], "U"); ie++; goto ts;
			}
					else if (dir == -1)  //U'
					{
						strcpy(sala[d++], "U'");  ie++; goto ts;
					}
			case 2:					//U2
				strcpy(sala[d++], "U2");  ie++; goto ts;
			}
			case 3: switch (tim)
			{
			case 1: if (dir == 1)		 //F
			{
				strcpy(sala[d++], "F"); ie++; goto ts;
			}
					else if (dir == -1)  //F'
					{
						strcpy(sala[d++], "F'"); ie++; goto ts;
					}
			case 2:					//F2
				strcpy(sala[d++], "F2"); ie++; goto ts;
			}
			case 4: switch (tim)
			{
			case 1: if (dir == 1)		 //L
			{
				strcpy(sala[d++], "L");  ie++; goto ts;
			}
					else if (dir == -1)  //L'
					{
						strcpy(sala[d++], "L'");  ie++; goto ts;
					}
			case 2:					//L2
				strcpy(sala[d++], "L2"); ie++; goto ts;
			}
			case 5: switch (tim)
			{
			case 1: if (dir == 1)		 //B
			{
				strcpy(sala[d++], "B");  ie++; goto ts;
			}
					else if (dir == -1)  //B'
					{
						strcpy(sala[d++], "B'"); ie++; goto ts;
					}
			case 2:					//B2
				strcpy(sala[d++], "B2");  ie++; goto ts;
			}
			case 6: switch (tim)
			{
			case 1: if (dir == 1)		 //D
			{
				strcpy(sala[d++], "D"); ie++; goto ts;
			}
					else if (dir == -1)  //D'
					{
						strcpy(sala[d++], "D'"); ie++; goto ts;
					}
			case 2:					//D2
				strcpy(sala[d++], "D2"); ie++; goto ts;
			}
			}

		away:

			for (int i = 0; i < d; i++)
			{
				if (sala[i][0] == sala[i + 1][0])
				{
					switch (sala[i][1])
					{
					case '\0': switch (sala[i + 1][1])
					{
					case '\0': sala[i][1] = '2'; sala[i][2] = '\0';
						for (int t = i + 1; t < d - 1; t++)
							strcpy(sala[t], sala[t + 1]);
						memset(sala[--d], 0, 5);
						i = -1;
						break;
					case 39:  memset(sala[i], 0, 5);
						memset(sala[i + 1], 0, 5);
						for (int t = i + 2; t < d; t++)
							strcpy(sala[t - 2], sala[t]);
						memset(sala[--d], 0, 5);
						memset(sala[--d], 0, 5);
						i = -1;
						break;
					case '2': sala[i][1] = 39; sala[i][2] = '\0';
						for (int t = i + 1; t < d - 1; t++)
							strcpy(sala[t], sala[t + 1]);
						memset(sala[--d], 0, 5);
						i = -1;
						break;
					}break;
					case 39: switch (sala[i + 1][1])
					{
					case '\0':   memset(sala[i], 0, 5);
						memset(sala[i + 1], 0, 5);
						for (int t = i + 2; t < d; t++)
							strcpy(sala[t - 2], sala[t]);
						memset(sala[--d], 0, 5);
						memset(sala[--d], 0, 5);
						i = -1;
						break;
					case 39:	   sala[i][1] = '2'; sala[i][2] = '\0';
						for (int t = i + 1; t < d - 1; t++)
							strcpy(sala[t], sala[t + 1]);
						memset(sala[--d], 0, 5);
						i = -1;
						break;
					case '2':	   sala[i][1] = '\0';
						for (int t = i + 1; t < d - 1; t++)
							strcpy(sala[t], sala[t + 1]);
						memset(sala[--d], 0, 5);
						i = -1;
						break;
					}break;
					case '2': switch (sala[i + 1][1])
					{
					case '\0':  sala[i][1] = 39; sala[i][2] = '\0';
						for (int t = i + 1; t < d - 1; t++)
							strcpy(sala[t], sala[t + 1]);
						memset(sala[--d], 0, 5);
						i = -1;
						break;
					case 39:    sala[i][1] = '\0';
						for (int t = i + 1; t < d - 1; t++)
							strcpy(sala[t], sala[t + 1]);
						memset(sala[--d], 0, 5);
						i = -1;
						break;
					case '2':   memset(sala[i], 0, 5);
						memset(sala[i + 1], 0, 5);
						for (int t = i + 2; t < d; t++)
							strcpy(sala[t - 2], sala[t]);
						memset(sala[--d], 0, 5);
						memset(sala[--d], 0, 5);
						i = -1;
						break;
					}break;
					}
				}

			}


			Prev_Label->Text = " ";

			if (strcmp(sala[0], "R") == 0)
			{
				this->Pict_R->BringToFront();
				ColUpdate("R");
			}
			else if (strcmp(sala[0], "R'") == 0)
			{
				this->Pict_Rp->BringToFront();
				ColUpdate("R'");
			}
			else if (strcmp(sala[0], "R2") == 0)
			{
				this->Pict_Rt->BringToFront();
				ColUpdate("R2");
			}
			else if (strcmp(sala[0], "U") == 0)
			{
				this->Pict_U->BringToFront();
				ColUpdate("U");
			}
			else if (strcmp(sala[0], "U'") == 0)
			{
				this->Pict_Up->BringToFront();
				ColUpdate("U'");
			}
			else if (strcmp(sala[0], "U2") == 0)
			{
				this->Pict_Ut->BringToFront();
				ColUpdate("U2");
			}
			else if (strcmp(sala[0], "F") == 0)
			{
				this->Pict_F->BringToFront();
				ColUpdate("F");
			}
			else if (strcmp(sala[0], "F'") == 0)
			{
				this->Pict_Fp->BringToFront();
				ColUpdate("F'");
			}
			else if (strcmp(sala[0], "F2") == 0)
			{
				this->Pict_Ft->BringToFront();
				ColUpdate("F2");
			}
			else if (strcmp(sala[0], "B") == 0)
			{
				this->Pict_B->BringToFront();
				ColUpdate("B");
			}
			else if (strcmp(sala[0], "B'") == 0)
			{
				this->Pict_Bp->BringToFront();
				ColUpdate("B'");
			}
			else if (strcmp(sala[0], "B2") == 0)
			{
				this->Pict_Bt->BringToFront();
				ColUpdate("B2");
			}
			else if (strcmp(sala[0], "L") == 0)
			{
				this->Pict_L->BringToFront();
				ColUpdate("L");
			}
			else if (strcmp(sala[0], "L'") == 0)
			{
				this->Pict_Lp->BringToFront();
				ColUpdate("L'");
			}
			else if (strcmp(sala[0], "L2") == 0)
			{
				this->Pict_Lt->BringToFront();
				ColUpdate("L2");
			}
			else if (strcmp(sala[0], "D") == 0)
			{
				this->Pict_D->BringToFront();
				ColUpdate("D");
			}
			else if (strcmp(sala[0], "D'") == 0)
			{
				this->Pict_Dp->BringToFront();
				ColUpdate("D'");
			}
			else if (strcmp(sala[0], "D2") == 0)
			{
				this->Pict_Dt->BringToFront();
				ColUpdate("D2");
			}

			string strr(sala[0]);
			String^ fiall = gcnew String(strr.c_str());

			Alg_Label->Text = fiall;


			string srr(sala[1]);
			String^ fill = gcnew String(srr.c_str());

			Next_Label->Text = fill;

			groupHide(true);

			if (srr.length() == 0)
			{
				this->Again_Button->Visible = false;
				this->ActiveControl = this->Prev_Button;
				this->Next_Button->Enabled = false;
				this->label3->BackColor = System::Drawing::SystemColors::AppWorkspace;
				for (int i = 391; i < 577;)
				{
					this->ClientSize = System::Drawing::Size(448, i);
					if (i > 480)
						i++;
					else
						i += 4;
				}
				this->ClientSize = System::Drawing::Size(448, 576);

				this->Again_Button->Enabled = true;
				this->Again_Button->Visible = true;
			}
			else
			{
				for (int i = 391; i < 541;)
				{
					this->ClientSize = System::Drawing::Size(448, i);
					if (i > 470)
						i++;
					else
						i += 4;
				}
				this->ClientSize = System::Drawing::Size(448, 540);
			}

			groupHide(false);

			ie = 0;

			this->stat->Text = "Moves: " + (ie + 1).ToString() + " / " + d.ToString();
			this->Progress->Maximum = d;
			this->Progress->Value = 1;
			this->toolTip1->SetToolTip(Progress, ((int)Math::Ceiling((float(ie + 1) / d) * 100)).ToString() + "% Completed");

			Next_Button->Focus();
		}
		else
		{
			MessageBox::Show("Invalid Cube state. Please check and try again.", "Oops..", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		//ext : 448, 576  ; comp: 448,39
	}

	private: System::Void Next_Button_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->Prev_Button->Enabled = true;
		this->Prev_Label->Text = this->Alg_Label->Text;
		this->Alg_Label->Text = this->Next_Label->Text;
		ie++;


		if (strcmp(sala[ie], "R") == 0)
		{
			ColUpdate("R");
			this->Pict_R->BringToFront();
			this->Pict_R->Enabled = false;
			this->Pict_R->Enabled = true;
		}
		else if (strcmp(sala[ie], "R'") == 0)
		{
			ColUpdate("R'");
			this->Pict_Rp->BringToFront();
			this->Pict_Rp->Enabled = false;
			this->Pict_Rp->Enabled = true;
		}
		else if (strcmp(sala[ie], "R2") == 0)
		{
			ColUpdate("R2");
			this->Pict_Rt->BringToFront();
			this->Pict_Rt->Enabled = false;
			this->Pict_Rt->Enabled = true;
		}
		else if (strcmp(sala[ie], "U") == 0)
		{
			ColUpdate("U");
			this->Pict_U->BringToFront();
			this->Pict_U->Enabled = false;
			this->Pict_U->Enabled = true;
		}
		else if (strcmp(sala[ie], "U'") == 0)
		{
			ColUpdate("U'");
			this->Pict_Up->BringToFront();
			this->Pict_Up->Enabled = false;
			this->Pict_Up->Enabled = true;
		}
		else if (strcmp(sala[ie], "U2") == 0)
		{
			ColUpdate("U2");
			this->Pict_Ut->BringToFront();
			this->Pict_Ut->Enabled = false;
			this->Pict_Ut->Enabled = true;
		}
		else if (strcmp(sala[ie], "F") == 0)
		{
			ColUpdate("F");
			this->Pict_F->BringToFront();
			this->Pict_F->Enabled = false;
			this->Pict_F->Enabled = true;
		}
		else if (strcmp(sala[ie], "F'") == 0)
		{
			ColUpdate("F'");
			this->Pict_Fp->BringToFront();
			this->Pict_Fp->Enabled = false;
			this->Pict_Fp->Enabled = true;
		}
		else if (strcmp(sala[ie], "F2") == 0)
		{
			ColUpdate("F2");
			this->Pict_Ft->BringToFront();
			this->Pict_Ft->Enabled = false;
			this->Pict_Ft->Enabled = true;
		}
		else if (strcmp(sala[ie], "B") == 0)
		{
			ColUpdate("B");
			this->Pict_B->BringToFront();
			this->Pict_B->Enabled = false;
			this->Pict_B->Enabled = true;
		}
		else if (strcmp(sala[ie], "B'") == 0)
		{
			ColUpdate("B'");
			this->Pict_Bp->BringToFront();
			this->Pict_Bp->Enabled = false;
			this->Pict_Bp->Enabled = true;
		}
		else if (strcmp(sala[ie], "B2") == 0)
		{
			ColUpdate("B2");
			this->Pict_Bt->BringToFront();
			this->Pict_Bt->Enabled = false;
			this->Pict_Bt->Enabled = true;
		}
		else if (strcmp(sala[ie], "L") == 0)
		{
			ColUpdate("L");
			this->Pict_L->BringToFront();
			this->Pict_L->Enabled = false;
			this->Pict_L->Enabled = true;
		}
		else if (strcmp(sala[ie], "L'") == 0)
		{
			ColUpdate("L'");
			this->Pict_Lp->BringToFront();
			this->Pict_Lp->Enabled = false;
			this->Pict_Lp->Enabled = true;
		}
		else if (strcmp(sala[ie], "L2") == 0)
		{
			ColUpdate("L2");
			this->Pict_Lt->BringToFront();
			this->Pict_Lt->Enabled = false;
			this->Pict_Lt->Enabled = true;
		}
		else if (strcmp(sala[ie], "D") == 0)
		{
			ColUpdate("D");
			this->Pict_D->BringToFront();
			this->Pict_D->Enabled = false;
			this->Pict_D->Enabled = true;
		}
		else if (strcmp(sala[ie], "D'") == 0)
		{
			ColUpdate("D'");
			this->Pict_Dp->BringToFront();
			this->Pict_Dp->Enabled = false;
			this->Pict_Dp->Enabled = true;
		}
		else if (strcmp(sala[ie], "D2") == 0)
		{
			ColUpdate("D2");
			this->Pict_Dt->BringToFront();
			this->Pict_Dt->Enabled = false;
			this->Pict_Dt->Enabled = true;
		}

		string srr(sala[ie + 1]);

		if (srr.length() == 0)
		{
			this->label3->Visible = false;
			this->label3->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->Next_Label->Text = " ";
			this->ActiveControl = this->Prev_Button;
			this->Next_Button->Enabled = false;
			this->Again_Button->Visible = false;
			for (int i = 541; i < 577; i += 1)
				this->ClientSize = System::Drawing::Size(448, i);
			this->Again_Button->Visible = true;
			this->Again_Button->Enabled = true;
			this->label3->Visible = true;
			this->ClientSize = System::Drawing::Size(448, 576);
			this->Progress->Value = ie + 1;
			this->toolTip1->SetToolTip(Progress, ((int)Math::Ceiling((float(ie + 1) / d) * 100)).ToString() + "% Completed");
			this->stat->Text = "Moves: " + (ie + 1).ToString() + " / " + d.ToString();
			return;
		}

		String^ fill = gcnew String(srr.c_str());
		this->Next_Label->Text = fill;
		this->Progress->Value = ie + 1;
		this->toolTip1->SetToolTip(Progress, ((int)Math::Ceiling((float(ie + 1) / d) * 100)).ToString() + "% Completed");
		this->stat->Text = "Moves: " + (ie + 1).ToString() + " / " + d.ToString();

	}


	private: System::Void Prev_Button_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->Next_Button->Enabled = true;

		if (this->ClientSize == System::Drawing::Size(448, 576))
			for (int i = 575; i > 539; i--)
				this->ClientSize = System::Drawing::Size(448, i);
		this->ClientSize = System::Drawing::Size(448, 540);

		this->label3->BackColor = System::Drawing::Color::Black;
		this->Next_Label->Text = this->Alg_Label->Text;
		this->Alg_Label->Text = this->Prev_Label->Text;
		ie--;


		if (strcmp(sala[ie + 1], "R") == 0)
			ColUpdate("R'");
		else if (strcmp(sala[ie + 1], "R'") == 0)
			ColUpdate("R");
		else if (strcmp(sala[ie + 1], "R2") == 0)
			ColUpdate("R2");
		else if (strcmp(sala[ie + 1], "U") == 0)
			ColUpdate("U'");
		else if (strcmp(sala[ie + 1], "U'") == 0)
			ColUpdate("U");
		else if (strcmp(sala[ie + 1], "U2") == 0)
			ColUpdate("U2");
		else if (strcmp(sala[ie + 1], "F") == 0)
			ColUpdate("F'");
		else if (strcmp(sala[ie + 1], "F'") == 0)
			ColUpdate("F");
		else if (strcmp(sala[ie + 1], "F2") == 0)
			ColUpdate("F2");
		else if (strcmp(sala[ie + 1], "B") == 0)
			ColUpdate("B'");
		else if (strcmp(sala[ie + 1], "B'") == 0)
			ColUpdate("B");
		else if (strcmp(sala[ie + 1], "B2") == 0)
			ColUpdate("B2");
		else if (strcmp(sala[ie + 1], "L") == 0)
			ColUpdate("L'");
		else if (strcmp(sala[ie + 1], "L'") == 0)
			ColUpdate("L");
		else if (strcmp(sala[ie + 1], "L2") == 0)
			ColUpdate("L2");
		else if (strcmp(sala[ie + 1], "D") == 0)
			ColUpdate("D'");
		else if (strcmp(sala[ie + 1], "D'") == 0)
			ColUpdate("D");
		else if (strcmp(sala[ie + 1], "D2") == 0)
			ColUpdate("D2");


		if (strcmp(sala[ie], "R") == 0)
		{
			this->Pict_R->BringToFront();
			this->Pict_R->Enabled = false;
			this->Pict_R->Enabled = true;
		}
		else if (strcmp(sala[ie], "R'") == 0)
		{
			this->Pict_Rp->BringToFront();
			this->Pict_Rp->Enabled = false;
			this->Pict_Rp->Enabled = true;
		}
		else if (strcmp(sala[ie], "R2") == 0)
		{
			this->Pict_Rt->BringToFront();
			this->Pict_Rt->Enabled = false;
			this->Pict_Rt->Enabled = true;
		}
		else if (strcmp(sala[ie], "U") == 0)
		{
			this->Pict_U->BringToFront();
			this->Pict_U->Enabled = false;
			this->Pict_U->Enabled = true;
		}
		else if (strcmp(sala[ie], "U'") == 0)
		{
			this->Pict_Up->BringToFront();
			this->Pict_Up->Enabled = false;
			this->Pict_Up->Enabled = true;
		}
		else if (strcmp(sala[ie], "U2") == 0)
		{
			this->Pict_Ut->BringToFront();
			this->Pict_Ut->Enabled = false;
			this->Pict_Ut->Enabled = true;
		}
		else if (strcmp(sala[ie], "F") == 0)
		{
			this->Pict_F->BringToFront();
			this->Pict_F->Enabled = false;
			this->Pict_F->Enabled = true;
		}
		else if (strcmp(sala[ie], "F'") == 0)
		{
			this->Pict_Fp->BringToFront();
			this->Pict_Fp->Enabled = false;
			this->Pict_Fp->Enabled = true;
		}
		else if (strcmp(sala[ie], "F2") == 0)
		{
			this->Pict_Ft->BringToFront();
			this->Pict_Ft->Enabled = false;
			this->Pict_Ft->Enabled = true;
		}
		else if (strcmp(sala[ie], "B") == 0)
		{
			this->Pict_B->BringToFront();
			this->Pict_B->Enabled = false;
			this->Pict_B->Enabled = true;
		}
		else if (strcmp(sala[ie], "B'") == 0)
		{
			this->Pict_Bp->BringToFront();
			this->Pict_Bp->Enabled = false;
			this->Pict_Bp->Enabled = true;
		}
		else if (strcmp(sala[ie], "B2") == 0)
		{
			this->Pict_Bt->BringToFront();
			this->Pict_Bt->Enabled = false;
			this->Pict_Bt->Enabled = true;
		}
		else if (strcmp(sala[ie], "L") == 0)
		{
			this->Pict_L->BringToFront();
			this->Pict_L->Enabled = false;
			this->Pict_L->Enabled = true;
		}
		else if (strcmp(sala[ie], "L'") == 0)
		{
			this->Pict_Lp->BringToFront();
			this->Pict_Lp->Enabled = false;
			this->Pict_Lp->Enabled = true;
		}
		else if (strcmp(sala[ie], "L2") == 0)
		{
			this->Pict_Lt->BringToFront();
			this->Pict_Lt->Enabled = false;
			this->Pict_Lt->Enabled = true;
		}
		else if (strcmp(sala[ie], "D") == 0)
		{
			this->Pict_D->BringToFront();
			this->Pict_D->Enabled = false;
			this->Pict_D->Enabled = true;
		}
		else if (strcmp(sala[ie], "D'") == 0)
		{
			this->Pict_Dp->BringToFront();
			this->Pict_Dp->Enabled = false;
			this->Pict_Dp->Enabled = true;
		}
		else if (strcmp(sala[ie], "D2") == 0)
		{
			this->Pict_Dt->BringToFront();
			this->Pict_Dt->Enabled = false;
			this->Pict_Dt->Enabled = true;
		}

		string srr(sala[ie - 1]);

		if ((srr != "R") && (srr != "R'") && (srr != "R2") && (srr != "U") && (srr != "U'") && (srr != "U2") && (srr != "F") && (srr != "F'") && (srr != "F2") && (srr != "L") && (srr != "L'") && (srr != "L2") && (srr != "B") && (srr != "B'") && (srr != "B2") && (srr != "D") && (srr != "D'") && (srr != "D2"))
		{
			this->Prev_Label->Text = " ";
			this->ActiveControl = this->Next_Button;
			this->Prev_Button->Enabled = false;
			this->Progress->Value = ie + 1;
			this->toolTip1->SetToolTip(Progress, ((int)Math::Ceiling((float(ie + 1) / d) * 100)).ToString() + "% Completed");
			this->stat->Text = "Moves: " + (ie + 1).ToString() + " / " + d.ToString();
			return;
		}

		String^ fill = gcnew String(srr.c_str());
		this->Prev_Label->Text = fill;
		this->Progress->Value = ie + 1;
		this->toolTip1->SetToolTip(Progress, ((int)Math::Ceiling((float(ie + 1) / d) * 100)).ToString() + "% Completed");
		this->stat->Text = "Moves: " + (ie + 1).ToString() + " / " + d.ToString();
		Again_Button->Enabled = false;
	}
   
	private: System::Void Cust_Close_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->Top + 216 > (Screen::PrimaryScreen->Bounds.Height / 2))
			for (int i = 0; i<1000; i++)
				this->Top++;
		else
			for (int i = 0; i<1000; i++)
				this->Top--;
		exit(0);
	}
	private: System::Void Inp_Form_Load(System::Object^  sender, System::EventArgs^  e)
	{
		Inp_Panel->Location = Point(5, 79);
		this->dragging = false;
		this->Face->Checked = true;
	}
	private: System::Void Again_Button_Click(System::Object^  sender, System::EventArgs^  e)
	{
		for (int i = 576; i > 388;)
		{
			this->ClientSize = System::Drawing::Size(448, i);
			if (i > 415)
				i -= 3;
			else
			{
				Sleep(4);
				i -= 3;
			}
		}
		this->ClientSize = System::Drawing::Size(448, 390);

		this->Reset_Button->Enabled = true;
		this->bod2->Visible = true;
		this->Next_Button->Enabled = false;
		this->Prev_Button->Enabled = false;
		this->Not_Hlp->Enabled = false;
		this->Again_Button->Enabled = false;
		this->_1->BackColor = System::Drawing::Color::Silver;
		this->_2->BackColor = System::Drawing::Color::Silver;
		this->_3->BackColor = System::Drawing::Color::Silver;
		this->_4->BackColor = System::Drawing::Color::Silver;
		this->_6->BackColor = System::Drawing::Color::Silver;
		this->_7->BackColor = System::Drawing::Color::Silver;
		this->_8->BackColor = System::Drawing::Color::Silver;
		this->_9->BackColor = System::Drawing::Color::Silver;
		this->_10->BackColor = System::Drawing::Color::Silver;
		this->_11->BackColor = System::Drawing::Color::Silver;
		this->_12->BackColor = System::Drawing::Color::Silver;
		this->_13->BackColor = System::Drawing::Color::Silver;
		this->_15->BackColor = System::Drawing::Color::Silver;
		this->_16->BackColor = System::Drawing::Color::Silver;
		this->_17->BackColor = System::Drawing::Color::Silver;
		this->_18->BackColor = System::Drawing::Color::Silver;
		this->_19->BackColor = System::Drawing::Color::Silver;
		this->_20->BackColor = System::Drawing::Color::Silver;
		this->_21->BackColor = System::Drawing::Color::Silver;
		this->_22->BackColor = System::Drawing::Color::Silver;
		this->_24->BackColor = System::Drawing::Color::Silver;
		this->_25->BackColor = System::Drawing::Color::Silver;
		this->_26->BackColor = System::Drawing::Color::Silver;
		this->_27->BackColor = System::Drawing::Color::Silver;
		this->_28->BackColor = System::Drawing::Color::Silver;
		this->_29->BackColor = System::Drawing::Color::Silver;
		this->_30->BackColor = System::Drawing::Color::Silver;
		this->_31->BackColor = System::Drawing::Color::Silver;
		this->_33->BackColor = System::Drawing::Color::Silver;
		this->_34->BackColor = System::Drawing::Color::Silver;
		this->_35->BackColor = System::Drawing::Color::Silver;
		this->_36->BackColor = System::Drawing::Color::Silver;
		this->_37->BackColor = System::Drawing::Color::Silver;
		this->_38->BackColor = System::Drawing::Color::Silver;
		this->_39->BackColor = System::Drawing::Color::Silver;
		this->_40->BackColor = System::Drawing::Color::Silver;
		this->_42->BackColor = System::Drawing::Color::Silver;
		this->_43->BackColor = System::Drawing::Color::Silver;
		this->_44->BackColor = System::Drawing::Color::Silver;
		this->_45->BackColor = System::Drawing::Color::Silver;
		this->_46->BackColor = System::Drawing::Color::Silver;
		this->_47->BackColor = System::Drawing::Color::Silver;
		this->_48->BackColor = System::Drawing::Color::Silver;
		this->_49->BackColor = System::Drawing::Color::Silver;
		this->_51->BackColor = System::Drawing::Color::Silver;
		this->_52->BackColor = System::Drawing::Color::Silver;
		this->_53->BackColor = System::Drawing::Color::Silver;
		this->_54->BackColor = System::Drawing::Color::Silver;

		this->__1->BackColor = System::Drawing::Color::Silver;
		this->__2->BackColor = System::Drawing::Color::Silver;
		this->__3->BackColor = System::Drawing::Color::Silver;
		this->__4->BackColor = System::Drawing::Color::Silver;
		this->__6->BackColor = System::Drawing::Color::Silver;
		this->__7->BackColor = System::Drawing::Color::Silver;
		this->__8->BackColor = System::Drawing::Color::Silver;
		this->__9->BackColor = System::Drawing::Color::Silver;
		this->__10->BackColor = System::Drawing::Color::Silver;
		this->__11->BackColor = System::Drawing::Color::Silver;
		this->__12->BackColor = System::Drawing::Color::Silver;
		this->__13->BackColor = System::Drawing::Color::Silver;
		this->__15->BackColor = System::Drawing::Color::Silver;
		this->__16->BackColor = System::Drawing::Color::Silver;
		this->__17->BackColor = System::Drawing::Color::Silver;
		this->__18->BackColor = System::Drawing::Color::Silver;
		this->__19->BackColor = System::Drawing::Color::Silver;
		this->__20->BackColor = System::Drawing::Color::Silver;
		this->__21->BackColor = System::Drawing::Color::Silver;
		this->__22->BackColor = System::Drawing::Color::Silver;
		this->__24->BackColor = System::Drawing::Color::Silver;
		this->__25->BackColor = System::Drawing::Color::Silver;
		this->__26->BackColor = System::Drawing::Color::Silver;
		this->__27->BackColor = System::Drawing::Color::Silver;
		this->__28->BackColor = System::Drawing::Color::Silver;
		this->__29->BackColor = System::Drawing::Color::Silver;
		this->__30->BackColor = System::Drawing::Color::Silver;
		this->__31->BackColor = System::Drawing::Color::Silver;
		this->__33->BackColor = System::Drawing::Color::Silver;
		this->__34->BackColor = System::Drawing::Color::Silver;
		this->__35->BackColor = System::Drawing::Color::Silver;
		this->__36->BackColor = System::Drawing::Color::Silver;
		this->__37->BackColor = System::Drawing::Color::Silver;
		this->__38->BackColor = System::Drawing::Color::Silver;
		this->__39->BackColor = System::Drawing::Color::Silver;
		this->__40->BackColor = System::Drawing::Color::Silver;
		this->__42->BackColor = System::Drawing::Color::Silver;
		this->__43->BackColor = System::Drawing::Color::Silver;
		this->__44->BackColor = System::Drawing::Color::Silver;
		this->__45->BackColor = System::Drawing::Color::Silver;
		this->__46->BackColor = System::Drawing::Color::Silver;
		this->__47->BackColor = System::Drawing::Color::Silver;
		this->__48->BackColor = System::Drawing::Color::Silver;
		this->__49->BackColor = System::Drawing::Color::Silver;
		this->__51->BackColor = System::Drawing::Color::Silver;
		this->__52->BackColor = System::Drawing::Color::Silver;
		this->__53->BackColor = System::Drawing::Color::Silver;
		this->__54->BackColor = System::Drawing::Color::Silver;

		this->_1->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_2->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_3->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_4->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_6->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_7->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_8->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_9->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_10->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_11->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_12->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_13->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_15->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_16->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_17->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_18->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_19->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_20->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_21->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_22->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_24->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_25->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_26->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_27->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_28->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_29->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_30->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_31->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_33->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_34->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_35->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_36->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_37->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_38->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_39->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_40->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_42->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_43->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_44->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_45->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_46->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_47->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_48->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_49->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_51->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_52->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_53->Cursor = System::Windows::Forms::Cursors::Hand;
		this->_54->Cursor = System::Windows::Forms::Cursors::Hand;

		this->__1->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__2->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__3->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__4->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__6->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__7->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__8->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__9->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__10->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__11->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__12->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__13->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__15->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__16->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__17->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__18->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__19->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__20->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__21->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__22->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__24->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__25->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__26->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__27->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__28->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__29->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__30->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__31->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__33->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__34->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__35->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__36->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__37->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__40->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__42->Cursor = System::Windows::Forms::Cursors::Hand; 
		this->__43->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__44->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__45->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__46->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__47->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__48->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__49->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__51->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__52->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__53->Cursor = System::Windows::Forms::Cursors::Hand;
		this->__54->Cursor = System::Windows::Forms::Cursors::Hand;
		 
		this->Green_Pick->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Orange_Pick->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Blue_Pick->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Red_Pick->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Yellow_Pick->Cursor = System::Windows::Forms::Cursors::Hand;
		this->White_Pick->Cursor = System::Windows::Forms::Cursors::Hand;

		Solve_Button->Enabled = true;
		Solve_Button_2->Enabled = true;
		color_flag = true;
		Pick_flag = true;

		return;

	}

	private: System::Void About_Button_Click(System::Object^  sender, System::EventArgs^  e)
	{
		About_Form^ frm = gcnew About_Form;
		frm->ShowDialog(this);
	}
	private: System::Void Help_Button_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Help_Form^ frm = gcnew Help_Form;
		frm->ShowDialog(this);
		scr = 0;
	}
	private: System::Void Not_Hlp_Click(System::Object^  sender, System::EventArgs^  e)
	{
		scr = 1;
		Help_Form^ frm = gcnew Help_Form;
		frm->ShowDialog(this);
		scr = 0;
	}

	private: System::Void Inp_Form_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
	{
		if (joke == 0)
		{
			joke++;
			goto here;
		}
		if (joke == 1)
		{
			joke = 0;
			return;
		}

	here:

		Object^ ob;
		EventArgs^ ee;

		if (((e->KeyCode == Keys::NumPad4) || ((e->KeyCode == Keys::Left))) && (this->Prev_Button->Enabled == true) && ((this->Height == 540) || (this->Height == 576)))
			Prev_Button_Click(ob, ee);
		else if (((e->KeyCode == Keys::NumPad6) || (e->KeyCode == Keys::Right) || (e->KeyCode == Keys::Space)) && (this->Next_Button->Enabled == true) && (this->Height == 540))
			Next_Button_Click(ob, ee);
	}
	private: System::Void label5_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		this->dragging = true;
		this->offset = Point(e->X, e->Y);
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
	private: System::Void label5_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		this->dragging = false;
	}
	private: System::Void Green_Pick_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (Pick_flag == false)
			return;
		this->Picker_P->BackColor = System::Drawing::Color::Green;
		this->Picked->BackColor = System::Drawing::Color::Green;
	}
	private: System::Void Orange_Pick_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (Pick_flag == false)
			return;
		this->Picker_P->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		this->Picked->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
	}
	private: System::Void Blue_Pick_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (Pick_flag == false)
			return;
		this->Picker_P->BackColor = System::Drawing::Color::Blue;
		this->Picked->BackColor = System::Drawing::Color::Blue;
	}
	private: System::Void Red_Pick_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (Pick_flag == false)
			return;
		this->Picker_P->BackColor = System::Drawing::Color::Red;
		this->Picked->BackColor = System::Drawing::Color::Red;
	} 
	private: System::Void Yellow_Pick_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (Pick_flag == false)
			return;
		this->Picker_P->BackColor = System::Drawing::Color::Yellow;
		this->Picked->BackColor = System::Drawing::Color::Yellow;   
	}
	private: System::Void White_Pick_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (Pick_flag == false)
			return;
		this->Picker_P->BackColor = System::Drawing::Color::White;
		this->Picked->BackColor = System::Drawing::Color::White;
	}


	private: System::Void Cust_Close_PreviewKeyDown(System::Object^  sender, System::Windows::Forms::PreviewKeyDownEventArgs^  e)
	{
		//MessageBox::Show();
		switch (e->KeyCode)
		{
		case Keys::Space:
		case Keys::Down:
		case Keys::Up:
		case Keys::Right:
		case Keys::Left:
			e->IsInputKey = true;
			break;
		}
	}

	void groupHide(bool b)
	{
		switch (b)
		{
		case true:
			this->groupBox2->Visible = false;
			this->groupBox3->Visible = false;
			this->Next_Button->Visible = false;
			this->Next_Label->Visible = false;
			this->Prev_Button->Visible = false;
			this->Prev_Label->Visible = false;
			this->Alg_Label->Visible = false;
			this->Pict_B->Visible = false;
			this->Pict_Bp->Visible = false;
			this->Pict_Bt->Visible = false;
			this->Pict_D->Visible = false;
			this->Pict_Dp->Visible = false;
			this->Pict_Dt->Visible = false;
			this->Pict_F->Visible = false;
			this->Pict_Fp->Visible = false;
			this->Pict_Ft->Visible = false;
			this->Pict_L->Visible = false;
			this->Pict_Lp->Visible = false;
			this->Pict_Lt->Visible = false;
			this->Pict_R->Visible = false;
			this->Pict_Rp->Visible = false;
			this->Pict_Rt->Visible = false;
			this->Pict_U->Visible = false;
			this->Pict_Up->Visible = false;
			this->Pict_Ut->Visible = false;
			this->label1->Visible = false;
			this->label2->Visible = false;
			this->label9->Visible = false;
			this->label10->Visible = false;
			this->label11->Visible = false;
			this->label12->Visible = false;
			this->Progress->Visible = false;
			this->stat->Visible = false;
			this->Not_Hlp->Visible = false;
			break;

		case false: 
			this->groupBox2->Visible = true;
			this->groupBox3->Visible = true;
			this->Next_Button->Visible = true;
			this->Next_Label->Visible = true;
			this->Prev_Button->Visible = true;
			this->Prev_Label->Visible = true;
			this->Alg_Label->Visible = true;
			this->Pict_B->Visible = true;
			this->Pict_Bp->Visible = true;
			this->Pict_Bt->Visible = true;
			this->Pict_D->Visible = true;
			this->Pict_Dp->Visible = true;
			this->Pict_Dt->Visible = true;
			this->Pict_F->Visible = true;
			this->Pict_Fp->Visible = true;
			this->Pict_Ft->Visible = true;
			this->Pict_L->Visible = true;
			this->Pict_Lp->Visible = true;
			this->Pict_Lt->Visible = true;
			this->Pict_R->Visible = true;
			this->Pict_Rp->Visible = true;
			this->Pict_Rt->Visible = true;
			this->Pict_U->Visible = true;
			this->Pict_Up->Visible = true;
			this->Pict_Ut->Visible = true;
			this->label1->Visible = true;
			this->label2->Visible = true;
			this->label9->Visible = true;
			this->label10->Visible = true;
			this->label11->Visible = true;
			this->label12->Visible = true;
			this->Progress->Visible = true;
			this->stat->Visible = true;
			this->Not_Hlp->Visible = true;
			break;

		}
	}
	private: System::Void Inp_Form_Shown(System::Object^  sender, System::EventArgs^  e)
	{
		this->Top = (Screen::PrimaryScreen->Bounds.Height / 2) - 225;
		this->Visible = true;

		//for (; this->Left < (Screen::PrimaryScreen->Bounds.Width / 2) - 224; this->Left += 3);
		//for (; this->Left < (Screen::PrimaryScreen->Bounds.Width / 2) - 195; this->Left += 2);
		//for (; this->Left < (Screen::PrimaryScreen->Bounds.Width / 2) - 160; this->Left += 1);
		//for (; this->Left >(Screen::PrimaryScreen->Bounds.Width / 2) - 195; this->Left -= 2);
		//for (; this->Left >(Screen::PrimaryScreen->Bounds.Width / 2) - 223; this->Left -= 1);

		//for (; this->Left < (Screen::PrimaryScreen->Bounds.Width / 2) - 224; this->Left += 65,Sleep(1));
		//for (; this->Left < (Screen::PrimaryScreen->Bounds.Width / 2) - 195; this->Left += 20,Sleep(2));
		//for (; this->Left < (Screen::PrimaryScreen->Bounds.Width / 2) - 160; this->Left += 8,Sleep(2));
		//for (; this->Left >(Screen::PrimaryScreen->Bounds.Width / 2) - 195; this->Left -= 12,Sleep(5));
		//for (; this->Left >(Screen::PrimaryScreen->Bounds.Width / 2) - 223; this->Left -= 10,Sleep(1));

		for (; this->Left < (Screen::PrimaryScreen->Bounds.Width / 2) - 224; this->Left += 65, Sleep(1));
		for (; this->Left < (Screen::PrimaryScreen->Bounds.Width / 2) - 195; this->Left += 20, Sleep(2));
		for (; this->Left < (Screen::PrimaryScreen->Bounds.Width / 2) - 160; this->Left += 8, Sleep(2));
		for (; this->Left >(Screen::PrimaryScreen->Bounds.Width / 2) - 195; this->Left -= 12, Sleep(5));
		for (; this->Left >(Screen::PrimaryScreen->Bounds.Width / 2) - 223; this->Left -= 10, Sleep(1));

		this->Reset_Button->Visible = true;
		this->Title->Visible = true;
		this->label5->Visible = true;
		this->label6->Visible = true;
		this->label7->Visible = true;
		this->Green_Pick->Visible = true;
		this->Red_Pick->Visible = true;
		this->Blue_Pick->Visible = true;
		this->Orange_Pick->Visible = true;
		this->White_Pick->Visible = true;
		this->Yellow_Pick->Visible = true;
		this->Picked->Visible = true;
		this->Solve_Button->Visible = true;
		this->About_Button->Visible = true;
		this->Help_Button->Visible = true;
		this->Cust_Close->Visible = true;
		this->pictureBox2->Visible = true;
		this->pictureBox3->Visible = true;
		this->pictureBox4->Visible = true;
		this->pictureBox5->Visible = true;
		this->pictureBox6->Visible = true;
		this->pictureBox7->Visible = true;
		this->pictureBox8->Visible = true;
		this->pictureBox9->Visible = true;
		this->pictureBox11->Visible = true;
		this->pictureBox12->Visible = true;
		this->pictureBox13->Visible = true;
		this->pictureBox14->Visible = true;
		this->pictureBox16->Visible = true;
		this->pictureBox17->Visible = true;
		this->pictureBox18->Visible = true;
		this->pictureBox19->Visible = true;
		this->pictureBox21->Visible = true;
		this->pictureBox22->Visible = true;
		this->pictureBox23->Visible = true;
		this->pictureBox26->Visible = true;
		this->pictureBox27->Visible = true;
		this->pictureBox28->Visible = true;
		this->pictureBox29->Visible = true;
		this->pictureBox31->Visible = true;
		this->_1->Visible = true;
		this->_2->Visible = true;
		this->_3->Visible = true;
		this->_4->Visible = true;
		this->_5->Visible = true;
		this->_6->Visible = true;
		this->_7->Visible = true;
		this->_8->Visible = true;
		this->_9->Visible = true;
		this->_10->Visible = true;
		this->_11->Visible = true;
		this->_12->Visible = true;
		this->_13->Visible = true;
		this->_14->Visible = true;
		this->_15->Visible = true;
		this->_16->Visible = true;
		this->_17->Visible = true;
		this->_18->Visible = true;
		this->_19->Visible = true;
		this->_20->Visible = true;
		this->_21->Visible = true;
		this->_22->Visible = true;
		this->_23->Visible = true;
		this->_24->Visible = true;
		this->_25->Visible = true;
		this->_26->Visible = true;
		this->_27->Visible = true;
		this->_28->Visible = true;
		this->_29->Visible = true;
		this->_30->Visible = true;
		this->_31->Visible = true;
		this->_32->Visible = true;
		this->_33->Visible = true;
		this->_34->Visible = true;
		this->_35->Visible = true;
		this->_36->Visible = true;
		this->_37->Visible = true;
		this->_38->Visible = true;
		this->_39->Visible = true;
		this->_40->Visible = true;
		this->_41->Visible = true;
		this->_42->Visible = true;
		this->_43->Visible = true;
		this->_44->Visible = true;
		this->_45->Visible = true;
		this->_46->Visible = true;
		this->_47->Visible = true;
		this->_48->Visible = true;
		this->_49->Visible = true;
		this->_50->Visible = true;
		this->_51->Visible = true;
		this->_52->Visible = true;
		this->_53->Visible = true;
		this->_54->Visible = true;
		this->Icon_Pict->Visible = true;
		this->BTS->Visible = true;
		this->Setting_Button->Visible = true;

	}
	private: System::Void Inp_Form_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
	{
		if (this->Top + 216 > (Screen::PrimaryScreen->Bounds.Height / 2))
			for (int i = 0; i<1000; i++)
				this->Top++;
		else
			for (int i = 0; i<1000; i++)
				this->Top--;
		e->Cancel = false;
	}

	public: System::Void Face_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->Face->Checked == false)
			return;
		else
		{
			inp_mode = 0;

			for (int i = 439; i >-1; i -= 5)
			{
				Point p(i, 0);
				this->Inp_Panel->AutoScrollPosition = p;
			}
			this->Inp_Panel->AutoScrollPosition = Point(0, 0);
		}
	}
	public: System::Void OpCube_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->OpCube->Checked == false)
			return;
		else
		{
			inp_mode = 1;

			for (int i = 1; i < 441; i += 5)
			{
				Point p(i, 0);
				this->Inp_Panel->AutoScrollPosition = p;
			}
		}
	}
	private: System::Void Inp_Panel_MouseWheel(System::Object^ sender, MouseEventArgs^ e)
	{
		if (Inp_Panel->VerticalScroll->Value != 0)
			Inp_Panel->VerticalScroll->Value = 0;
	}
	private: System::Void Setting_Button_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		this->ActiveControl = this->BTS;

		Setting_Form^ foorm = gcnew Setting_Form;
		foorm->ShowDialog(this);

		if (inp_mode == 0)
			Face->Checked = true;
		else
			OpCube->Checked = true;
	}
	private: System::Void BTS_MouseEnter(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->ActiveControl == this->BTS)
			this->ActiveControl = this->Setting_Button;

		this->Setting_Button->BringToFront();
	}
	private: System::Void Setting_Button_MouseLeave(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->ActiveControl == this->Setting_Button)
			this->ActiveControl = this->BTS;

		this->BTS->BringToFront();
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->_1->BackColor = System::Drawing::Color::Silver;
	this->_2->BackColor = System::Drawing::Color::Silver;
	this->_3->BackColor = System::Drawing::Color::Silver;
	this->_4->BackColor = System::Drawing::Color::Silver;
	this->_6->BackColor = System::Drawing::Color::Silver;
	this->_7->BackColor = System::Drawing::Color::Silver;
	this->_8->BackColor = System::Drawing::Color::Silver;
	this->_9->BackColor = System::Drawing::Color::Silver;
	this->_10->BackColor = System::Drawing::Color::Silver;
	this->_11->BackColor = System::Drawing::Color::Silver;
	this->_12->BackColor = System::Drawing::Color::Silver;
	this->_13->BackColor = System::Drawing::Color::Silver;
	this->_15->BackColor = System::Drawing::Color::Silver;
	this->_16->BackColor = System::Drawing::Color::Silver;
	this->_17->BackColor = System::Drawing::Color::Silver;
	this->_18->BackColor = System::Drawing::Color::Silver;
	this->_19->BackColor = System::Drawing::Color::Silver;
	this->_20->BackColor = System::Drawing::Color::Silver;
	this->_21->BackColor = System::Drawing::Color::Silver;
	this->_22->BackColor = System::Drawing::Color::Silver;
	this->_24->BackColor = System::Drawing::Color::Silver;
	this->_25->BackColor = System::Drawing::Color::Silver;
	this->_26->BackColor = System::Drawing::Color::Silver;
	this->_27->BackColor = System::Drawing::Color::Silver;
	this->_28->BackColor = System::Drawing::Color::Silver;
	this->_29->BackColor = System::Drawing::Color::Silver;
	this->_30->BackColor = System::Drawing::Color::Silver;
	this->_31->BackColor = System::Drawing::Color::Silver;
	this->_33->BackColor = System::Drawing::Color::Silver;
	this->_34->BackColor = System::Drawing::Color::Silver;
	this->_35->BackColor = System::Drawing::Color::Silver;
	this->_36->BackColor = System::Drawing::Color::Silver;
	this->_37->BackColor = System::Drawing::Color::Silver;
	this->_38->BackColor = System::Drawing::Color::Silver;
	this->_39->BackColor = System::Drawing::Color::Silver;
	this->_40->BackColor = System::Drawing::Color::Silver;
	this->_42->BackColor = System::Drawing::Color::Silver;
	this->_43->BackColor = System::Drawing::Color::Silver;
	this->_44->BackColor = System::Drawing::Color::Silver;
	this->_45->BackColor = System::Drawing::Color::Silver;
	this->_46->BackColor = System::Drawing::Color::Silver;
	this->_47->BackColor = System::Drawing::Color::Silver;
	this->_48->BackColor = System::Drawing::Color::Silver;
	this->_49->BackColor = System::Drawing::Color::Silver;
	this->_51->BackColor = System::Drawing::Color::Silver;
	this->_52->BackColor = System::Drawing::Color::Silver;
	this->_53->BackColor = System::Drawing::Color::Silver;
	this->_54->BackColor = System::Drawing::Color::Silver;

	this->__1->BackColor = System::Drawing::Color::Silver;
	this->__2->BackColor = System::Drawing::Color::Silver;
	this->__3->BackColor = System::Drawing::Color::Silver;
	this->__4->BackColor = System::Drawing::Color::Silver;
	this->__6->BackColor = System::Drawing::Color::Silver;
	this->__7->BackColor = System::Drawing::Color::Silver;
	this->__8->BackColor = System::Drawing::Color::Silver;
	this->__9->BackColor = System::Drawing::Color::Silver;
	this->__10->BackColor = System::Drawing::Color::Silver;
	this->__11->BackColor = System::Drawing::Color::Silver;
	this->__12->BackColor = System::Drawing::Color::Silver;
	this->__13->BackColor = System::Drawing::Color::Silver;
	this->__15->BackColor = System::Drawing::Color::Silver;
	this->__16->BackColor = System::Drawing::Color::Silver;
	this->__17->BackColor = System::Drawing::Color::Silver;
	this->__18->BackColor = System::Drawing::Color::Silver;
	this->__19->BackColor = System::Drawing::Color::Silver;
	this->__20->BackColor = System::Drawing::Color::Silver;
	this->__21->BackColor = System::Drawing::Color::Silver;
	this->__22->BackColor = System::Drawing::Color::Silver;
	this->__24->BackColor = System::Drawing::Color::Silver;
	this->__25->BackColor = System::Drawing::Color::Silver;
	this->__26->BackColor = System::Drawing::Color::Silver;
	this->__27->BackColor = System::Drawing::Color::Silver;
	this->__28->BackColor = System::Drawing::Color::Silver;
	this->__29->BackColor = System::Drawing::Color::Silver;
	this->__30->BackColor = System::Drawing::Color::Silver;
	this->__31->BackColor = System::Drawing::Color::Silver;
	this->__33->BackColor = System::Drawing::Color::Silver;
	this->__34->BackColor = System::Drawing::Color::Silver;
	this->__35->BackColor = System::Drawing::Color::Silver;
	this->__36->BackColor = System::Drawing::Color::Silver;
	this->__37->BackColor = System::Drawing::Color::Silver;
	this->__38->BackColor = System::Drawing::Color::Silver;
	this->__39->BackColor = System::Drawing::Color::Silver;
	this->__40->BackColor = System::Drawing::Color::Silver;
	this->__42->BackColor = System::Drawing::Color::Silver;
	this->__43->BackColor = System::Drawing::Color::Silver;
	this->__44->BackColor = System::Drawing::Color::Silver;
	this->__45->BackColor = System::Drawing::Color::Silver;
	this->__46->BackColor = System::Drawing::Color::Silver;
	this->__47->BackColor = System::Drawing::Color::Silver;
	this->__48->BackColor = System::Drawing::Color::Silver;
	this->__49->BackColor = System::Drawing::Color::Silver;
	this->__51->BackColor = System::Drawing::Color::Silver;
	this->__52->BackColor = System::Drawing::Color::Silver;
	this->__53->BackColor = System::Drawing::Color::Silver;
	this->__54->BackColor = System::Drawing::Color::Silver;
}

//VideoCaptureDevice^ Cam;
//FilterInfoCollection^ webcam = gcnew FilterInfoCollection(FilterCategory::VideoInputDevice);
//
//private: System::Void Scan_Click(System::Object^  sender, System::EventArgs^  e) 
//{
//	if (webcam->Count == 0)
//	{
//		MessageBox::Show("No Video Devices detected on this machine. Please use manual Input.", "CubeX", MessageBoxButtons::OK, MessageBoxIcon::Error);
//	}
//	else
//	{
//		Cam = gcnew VideoCaptureDevice(webcam[this->VideoDevices->SelectedIndex]->MonikerString);
//		Cam->NewFrame += new NewFrameEventHandler(cam_NewFrame);
//		Cam->Start();
//
//		_5->Click += _5_Click;
//		_14->Click += _14_Click;
//		_23->Click += _23_Click;
//		_32->Click += _32_Click;
//		_41->Click += _41_Click;
//		_50->Click += _50_Click;
//
//		_5->Cursor = Cursors::Hand;
//		_14->Cursor = Cursors::Hand;
//		_23->Cursor = Cursors::Hand;
//		_32->Cursor = Cursors::Hand;
//		_41->Cursor = Cursors::Hand;
//		_50->Cursor = Cursors::Hand;
//
//		if (Scan_Button->BackColor == System->Drawing->Color->Silver)
//			ScanFace = System->Drawing->Color->SkyBlue;
//		else
//		{
//			Pass = false;
//			OnceDone = false;
//			ScanFace = System->Drawing->Color->Green;
//		}
//
//		while (Scanner->IsBusy);
//		Scanner->RunWorkerAsync();
//	}
//}
private: System::Void Scan_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}

