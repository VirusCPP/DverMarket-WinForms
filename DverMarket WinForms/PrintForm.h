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
		Bitmap^ bmp;
		void enterText();
		void InitializeComponent(void);
		void button1_Click(System::Object^ sender, System::EventArgs^ e);
		void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e);

		PrintForm(void)
		{
			InitializeComponent();
			
		}

	protected:
		
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
	private: 
		System::Windows::Forms::TextBox^ textBox1;
		System::Windows::Forms::PictureBox^ pictureBox1;
		System::Windows::Forms::TextBox^ textBox2;
		System::Windows::Forms::Button^ button1;
		System::Drawing::Printing::PrintDocument^ printDocument1;
		System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
		System::ComponentModel::IContainer^ components;
};
}
