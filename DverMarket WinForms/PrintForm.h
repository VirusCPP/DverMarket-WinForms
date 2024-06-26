#pragma once
#include "MainWindow.h"

namespace DverMarketWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Printing;

	public ref class PrintForm : public System::Windows::Forms::Form
	{
		

	public:
		PrintForm()
		{
			InitializeComponent();

		}

		~PrintForm()
		{
			if (components)
			{
				delete components;
			}
			if (bmp)
			{
				delete bmp;
			}
		}

		Bitmap^ bmp;
		void enterText();
		void InitializeComponent();
		void printButton_Click(System::Object^ sender, System::EventArgs^ e);
		void printDocument_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e);
		String^ GetLine(String^ text, int& charCount, System::Drawing::Font^ font, int width, System::Drawing::Graphics^ graphics);

	private: 
		System::Windows::Forms::TextBox^ textBox1;
		System::Windows::Forms::PictureBox^ pictureBox1;
		System::Windows::Forms::TextBox^ textBox2;
		System::Windows::Forms::Button^ button1;
		System::Drawing::Printing::PrintDocument^ printDocument1;
		System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
	private: System::Windows::Forms::PrintDialog^ printDialog1;

		   System::ComponentModel::IContainer^ components;
};
}
