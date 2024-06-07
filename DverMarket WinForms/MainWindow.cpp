// MainWindowFunctions.cpp

#include "MainWindow.h"

namespace DverMarketWinForms {

	MainWindow::MainWindow(void)
	{
		InitializeComponent();
		checkButtonStatus();
		checkButtonStatus2();
		Form1_Load();
	}

	MainWindow::~MainWindow()
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

	void MainWindow::InitializeComponent(void){
		this->components = (gcnew System::ComponentModel::Container());
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
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
		this->textBox12 = (gcnew System::Windows::Forms::TextBox());
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
		this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
		this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
		this->label6 = (gcnew System::Windows::Forms::Label());
		this->label7 = (gcnew System::Windows::Forms::Label());
		this->button5 = (gcnew System::Windows::Forms::Button());
		this->label8 = (gcnew System::Windows::Forms::Label());
		this->button6 = (gcnew System::Windows::Forms::Button());
		this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
		this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
		this->label9 = (gcnew System::Windows::Forms::Label());
		this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
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
		// toolTip1
		// 
		this->toolTip1->AutoPopDelay = 5000;
		this->toolTip1->InitialDelay = 1;
		this->toolTip1->ReshowDelay = 100;
		this->toolTip1->ShowAlways = true;
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
		// textBox12
		// 
		this->textBox12->Location = System::Drawing::Point(832, 122);
		this->textBox12->Name = L"textBox12";
		this->textBox12->Size = System::Drawing::Size(118, 22);
		this->textBox12->TabIndex = 4;
		this->toolTip1->SetToolTip(this->textBox12, L"Стоимость");
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
		// dateTimePicker1
		// 
		this->dateTimePicker1->Location = System::Drawing::Point(806, 175);
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
		this->button5->Location = System::Drawing::Point(566, 517);
		this->button5->Name = L"button5";
		this->button5->Size = System::Drawing::Size(384, 23);
		this->button5->TabIndex = 8;
		this->button5->Text = L"Рассчитать";
		this->button5->UseVisualStyleBackColor = true;
		this->button5->Click += gcnew System::EventHandler(this, &MainWindow::button5_Click);
		// 
		// label8
		// 
		this->label8->Location = System::Drawing::Point(566, 200);
		this->label8->Name = L"label8";
		this->label8->Size = System::Drawing::Size(384, 16);
		this->label8->TabIndex = 9;
		this->label8->Text = L"Примечание";
		this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// button6
		// 
		this->button6->Location = System::Drawing::Point(566, 546);
		this->button6->Name = L"button6";
		this->button6->Size = System::Drawing::Size(384, 23);
		this->button6->TabIndex = 8;
		this->button6->Text = L"Печать";
		this->button6->UseVisualStyleBackColor = true;
		this->button6->Click += gcnew System::EventHandler(this, &MainWindow::button6_Click);
		// 
		// printDocument1
		// 
		this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MainWindow::printDocument1_PrintPage);
		// 
		// printPreviewDialog1
		// 
		this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
		this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
		this->printPreviewDialog1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
		this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
		this->printPreviewDialog1->Document = this->printDocument1;
		this->printPreviewDialog1->Enabled = true;
		this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
		this->printPreviewDialog1->Name = L"printPreviewDialog1";
		this->printPreviewDialog1->UseAntiAlias = true;
		this->printPreviewDialog1->Visible = false;
		// 
		// label9
		// 
		this->label9->Location = System::Drawing::Point(566, 175);
		this->label9->Name = L"label9";
		this->label9->Size = System::Drawing::Size(118, 22);
		this->label9->TabIndex = 10;
		this->label9->Text = L"Скидка";
		this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// comboBox4
		// 
		this->comboBox4->FormattingEnabled = true;
		this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"5%", L"7%", L"10%" });
		this->comboBox4->Location = System::Drawing::Point(662, 173);
		this->comboBox4->Name = L"comboBox4";
		this->comboBox4->Size = System::Drawing::Size(108, 24);
		this->comboBox4->TabIndex = 11;
		this->comboBox4->Text = L"без скидки";
		// 
		// MainWindow
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
		this->AutoScroll = true;
		this->BackColor = System::Drawing::SystemColors::ControlLightLight;
		this->ClientSize = System::Drawing::Size(970, 611);
		this->Controls->Add(this->comboBox4);
		this->Controls->Add(this->label9);
		this->Controls->Add(this->label8);
		this->Controls->Add(this->button6);
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
		this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
		this->Margin = System::Windows::Forms::Padding(4);
		this->MaximumSize = System::Drawing::Size(986, 650);
		this->MinimumSize = System::Drawing::Size(986, 650);
		this->Name = L"MainWindow";
		this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		this->Text = L"ДверМаркет";
		this->ResumeLayout(false);
		this->PerformLayout();

	}

	void MainWindow::button1_Click(System::Object^ sender, System::EventArgs^ e){
		MoveCompsDown(0);
		tbDoorName[doorCount] = gcnew TextBox();
		tbDoorName[doorCount]->Location = System::Drawing::Point(13, 33 + doorCount * 30);
		tbDoorName[doorCount]->Name = L"textDoorBox" + doorCount.ToString();
		tbDoorName[doorCount]->Size = System::Drawing::Size(175, 24);
		tbDoorName[doorCount]->TabIndex = doorCount;
		this->toolTip1->SetToolTip(tbDoorName[doorCount], L"Полотно");
		Controls->Add(tbDoorName[doorCount]);

		cbDoorSize[doorCount] = gcnew ComboBox();
		cbDoorSize[doorCount]->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"стандарт", L"+30%", L"+40%", L"+50%" });
		cbDoorSize[doorCount]->Location = System::Drawing::Point(194, 33 + doorCount * 30);
		cbDoorSize[doorCount]->Name = L"comboSizeBox" + doorCount.ToString();
		cbDoorSize[doorCount]->Size = System::Drawing::Size(92, 24);
		cbDoorSize[doorCount]->TabIndex = doorCount;
		cbDoorSize[doorCount]->Text = L"Размер";
		Controls->Add(cbDoorSize[doorCount]);

		tbDoorColor[doorCount] = gcnew TextBox();
		tbDoorColor[doorCount]->Location = System::Drawing::Point(293, 33 + doorCount * 30);
		tbDoorColor[doorCount]->Name = L"textColorBox" + doorCount.ToString();
		tbDoorColor[doorCount]->Size = System::Drawing::Size(100, 24);
		tbDoorColor[doorCount]->TabIndex = doorCount;
		this->toolTip1->SetToolTip(tbDoorColor[doorCount], L"Цвет");
		Controls->Add(tbDoorColor[doorCount]);

		tbDoorCount[doorCount] = gcnew TextBox();
		tbDoorCount[doorCount]->Location = System::Drawing::Point(399, 33 + doorCount * 30);
		tbDoorCount[doorCount]->Name = L"textCountBox" + doorCount.ToString();
		tbDoorCount[doorCount]->Size = System::Drawing::Size(50, 24);
		tbDoorCount[doorCount]->TabIndex = doorCount;
		this->toolTip1->SetToolTip(tbDoorCount[doorCount], L"Количество");
		Controls->Add(tbDoorCount[doorCount]);

		tbDoorPrice[doorCount] = gcnew TextBox();
		tbDoorPrice[doorCount]->Location = System::Drawing::Point(455, 33 + doorCount * 30);
		tbDoorPrice[doorCount]->Name = L"textPriceBox" + doorCount.ToString();
		tbDoorPrice[doorCount]->Size = System::Drawing::Size(85, 24);
		tbDoorPrice[doorCount]->TabIndex = doorCount;
		this->toolTip1->SetToolTip(tbDoorPrice[doorCount], L"Стоимость");
		Controls->Add(tbDoorPrice[doorCount]);
		doorCount++;
		checkButtonStatus();
	}

	void MainWindow::button2_Click(System::Object^ sender, System::EventArgs^ e){
		MoveCompsUp(0);
		Controls->Remove(tbDoorName[doorCount - 1]);
		delete tbDoorName[doorCount - 1];
		Controls->Remove(cbDoorSize[doorCount - 1]);
		delete cbDoorSize[doorCount - 1];
		Controls->Remove(tbDoorColor[doorCount - 1]);
		delete tbDoorColor[doorCount - 1];
		Controls->Remove(tbDoorCount[doorCount - 1]);
		delete tbDoorCount[doorCount - 1];
		Controls->Remove(tbDoorPrice[doorCount - 1]);
		delete tbDoorPrice[doorCount - 1];
		doorCount--;
		checkButtonStatus();
	}

	void MainWindow::button3_Click(System::Object^ sender, System::EventArgs^ e){
		MoveCompsDown(1);
		tbFurnituraName[furCount] = gcnew TextBox();
		tbFurnituraName[furCount]->Location = System::Drawing::Point(13, currentFurnituraY + 23 + furCount * 30);
		tbFurnituraName[furCount]->Size = System::Drawing::Size(175, 24);
		tbFurnituraName[furCount]->Name = L"textFurNameBox" + doorCount.ToString();
		tbFurnituraName[furCount]->TabIndex = furCount;
		this->toolTip1->SetToolTip(tbFurnituraName[furCount], L"Наименование");
		Controls->Add(tbFurnituraName[furCount]);

		tbFurnituraCount[furCount] = gcnew TextBox();
		tbFurnituraCount[furCount]->Location = System::Drawing::Point(194, currentFurnituraY + 23 + furCount * 30);
		tbFurnituraCount[furCount]->Size = System::Drawing::Size(92, 24);
		tbFurnituraCount[furCount]->Name = L"textFurCountBox" + doorCount.ToString();
		tbFurnituraCount[furCount]->TabIndex = furCount;
		this->toolTip1->SetToolTip(tbFurnituraCount[furCount], L"Количество");
		Controls->Add(tbFurnituraCount[furCount]);

		tbFurnituraPrice[furCount] = gcnew TextBox();
		tbFurnituraPrice[furCount]->Location = System::Drawing::Point(293, currentFurnituraY + 23 + furCount * 30);
		tbFurnituraPrice[furCount]->Size = System::Drawing::Size(85, 24);
		tbFurnituraPrice[furCount]->Name = L"textFurPriceBox" + doorCount.ToString();
		tbFurnituraPrice[furCount]->TabIndex = furCount;
		this->toolTip1->SetToolTip(tbFurnituraPrice[furCount], L"Стоимость");
		Controls->Add(tbFurnituraPrice[furCount]);
		furCount++;
		checkButtonStatus2();
	}

	void MainWindow::button4_Click(System::Object^ sender, System::EventArgs^ e){
		MoveCompsUp(1);
		Controls->Remove(tbFurnituraName[furCount - 1]);
		delete tbFurnituraName[furCount - 1];
		Controls->Remove(tbFurnituraCount[furCount - 1]);
		delete tbFurnituraCount[furCount - 1];
		Controls->Remove(tbFurnituraPrice[furCount - 1]);
		delete tbFurnituraPrice[furCount - 1];
		furCount--;
		checkButtonStatus2();
	}

	Void MainWindow::button5_Click(System::Object^ sender, System::EventArgs^ e){
		Calculate();
	}

	void MainWindow::button6_Click(System::Object^ sender, System::EventArgs^ e){
		Graphics^ g = this->CreateGraphics();
		bmp = gcnew Bitmap(this->Width, this->Height, g);
		Graphics^ mg = Graphics::FromImage(bmp);
		mg->CopyFromScreen(this->Location.X + 10, this->Location.Y + 30, 20, 135, this->Size);
		bmp->RotateFlip(RotateFlipType::Rotate270FlipNone);
		printPreviewDialog1->Document = printDocument1;
		printPreviewDialog1->ShowDialog();
	}
	void MainWindow::printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e){
		if (bmp != nullptr)
		{
			e->Graphics->DrawImage(bmp, 0, 0);
		}
	}

	void MainWindow::Form1_Load(){
		ToolTip^ toolTip1 = gcnew ToolTip;
		toolTip1->AutoPopDelay = 50000;
		toolTip1->InitialDelay = 1;
		toolTip1->ReshowDelay = 1;
		toolTip1->ShowAlways = true;
	}

	void MainWindow::checkButtonStatus(){
		if (doorCount > 0) { button2->Enabled = true; }
		else { button2->Enabled = false; }
		if (doorCount > 98) { button1->Enabled = false; }
		else { button1->Enabled = true; }
	}

	void MainWindow::checkButtonStatus2(){
		if (furCount > 0) { button4->Enabled = true; }
		else { button4->Enabled = false; }
		if (furCount > 98) { button3->Enabled = false; }
		else { button3->Enabled = true; }
	}

	void MainWindow::MoveCompsDown(int index){
		if (index == 0) {
			this->label5->Location = System::Drawing::Point(13, currentFurnituraY += 30);
			this->button3->Location = System::Drawing::Point(95, currentFurnituraY);
			this->button4->Location = System::Drawing::Point(124, currentFurnituraY);
			for (int i = 0; i < 99; i++)
			{
				if (tbFurnituraName[i] != nullptr) {
					tbFurnituraName[i]->Location = System::Drawing::Point(13, (currentFurnituraY + 23 + i * 30));
					Controls->Add(tbFurnituraName[i]);
					tbFurnituraCount[i]->Location = System::Drawing::Point(194, (currentFurnituraY + 23 + i * 30));
					Controls->Add(tbFurnituraCount[i]);
					tbFurnituraPrice[i]->Location = System::Drawing::Point(293, (currentFurnituraY + 23 + i * 30));
					Controls->Add(tbFurnituraPrice[i]);
				}
			}
		}
	}

	void MainWindow::MoveCompsUp(int index){
		if (index == 0) {
			this->label5->Location = System::Drawing::Point(13, currentFurnituraY -= 30);
			this->button3->Location = System::Drawing::Point(95, currentFurnituraY);
			this->button4->Location = System::Drawing::Point(124, currentFurnituraY);
			for (int i = 0; i < 99; i++)
			{
				if (tbFurnituraName[i] != nullptr) {
					tbFurnituraName[i]->Location = System::Drawing::Point(13, (currentFurnituraY + 23 + i * 30));
					Controls->Add(tbFurnituraName[i]);
					tbFurnituraCount[i]->Location = System::Drawing::Point(194, (currentFurnituraY + 23 + i * 30));
					Controls->Add(tbFurnituraCount[i]);
					tbFurnituraPrice[i]->Location = System::Drawing::Point(293, (currentFurnituraY + 23 + i * 30));
					Controls->Add(tbFurnituraPrice[i]);
				}
			}
		}
	}

	void MainWindow::Calculate(){
		int DoorPrice = 0, FurPrice = 0, KorPrice = 0, NalPrice = 0,
			DoborPrice = 0, PodPrice = 0, MonPrice = 0, DosPrice = 0, Result = 0;

		for (int i = 0; i < 99; i++) {
			if (tbDoorCount[i] != nullptr && tbDoorPrice[i] != nullptr && cbDoorSize[i] != nullptr) {
				int count, price;
				if (Int32::TryParse(tbDoorCount[i]->Text, count) && Int32::TryParse(tbDoorPrice[i]->Text, price)) {
					String^ size = cbDoorSize[i]->Text;

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
			if (tbFurnituraCount[i] != nullptr && tbFurnituraPrice[i] != nullptr) {
				int count, price;
				if (Int32::TryParse(tbFurnituraCount[i]->Text, count) && Int32::TryParse(tbFurnituraPrice[i]->Text, price)) {
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
		if (comboBox4->Text == "5%") {
			Result = DoorPrice + FurPrice + KorPrice + NalPrice + DoborPrice + PodPrice + MonPrice + DosPrice;
			Result = Result - (Result * 5) / 100;
		}
		else if (comboBox4->Text == "7%") {
			Result = DoorPrice + FurPrice + KorPrice + NalPrice + DoborPrice + PodPrice + MonPrice + DosPrice;
			Result = Result - (Result * 7) / 100;
		}
		else if (comboBox4->Text == "10%") {
			Result = DoorPrice + FurPrice + KorPrice + NalPrice + DoborPrice + PodPrice + MonPrice + DosPrice;
			Result = Result - (Result * 10) / 100;
		}
		else
			Result = DoorPrice + FurPrice + KorPrice + NalPrice + DoborPrice + PodPrice + MonPrice + DosPrice;

		this->label7->Text = Result.ToString() + " Руб.";
	}
}
