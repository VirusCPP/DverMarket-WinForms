#include "MainWindow.h"
using namespace System;
using namespace System::Windows::Forms;

namespace DverMarketWinForms {
	void main(array<String^>^ args)
	{

		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		MainWindow^ mainForm = gcnew MainWindow();
		Application::Run(mainForm);
	}
}