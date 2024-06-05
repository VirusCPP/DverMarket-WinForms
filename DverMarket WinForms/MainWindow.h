#pragma once

namespace DverMarketWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	static int curretRuchkaY = 41;
	


	public ref class MainWindow : public System::Windows::Forms::Form
	{
		
	public:
		
		MainWindow(void)
		{
			
			InitializeComponent();
			checkButtonStatus();
			if (RuchkaCount > 0) { button4->Enabled = true; }
			else { button4->Enabled = false; }
			if (RuchkaCount > 98) { button3->Enabled = false; }
			else { button3->Enabled = true; }
		}

	protected:
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button5;
	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			   this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			   this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->label12 = (gcnew System::Windows::Forms::Label());
			   this->label13 = (gcnew System::Windows::Forms::Label());
			   this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			   this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			   this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(13, 10);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(47, 16);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"Дверь";
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(95, 10);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(23, 23);
			   this->button1->TabIndex = 1;
			   this->button1->Text = L"+";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			   // 
			   // button2
			   // 
			   this->button2->Location = System::Drawing::Point(124, 10);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(23, 23);
			   this->button2->TabIndex = 1;
			   this->button2->Text = L"-";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(566, 64);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(59, 22);
			   this->textBox1->TabIndex = 3;
			   this->toolTip1->SetToolTip(this->textBox1, L"Количество");
			   // 
			   // textBox2
			   // 
			   this->textBox2->Location = System::Drawing::Point(625, 64);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(59, 22);
			   this->textBox2->TabIndex = 4;
			   this->toolTip1->SetToolTip(this->textBox2, L"Стоимость");
			   // 
			   // textBox4
			   // 
			   this->textBox4->Location = System::Drawing::Point(751, 64);
			   this->textBox4->Name = L"textBox4";
			   this->textBox4->Size = System::Drawing::Size(59, 22);
			   this->textBox4->TabIndex = 4;
			   this->toolTip1->SetToolTip(this->textBox4, L"Стоимость");
			   // 
			   // textBox3
			   // 
			   this->textBox3->Location = System::Drawing::Point(692, 64);
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(59, 22);
			   this->textBox3->TabIndex = 3;
			   this->toolTip1->SetToolTip(this->textBox3, L"Количество");
			   // 
			   // textBox5
			   // 
			   this->textBox5->Location = System::Drawing::Point(832, 64);
			   this->textBox5->Name = L"textBox5";
			   this->textBox5->Size = System::Drawing::Size(59, 22);
			   this->textBox5->TabIndex = 3;
			   this->toolTip1->SetToolTip(this->textBox5, L"Количество");
			   // 
			   // textBox6
			   // 
			   this->textBox6->Location = System::Drawing::Point(891, 64);
			   this->textBox6->Name = L"textBox6";
			   this->textBox6->Size = System::Drawing::Size(59, 22);
			   this->textBox6->TabIndex = 4;
			   this->toolTip1->SetToolTip(this->textBox6, L"Стоимость");
			   // 
			   // textBox7
			   // 
			   this->textBox7->Location = System::Drawing::Point(566, 122);
			   this->textBox7->Name = L"textBox7";
			   this->textBox7->Size = System::Drawing::Size(59, 22);
			   this->textBox7->TabIndex = 3;
			   this->toolTip1->SetToolTip(this->textBox7, L"Этаж");
			   // 
			   // textBox10
			   // 
			   this->textBox10->Location = System::Drawing::Point(625, 122);
			   this->textBox10->Name = L"textBox10";
			   this->textBox10->Size = System::Drawing::Size(59, 22);
			   this->textBox10->TabIndex = 4;
			   this->toolTip1->SetToolTip(this->textBox10, L"Стоимость");
			   // 
			   // textBox11
			   // 
			   this->textBox11->Location = System::Drawing::Point(692, 122);
			   this->textBox11->Name = L"textBox11";
			   this->textBox11->Size = System::Drawing::Size(118, 22);
			   this->textBox11->TabIndex = 4;
			   this->toolTip1->SetToolTip(this->textBox11, L"Стоимость");
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(563, 13);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(62, 16);
			   this->label2->TabIndex = 0;
			   this->label2->Text = L"Коробка";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(689, 13);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(72, 16);
			   this->label3->TabIndex = 0;
			   this->label3->Text = L"Наличник";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(829, 13);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(48, 16);
			   this->label4->TabIndex = 0;
			   this->label4->Text = L"Добор";
			   // 
			   // comboBox1
			   // 
			   this->comboBox1->FormattingEnabled = true;
			   this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"стандарт", L"+30%", L"+40%", L"+50%" });
			   this->comboBox1->Location = System::Drawing::Point(566, 33);
			   this->comboBox1->Name = L"comboBox1";
			   this->comboBox1->Size = System::Drawing::Size(118, 24);
			   this->comboBox1->TabIndex = 2;
			   this->comboBox1->Text = L"Размер";
			   // 
			   // comboBox2
			   // 
			   this->comboBox2->FormattingEnabled = true;
			   this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"стандарт", L"+30%", L"+40%", L"+50%" });
			   this->comboBox2->Location = System::Drawing::Point(692, 33);
			   this->comboBox2->Name = L"comboBox2";
			   this->comboBox2->Size = System::Drawing::Size(118, 24);
			   this->comboBox2->TabIndex = 2;
			   this->comboBox2->Text = L"Размер";
			   // 
			   // comboBox3
			   // 
			   this->comboBox3->FormattingEnabled = true;
			   this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"стандарт", L"+30%", L"+40%", L"+50%" });
			   this->comboBox3->Location = System::Drawing::Point(832, 33);
			   this->comboBox3->Name = L"comboBox3";
			   this->comboBox3->Size = System::Drawing::Size(118, 24);
			   this->comboBox3->TabIndex = 2;
			   this->comboBox3->Text = L"Размер";
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Location = System::Drawing::Point(13, 41);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(81, 16);
			   this->label5->TabIndex = 0;
			   this->label5->Text = L"Фурнитура";
			   // 
			   // button3
			   // 
			   this->button3->Location = System::Drawing::Point(95, 41);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(23, 23);
			   this->button3->TabIndex = 1;
			   this->button3->Text = L"+";
			   this->button3->UseVisualStyleBackColor = true;
			   this->button3->Click += gcnew System::EventHandler(this, &MainWindow::button3_Click);
			   // 
			   // button4
			   // 
			   this->button4->Location = System::Drawing::Point(124, 41);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(23, 23);
			   this->button4->TabIndex = 1;
			   this->button4->Text = L"-";
			   this->button4->UseVisualStyleBackColor = true;
			   this->button4->Click += gcnew System::EventHandler(this, &MainWindow::button4_Click);
			   // 
			   // label11
			   // 
			   this->label11->AutoSize = true;
			   this->label11->Location = System::Drawing::Point(563, 99);
			   this->label11->Name = L"label11";
			   this->label11->Size = System::Drawing::Size(59, 16);
			   this->label11->TabIndex = 0;
			   this->label11->Text = L"Подъем";
			   // 
			   // label12
			   // 
			   this->label12->AutoSize = true;
			   this->label12->Location = System::Drawing::Point(689, 99);
			   this->label12->Name = L"label12";
			   this->label12->Size = System::Drawing::Size(58, 16);
			   this->label12->TabIndex = 0;
			   this->label12->Text = L"Монтаж";
			   // 
			   // label13
			   // 
			   this->label13->AutoSize = true;
			   this->label13->Location = System::Drawing::Point(829, 99);
			   this->label13->Name = L"label13";
			   this->label13->Size = System::Drawing::Size(69, 16);
			   this->label13->TabIndex = 0;
			   this->label13->Text = L"Доставка";
			   // 
			   // textBox12
			   // 
			   this->textBox12->Location = System::Drawing::Point(832, 122);
			   this->textBox12->Name = L"textBox12";
			   this->textBox12->Size = System::Drawing::Size(118, 22);
			   this->textBox12->TabIndex = 4;
			   // 
			   // dateTimePicker1
			   // 
			   this->dateTimePicker1->Location = System::Drawing::Point(566, 168);
			   this->dateTimePicker1->Name = L"dateTimePicker1";
			   this->dateTimePicker1->Size = System::Drawing::Size(144, 22);
			   this->dateTimePicker1->TabIndex = 5;
			   // 
			   // richTextBox1
			   // 
			   this->richTextBox1->Location = System::Drawing::Point(566, 219);
			   this->richTextBox1->Name = L"richTextBox1";
			   this->richTextBox1->Size = System::Drawing::Size(384, 176);
			   this->richTextBox1->TabIndex = 6;
			   this->richTextBox1->Text = L"";
			   // 
			   // label6
			   // 
			   this->label6->Location = System::Drawing::Point(566, 432);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(384, 38);
			   this->label6->TabIndex = 7;
			   this->label6->Text = L"ИТОГОВАЯ СУММА";
			   this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // label7
			   // 
			   this->label7->Location = System::Drawing::Point(566, 470);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(384, 33);
			   this->label7->TabIndex = 7;
			   this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // button5
			   // 
			   this->button5->Location = System::Drawing::Point(566, 539);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(384, 23);
			   this->button5->TabIndex = 8;
			   this->button5->Text = L"Расчитать";
			   this->button5->UseVisualStyleBackColor = true;
			   this->button5->Click += gcnew System::EventHandler(this, &MainWindow::button5_Click);
			   // 
			   // MainWindow
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			   this->AutoScroll = true;
			   this->ClientSize = System::Drawing::Size(970, 611);
			   this->Controls->Add(this->button5);
			   this->Controls->Add(this->label7);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->richTextBox1);
			   this->Controls->Add(this->dateTimePicker1);
			   this->Controls->Add(this->textBox12);
			   this->Controls->Add(this->textBox6);
			   this->Controls->Add(this->textBox11);
			   this->Controls->Add(this->textBox4);
			   this->Controls->Add(this->textBox10);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->textBox5);
			   this->Controls->Add(this->comboBox3);
			   this->Controls->Add(this->textBox3);
			   this->Controls->Add(this->comboBox2);
			   this->Controls->Add(this->textBox7);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->comboBox1);
			   this->Controls->Add(this->button4);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->label13);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->label12);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label11);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->label1);
			   this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->Margin = System::Windows::Forms::Padding(4);
			   this->MaximumSize = System::Drawing::Size(986, 650);
			   this->MinimumSize = System::Drawing::Size(986, 650);
			   this->Name = L"MainWindow";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"MainWindow";
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
		   int doorCount = 0;
		   array <TextBox^>^ tbDoor = gcnew array<TextBox^>(99);
		   array <ComboBox^>^ cbSize = gcnew array<ComboBox^>(99);
		   array <TextBox^>^ tbColor = gcnew array<TextBox^>(99);
		   array <TextBox^>^ tbCount = gcnew array<TextBox^>(99);
		   array <TextBox^>^ tbPrice = gcnew array<TextBox^>(99);
		   int RuchkaCount = 0;
		   array <TextBox^>^ tbRuchkaName = gcnew array<TextBox^>(99);
		   array <TextBox^>^ tbRuchkaCount = gcnew array<TextBox^>(99);
		   array <TextBox^>^ tbRuchkaPrice = gcnew array<TextBox^>(99);
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		MoveCompsDown(1);
		tbRuchkaName[RuchkaCount] = gcnew TextBox();
		tbRuchkaName[RuchkaCount]->Location = System::Drawing::Point(13, curretRuchkaY + 23 + RuchkaCount * 30);
		tbRuchkaName[RuchkaCount]->Size = System::Drawing::Size(175, 24);
		tbRuchkaName[RuchkaCount]->Name = L"textFurNameBox" + doorCount.ToString();
		tbRuchkaName[RuchkaCount]->TabIndex = RuchkaCount;
			this->toolTip1->SetToolTip(tbRuchkaName[RuchkaCount], L"Наименование");
			Controls->Add(tbRuchkaName[RuchkaCount]);

			tbRuchkaCount[RuchkaCount] = gcnew TextBox();
			tbRuchkaCount[RuchkaCount]->Location = System::Drawing::Point(194, curretRuchkaY + 23 + RuchkaCount * 30);
			tbRuchkaCount[RuchkaCount]->Size = System::Drawing::Size(92, 24);
			tbRuchkaCount[RuchkaCount]->Name = L"textFurCountBox" + doorCount.ToString();
			tbRuchkaCount[RuchkaCount]->TabIndex = RuchkaCount;
			this->toolTip1->SetToolTip(tbRuchkaCount[RuchkaCount], L"Количество");
			Controls->Add(tbRuchkaCount[RuchkaCount]);


			tbRuchkaPrice[RuchkaCount] = gcnew TextBox();
			tbRuchkaPrice[RuchkaCount]->Location = System::Drawing::Point(293, curretRuchkaY + 23 + RuchkaCount * 30);
			tbRuchkaPrice[RuchkaCount]->Size = System::Drawing::Size(85, 24);
			tbRuchkaPrice[RuchkaCount]->Name = L"textFurPriceBox" + doorCount.ToString();
			tbRuchkaPrice[RuchkaCount]->TabIndex = RuchkaCount;
			this->toolTip1->SetToolTip(tbRuchkaPrice[RuchkaCount], L"Стоимость");
			Controls->Add(tbRuchkaPrice[RuchkaCount]);
			RuchkaCount++;
			if (RuchkaCount > 0) { button4->Enabled = true; }
			else { button4->Enabled = false; }
			if (RuchkaCount > 98) { button3->Enabled = false; }
			else { button3->Enabled = true; }

	}
		   private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			   MoveCompsUp(1);
			   Controls->Remove(tbRuchkaName[RuchkaCount - 1]);
			   delete tbRuchkaName[RuchkaCount - 1];
			   Controls->Remove(tbRuchkaCount[RuchkaCount - 1]);
			   delete tbRuchkaCount[RuchkaCount - 1];
			   Controls->Remove(tbRuchkaPrice[RuchkaCount - 1]);
			   delete tbRuchkaPrice[RuchkaCount - 1];
			   
			   RuchkaCount--;
			   if (RuchkaCount > 0) { button4->Enabled = true; }
			   else { button4->Enabled = false; }
			   if (RuchkaCount > 98) { button3->Enabled = false; }
			   else { button3->Enabled = true; }
		   }


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MoveCompsDown(0);
		tbDoor[doorCount] = gcnew TextBox();
		tbDoor[doorCount]->Location = System::Drawing::Point(13, 33 + doorCount * 30);
		tbDoor[doorCount]->Name = L"textDoorBox" + doorCount.ToString();
		tbDoor[doorCount]->Size = System::Drawing::Size(175, 24);
		tbDoor[doorCount]->TabIndex = doorCount;
		this->toolTip1->SetToolTip(tbDoor[doorCount], L"Полотно");
		Controls->Add(tbDoor[doorCount]);

		cbSize[doorCount] = gcnew ComboBox();
		cbSize[doorCount]->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"стандарт", L"+30%", L"+40%", L"+50%" });
		cbSize[doorCount]->Location = System::Drawing::Point(194, 33 + doorCount * 30);
		cbSize[doorCount]->Name = L"comboSizeBox" + doorCount.ToString();
		cbSize[doorCount]->Size = System::Drawing::Size(92, 24);
		cbSize[doorCount]->TabIndex = doorCount;
		cbSize[doorCount]->Text = L"Размер";
		Controls->Add(cbSize[doorCount]);

		tbColor[doorCount] = gcnew TextBox();
		tbColor[doorCount]->Location = System::Drawing::Point(293, 33 + doorCount * 30);
		tbColor[doorCount]->Name = L"textColorBox" + doorCount.ToString();
		tbColor[doorCount]->Size = System::Drawing::Size(100, 24);
		tbColor[doorCount]->TabIndex = doorCount;
		this->toolTip1->SetToolTip(tbColor[doorCount], L"Цвет");
		Controls->Add(tbColor[doorCount]);

		tbCount[doorCount] = gcnew TextBox();
		tbCount[doorCount]->Location = System::Drawing::Point(399, 33 + doorCount * 30);
		tbCount[doorCount]->Name = L"textCountBox" + doorCount.ToString();
		tbCount[doorCount]->Size = System::Drawing::Size(50, 24);
		tbCount[doorCount]->TabIndex = doorCount;
		this->toolTip1->SetToolTip(tbCount[doorCount], L"Количество");
		Controls->Add(tbCount[doorCount]);

		tbPrice[doorCount] = gcnew TextBox();
		tbPrice[doorCount]->Location = System::Drawing::Point(455, 33 + doorCount * 30);
		tbPrice[doorCount]->Name = L"textPriceBox" + doorCount.ToString();
		tbPrice[doorCount]->Size = System::Drawing::Size(85, 24);
		tbPrice[doorCount]->TabIndex = doorCount;
		this->toolTip1->SetToolTip(tbPrice[doorCount], L"Стоимость");
		Controls->Add(tbPrice[doorCount]);
		doorCount++;
		checkButtonStatus();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MoveCompsUp(0);
		Controls->Remove(tbDoor[doorCount - 1]);
		delete tbDoor[doorCount - 1];
		Controls->Remove(cbSize[doorCount - 1]);
		delete cbSize[doorCount - 1];
		Controls->Remove(tbColor[doorCount - 1]);
		delete tbColor[doorCount - 1];
		Controls->Remove(tbCount[doorCount - 1]);
		delete tbCount[doorCount - 1];
		Controls->Remove(tbPrice[doorCount - 1]);
		delete tbPrice[doorCount - 1];
		doorCount--;
		checkButtonStatus();
	}
	void checkButtonStatus() {
			   if (doorCount > 0) { button2->Enabled = true; }
			   else { button2->Enabled = false; }
			   if (doorCount > 98) { button1->Enabled = false; }
			   else { button1->Enabled = true; }
	}
	
	void MoveCompsDown(int index) {
		if (index == 0) {
			this->label5->Location = System::Drawing::Point(13, curretRuchkaY += 30);
			this->button3->Location = System::Drawing::Point(95, curretRuchkaY);
			this->button4->Location = System::Drawing::Point(124, curretRuchkaY);
			for (int i = 0; i < 99; i++)
			{
				if (tbRuchkaName[i] != nullptr) {
					tbRuchkaName[i]->Location = System::Drawing::Point(13, (curretRuchkaY + 23 + i * 30));
					Controls->Add(tbRuchkaName[i]);
					tbRuchkaCount[i]->Location = System::Drawing::Point(194, (curretRuchkaY + 23 + i * 30));
					Controls->Add(tbRuchkaCount[i]);
					tbRuchkaPrice[i]->Location = System::Drawing::Point(293, (curretRuchkaY + 23 + i * 30));
					Controls->Add(tbRuchkaPrice[i]);
				}
			}
		}
	}
	void MoveCompsUp(int index) {
		if (index == 0) {
			this->label5->Location = System::Drawing::Point(13, curretRuchkaY -= 30);
			this->button3->Location = System::Drawing::Point(95, curretRuchkaY);
			this->button4->Location = System::Drawing::Point(124, curretRuchkaY);
			for (int i = 0; i < 99; i++)
			{
				if (tbRuchkaName[i] != nullptr) {
					tbRuchkaName[i]->Location = System::Drawing::Point(13, (curretRuchkaY + 23 + i * 30));
					Controls->Add(tbRuchkaName[i]);
					tbRuchkaCount[i]->Location = System::Drawing::Point(194, (curretRuchkaY + 23 + i * 30));
					Controls->Add(tbRuchkaCount[i]);
					tbRuchkaPrice[i]->Location = System::Drawing::Point(293, (curretRuchkaY + 23 + i * 30));
					Controls->Add(tbRuchkaPrice[i]);
				}
			}
		}
	}
	void Calculate() {
		int DoorPrice = 0;
		int FurPrice = 0;
		int KorPrice = 0;
		int NalPrice = 0;
		int DoborPrice = 0;
		int PodPrice = 0;
		int MonPrice = 0;
		int DosPrice = 0;
		int Result = 0;

		for (int i = 0; i < 99; i++) {
			if (tbCount[i] != nullptr && tbPrice[i] != nullptr && cbSize[i] != nullptr) {
				int count, price;
				if (Int32::TryParse(tbCount[i]->Text, count) && Int32::TryParse(tbPrice[i]->Text, price)) {
					String^ size = cbSize[i]->Text;

					if (size == "+30%")
						DoorPrice += count * (price * 1.3);
					else if (size == "+40%")
						DoorPrice += count * (price * 1.4);
					else if (size == "+50%")
						DoorPrice += count * (price * 1.5);
					else
						DoorPrice += count * price;
				}
			}
		}

		for (int i = 0; i < 99; i++) {
			if (tbRuchkaCount[i] != nullptr && tbRuchkaPrice[i] != nullptr) {
				int count, price;
				if (Int32::TryParse(tbRuchkaCount[i]->Text, count) && Int32::TryParse(tbRuchkaPrice[i]->Text, price)) {
					FurPrice += count * price;
				}
			}
		}

		int tb1, tb2, tb3, tb4, tb5, tb6, tb7, tb10, tb11, tb12;
		Int32::TryParse(textBox1->Text, tb1);
		Int32::TryParse(textBox2->Text, tb2);
		Int32::TryParse(textBox3->Text, tb3);
		Int32::TryParse(textBox4->Text, tb4);
		Int32::TryParse(textBox5->Text, tb5);
		Int32::TryParse(textBox6->Text, tb6);
		Int32::TryParse(textBox7->Text, tb7);
		Int32::TryParse(textBox10->Text, tb10);
		Int32::TryParse(textBox11->Text, tb11);
		Int32::TryParse(textBox12->Text, tb12);

		if (comboBox1->Text == "+30%")
			KorPrice = tb1 * (tb2 * 1.3);
		else if (comboBox1->Text == "+40%")
			KorPrice = tb1 * (tb2 * 1.4);
		else if (comboBox1->Text == "+50%")
			KorPrice = tb1 * (tb2 * 1.5);
		else
			KorPrice = tb1 * tb2;

		if (comboBox2->Text == "+30%")
			NalPrice = tb3 * (tb4 * 1.3);
		else if (comboBox2->Text == "+40%")
			NalPrice = tb3 * (tb4 * 1.4);
		else if (comboBox2->Text == "+50%")
			NalPrice = tb3 * (tb4 * 1.5);
		else
			NalPrice = tb3 * tb4;

		if (comboBox3->Text == "+30%")
			DoborPrice = tb5 * (tb6 * 1.3);
		else if (comboBox3->Text == "+40%")
			DoborPrice = tb5 * (tb6 * 1.4);
		else if (comboBox3->Text == "+50%")
			DoborPrice = tb5 * (tb6 * 1.5);
		else
			DoborPrice = tb5 * tb6;

		PodPrice = tb7 * tb10;
		MonPrice = tb11;
		DosPrice = tb12;

		Result = DoorPrice + FurPrice + KorPrice + NalPrice + DoborPrice + PodPrice + MonPrice + DosPrice;

		this->label7->Text = Result.ToString() + " Руб.";
	}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Calculate();
}
};
}
