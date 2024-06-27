#pragma once
#include "MainWindow.h"


namespace DverMarketWinForms {
	ref class Door 
	{
	public:
		Door() {

		}

		~Door() {

		}

		TextBox^ DoorName;
		ComboBox^ DoorSize;
		TextBox^ DoorColor;
		TextBox^ DoorCount;
		TextBox^ DoorPrice;
		void textBox_KeyPress(Object^ sender, KeyPressEventArgs^ e)
		{
			if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '\b')
			{
				e->Handled = true;
			}
		}
		static array<Door^>^ arrDoor = gcnew array<Door^>(MainWindow::arrSize);
		static void addDoor();
	};
}
