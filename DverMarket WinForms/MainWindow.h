#pragma once

namespace DverMarketWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Printing;

	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow();
		~MainWindow();
		static const int arrSize = 99;
		static int currentFurnituraY = 41;
		static int doorCount = 0, furCount = 0;
		void InitializeComponent(void);
		void DoorButtonPlus_Click(System::Object^ sender, System::EventArgs^ e);
		void DoorButtonMinus_Click(System::Object^ sender, System::EventArgs^ e);
		void FurButtonPlus_Click(System::Object^ sender, System::EventArgs^ e);
		void FurButtonMinus_Click(System::Object^ sender, System::EventArgs^ e);
		void Calculate_Click(System::Object^ sender, System::EventArgs^ e);
		void Calculate();
		void checkButtonStatus();
		void MoveComponents(int direction);
		//void textBox_KeyPress(Object^ sender, KeyPressEventArgs^ e);
		static System::Windows::Forms::Label^ DoorLable;
		static System::Windows::Forms::Button^ DoorButtonPlus;
		static System::Windows::Forms::Button^ DoorButtonMinus;
		static System::Windows::Forms::ToolTip^ toolTip1;
		static System::Windows::Forms::Label^ KorLable;
		static System::Windows::Forms::Label^ NalLable;
		static System::Windows::Forms::Label^ DobLable;
		static System::Windows::Forms::ComboBox^ KorComboBox;
		static System::Windows::Forms::TextBox^ KorVolBox;
		static System::Windows::Forms::TextBox^ KorPriceBox;
		static System::Windows::Forms::ComboBox^ NalComboBox;
		static System::Windows::Forms::TextBox^ NalPriceBox;
		static System::Windows::Forms::TextBox^ NalVolBox;
		static System::Windows::Forms::ComboBox^ DobComboBox;
		static System::Windows::Forms::TextBox^ DobVolBox;
		static System::Windows::Forms::TextBox^ DobPriceBox;
		static System::Windows::Forms::Label^ FurLable;
		static System::Windows::Forms::Button^ FurButtonPlus;
		static System::Windows::Forms::Button^ FurButtonMinus;
		static System::Windows::Forms::Label^ PodLable;
		static System::Windows::Forms::Label^ MonLable;
		static System::Windows::Forms::Label^ DosLable;
		static System::Windows::Forms::TextBox^ PodVolBox;
		static System::Windows::Forms::TextBox^ PodPriceBox;
		static System::Windows::Forms::TextBox^ MonPriceBox;
		static System::Windows::Forms::TextBox^ DosPriceBox;
		static System::Windows::Forms::DateTimePicker^ dateTimePicker1;
		static System::Windows::Forms::RichTextBox^ richTextBox1;
		static System::Windows::Forms::Label^ TotalAmountLable;
		static System::Windows::Forms::Label^ TotalAmountBox;
		static System::Windows::Forms::Button^ CalculateButton;
		static System::Windows::Forms::Label^ label8;
		static System::Drawing::Printing::PrintDocument^ printDocument1;
		static System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
		static System::Windows::Forms::Label^ label9;
		static System::Windows::Forms::ComboBox^ comboBox4;
		static System::Windows::Forms::Label^ label10;
		static System::Windows::Forms::TextBox^ textBox8;
		static System::Windows::Forms::Label^ label14;
		static System::Windows::Forms::TextBox^ textBox9;
		PrintDocument^ printDocument;
	private:
	    System::ComponentModel::IContainer^ components;	 
	};

	ref class Door {
	public:
		Door() {

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

		~Door() {

		}
		static void addDoor();
	};

	ref class Fur {
	public:
		Fur() {

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

		~Fur() {
			
		}
		static void addFur();
	};
}
