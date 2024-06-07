#pragma once

namespace DverMarketWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Printing;

	static int currentFurnituraY = 41;

	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void);
		~MainWindow();
		Bitmap^ bmp;
		int doorCount = 0, furCount = 0;
		array <TextBox^>^ tbDoorName = gcnew array<TextBox^>(99);
		array <ComboBox^>^ cbDoorSize = gcnew array<ComboBox^>(99);
		array <TextBox^>^ tbDoorColor = gcnew array<TextBox^>(99);
		array <TextBox^>^ tbDoorCount = gcnew array<TextBox^>(99);
		array <TextBox^>^ tbDoorPrice = gcnew array<TextBox^>(99);
		array <TextBox^>^ tbFurnituraName = gcnew array<TextBox^>(99);
		array <TextBox^>^ tbFurnituraCount = gcnew array<TextBox^>(99);
		array <TextBox^>^ tbFurnituraPrice = gcnew array<TextBox^>(99);

	private:
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::Button^ button2;
		System::Windows::Forms::ToolTip^ toolTip1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::ComboBox^ comboBox1;
		System::Windows::Forms::TextBox^ textBox1;
		System::Windows::Forms::TextBox^ textBox2;
		System::Windows::Forms::ComboBox^ comboBox2;
		System::Windows::Forms::TextBox^ textBox4;
		System::Windows::Forms::TextBox^ textBox3;
		System::Windows::Forms::ComboBox^ comboBox3;
		System::Windows::Forms::TextBox^ textBox5;
		System::Windows::Forms::TextBox^ textBox6;
		System::Windows::Forms::Label^ label5;
		System::Windows::Forms::Button^ button3;
		System::Windows::Forms::Button^ button4;
		System::Windows::Forms::Label^ label11;
		System::Windows::Forms::Label^ label12;
		System::Windows::Forms::Label^ label13;
		System::Windows::Forms::TextBox^ textBox7;
		System::Windows::Forms::TextBox^ textBox10;
		System::Windows::Forms::TextBox^ textBox11;
		System::Windows::Forms::TextBox^ textBox12;
		System::Windows::Forms::DateTimePicker^ dateTimePicker1;
		System::Windows::Forms::RichTextBox^ richTextBox1;
		System::Windows::Forms::Label^ label6;
		System::Windows::Forms::Label^ label7;
		System::Windows::Forms::Button^ button5;
		System::Windows::Forms::Label^ label8;
		System::Windows::Forms::Button^ button6;
		System::ComponentModel::IContainer^ components;
		System::Drawing::Printing::PrintDocument^ printDocument1;
		System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
		System::Windows::Forms::Label^ label9;
		System::Windows::Forms::ComboBox^ comboBox4;
		PrintDocument^ printDocument;
	

		void InitializeComponent(void);
		void button1_Click(System::Object^ sender, System::EventArgs^ e);
		void button2_Click(System::Object^ sender, System::EventArgs^ e);
		void button3_Click(System::Object^ sender, System::EventArgs^ e);
		void button4_Click(System::Object^ sender, System::EventArgs^ e);
		void button5_Click(System::Object^ sender, System::EventArgs^ e);
		void button6_Click(System::Object^ sender, System::EventArgs^ e);
		void Form1_Load();
		void Calculate();
		void checkButtonStatus();
		void checkButtonStatus2();
		void MoveCompsDown(int index);
		void MoveCompsUp(int index);
		void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e);
		  
	};
}
