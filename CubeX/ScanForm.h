#pragma once

namespace CubeX {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ScanForm
	/// </summary>
	public ref class ScanForm : public System::Windows::Forms::Form
	{
	public:
		ScanForm(void)
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
		~ScanForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  ScanCam;
	private: System::Windows::Forms::ComboBox^  VideoDevices;
	protected:

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
			this->ScanCam = (gcnew System::Windows::Forms::PictureBox());
			this->VideoDevices = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ScanCam))->BeginInit();
			this->SuspendLayout();
			// 
			// ScanCam
			// 
			this->ScanCam->Location = System::Drawing::Point(150, 74);
			this->ScanCam->Name = L"ScanCam";
			this->ScanCam->Size = System::Drawing::Size(284, 248);
			this->ScanCam->TabIndex = 0;
			this->ScanCam->TabStop = false;
			// 
			// VideoDevices
			// 
			this->VideoDevices->FormattingEnabled = true;
			this->VideoDevices->Location = System::Drawing::Point(150, 30);
			this->VideoDevices->Name = L"VideoDevices";
			this->VideoDevices->Size = System::Drawing::Size(284, 21);
			this->VideoDevices->TabIndex = 1;
			// 
			// ScanForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(565, 394);
			this->Controls->Add(this->VideoDevices);
			this->Controls->Add(this->ScanCam);
			this->Name = L"ScanForm";
			this->Text = L"ScanForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ScanCam))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
