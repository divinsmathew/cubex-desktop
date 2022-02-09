#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<Windows.h>
#include<string>
#include<Windows.ApplicationModel.resources.h>
#include<windows.ui.xaml.resources.h>
#include <tchar.h>
#include "Inp_Form.h"
#include <io.h>
#include <fcntl.h>

#using <mscorlib.dll>
#using <System.dll>
#using <System.Windows.Forms.dll>

using namespace CubeX;
using namespace std;
using namespace System;
using namespace System::Windows::Forms;

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4996)
#endif

[STAThreadAttribute]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Inp_Form());
}

