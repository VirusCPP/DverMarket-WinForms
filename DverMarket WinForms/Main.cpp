#include "MainWindow.h"
using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DverMarketWinForms::MainWindow mainForm;
	Application::Run(% mainForm);
}