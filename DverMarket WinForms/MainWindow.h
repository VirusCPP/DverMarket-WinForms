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
		static int doorCount = 0, furCount = 0;
		static array <TextBox^>^ tbDoorName = gcnew array<TextBox^>(99);
		static array <ComboBox^>^ cbDoorSize = gcnew array<ComboBox^>(99);
		static array <TextBox^>^ tbDoorColor = gcnew array<TextBox^>(99);
		static array <TextBox^>^ tbDoorCount = gcnew array<TextBox^>(99);
		static array <TextBox^>^ tbDoorPrice = gcnew array<TextBox^>(99);
		static array <TextBox^>^ tbFurnituraName = gcnew array<TextBox^>(99);
		static array <TextBox^>^ tbFurnituraCount = gcnew array<TextBox^>(99);
		static array <TextBox^>^ tbFurnituraPrice = gcnew array<TextBox^>(99);
		static System::Windows::Forms::Label^ label1;
		static System::Windows::Forms::Button^ button1;
		static System::Windows::Forms::Button^ button2;
		static System::Windows::Forms::ToolTip^ toolTip1;
		static System::Windows::Forms::Label^ label2;
		static System::Windows::Forms::Label^ label3;
		static System::Windows::Forms::Label^ label4;
		static System::Windows::Forms::ComboBox^ comboBox1;
		static System::Windows::Forms::TextBox^ textBox1;
		static System::Windows::Forms::TextBox^ textBox2;
		static System::Windows::Forms::ComboBox^ comboBox2;
		static System::Windows::Forms::TextBox^ textBox4;
		static System::Windows::Forms::TextBox^ textBox3;
		static System::Windows::Forms::ComboBox^ comboBox3;
		static System::Windows::Forms::TextBox^ textBox5;
		static System::Windows::Forms::TextBox^ textBox6;
		static System::Windows::Forms::Label^ label5;
		static System::Windows::Forms::Button^ button3;
		static System::Windows::Forms::Button^ button4;
		static System::Windows::Forms::Label^ label11;
		static System::Windows::Forms::Label^ label12;
		static System::Windows::Forms::Label^ label13;
		static System::Windows::Forms::TextBox^ textBox7;
		static System::Windows::Forms::TextBox^ textBox10;
		static System::Windows::Forms::TextBox^ textBox11;
		static System::Windows::Forms::TextBox^ textBox12;
		static System::Windows::Forms::DateTimePicker^ dateTimePicker1;
		static System::Windows::Forms::RichTextBox^ richTextBox1;
		static System::Windows::Forms::Label^ label6;
		static System::Windows::Forms::Label^ label7;
		static System::Windows::Forms::Button^ button5;
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
	private: System::ComponentModel::IContainer^ components;
		void InitializeComponent(void);
		void button1_Click(System::Object^ sender, System::EventArgs^ e);
		void button2_Click(System::Object^ sender, System::EventArgs^ e);
		void button3_Click(System::Object^ sender, System::EventArgs^ e);
		void button4_Click(System::Object^ sender, System::EventArgs^ e);
		void button5_Click(System::Object^ sender, System::EventArgs^ e);
		void Form1_Load();
		void Calculate();
		void checkButtonStatus();
		void checkButtonStatus2();
		void MoveCompsDown(int index);
		void MoveCompsUp(int index);
		Void button7_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
