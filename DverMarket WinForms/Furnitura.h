#pragma once
#pragma once
#include "MainWindow.h"


namespace DverMarketWinForms {
	ref class Fur 
	{
	public:
		Fur() {

		}

		~Fur() {

		}

		TextBox^ FurName;
		TextBox^ FurCount;
		TextBox^ FurPrice;
		void textBox_KeyPress(Object^ sender, KeyPressEventArgs^ e)
		{
			if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '\b')
			{
				e->Handled = true;
			}
		}
		static array<Fur^>^ arrFur = gcnew array<Fur^>(MainWindow::arrSize);
		static void addFur();
	};
}
