#include "MainWindow.h"
#include "PrintForm.h"

namespace DverMarketWinForms {

	MainWindow::MainWindow()
	{
		InitializeComponent();
		checkButtonStatus();
	}

	MainWindow::~MainWindow()
	{
		if (components)
		{
			delete components;
		}
	}

	void MainWindow::InitializeComponent(void){
		this->components = (gcnew System::ComponentModel::Container());
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
		this->DoorLable = (gcnew System::Windows::Forms::Label());
		this->DoorButtonPlus = (gcnew System::Windows::Forms::Button());
		this->DoorButtonMinus = (gcnew System::Windows::Forms::Button());
		this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
		this->KorVolBox = (gcnew System::Windows::Forms::TextBox());
		this->KorPriceBox = (gcnew System::Windows::Forms::TextBox());
		this->NalPriceBox = (gcnew System::Windows::Forms::TextBox());
		this->NalVolBox = (gcnew System::Windows::Forms::TextBox());
		this->DobVolBox = (gcnew System::Windows::Forms::TextBox());
		this->DobPriceBox = (gcnew System::Windows::Forms::TextBox());
		this->PodVolBox = (gcnew System::Windows::Forms::TextBox());
		this->PodPriceBox = (gcnew System::Windows::Forms::TextBox());
		this->MonPriceBox = (gcnew System::Windows::Forms::TextBox());
		this->DosPriceBox = (gcnew System::Windows::Forms::TextBox());
		this->KorLable = (gcnew System::Windows::Forms::Label());
		this->NalLable = (gcnew System::Windows::Forms::Label());
		this->DobLable = (gcnew System::Windows::Forms::Label());
		this->KorComboBox = (gcnew System::Windows::Forms::ComboBox());
		this->NalComboBox = (gcnew System::Windows::Forms::ComboBox());
		this->DobComboBox = (gcnew System::Windows::Forms::ComboBox());
		this->FurLable = (gcnew System::Windows::Forms::Label());
		this->FurButtonPlus = (gcnew System::Windows::Forms::Button());
		this->FurButtonMinus = (gcnew System::Windows::Forms::Button());
		this->PodLable = (gcnew System::Windows::Forms::Label());
		this->MonLable = (gcnew System::Windows::Forms::Label());
		this->DosLable = (gcnew System::Windows::Forms::Label());
		this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
		this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
		this->TotalAmountLable = (gcnew System::Windows::Forms::Label());
		this->TotalAmountBox = (gcnew System::Windows::Forms::Label());
		this->CalculateButton = (gcnew System::Windows::Forms::Button());
		this->label8 = (gcnew System::Windows::Forms::Label());
		this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
		this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
		this->label9 = (gcnew System::Windows::Forms::Label());
		this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
		this->label10 = (gcnew System::Windows::Forms::Label());
		this->textBox8 = (gcnew System::Windows::Forms::TextBox());
		this->label14 = (gcnew System::Windows::Forms::Label());
		this->textBox9 = (gcnew System::Windows::Forms::TextBox());
		this->SuspendLayout();
		// 
		// label1
		// 
		this->DoorLable->AutoSize = true;
		this->DoorLable->Location = System::Drawing::Point(13, 10);
		this->DoorLable->Name = L"label1";
		this->DoorLable->Size = System::Drawing::Size(47, 16);
		this->DoorLable->TabIndex = 0;
		this->DoorLable->Text = L"�����";
		// 
		// button1
		// 
		this->DoorButtonPlus->Location = System::Drawing::Point(95, 10);
		this->DoorButtonPlus->Name = L"button1";
		this->DoorButtonPlus->Size = System::Drawing::Size(23, 23);
		this->DoorButtonPlus->TabIndex = 1;
		this->DoorButtonPlus->Text = L"+";
		this->DoorButtonPlus->UseVisualStyleBackColor = true;
		this->DoorButtonPlus->Click += gcnew System::EventHandler(this, &MainWindow::DoorButtonPlus_Click);
		// 
		// button2
		// 
		this->DoorButtonMinus->Location = System::Drawing::Point(124, 10);
		this->DoorButtonMinus->Name = L"button2";
		this->DoorButtonMinus->Size = System::Drawing::Size(23, 23);
		this->DoorButtonMinus->TabIndex = 1;
		this->DoorButtonMinus->Text = L"-";
		this->DoorButtonMinus->UseVisualStyleBackColor = true;
		this->DoorButtonMinus->Click += gcnew System::EventHandler(this, &MainWindow::DoorButtonMinus_Click);
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
		this->KorVolBox->Location = System::Drawing::Point(566, 64);
		this->KorVolBox->Name = L"textBox1";
		this->KorVolBox->Size = System::Drawing::Size(59, 22);
		this->KorVolBox->TabIndex = 3;
		this->toolTip1->SetToolTip(this->KorVolBox, L"����������");
		// 
		// textBox2
		// 
		this->KorPriceBox->Location = System::Drawing::Point(625, 64);
		this->KorPriceBox->Name = L"textBox2";
		this->KorPriceBox->Size = System::Drawing::Size(59, 22);
		this->KorPriceBox->TabIndex = 4;
		this->toolTip1->SetToolTip(this->KorPriceBox, L"���������");
		// 
		// textBox4
		// 
		this->NalPriceBox->Location = System::Drawing::Point(751, 64);
		this->NalPriceBox->Name = L"textBox4";
		this->NalPriceBox->Size = System::Drawing::Size(59, 22);
		this->NalPriceBox->TabIndex = 4;
		this->toolTip1->SetToolTip(this->NalPriceBox, L"���������");
		// 
		// textBox3
		// 
		this->NalVolBox->Location = System::Drawing::Point(692, 64);
		this->NalVolBox->Name = L"textBox3";
		this->NalVolBox->Size = System::Drawing::Size(59, 22);
		this->NalVolBox->TabIndex = 3;
		this->toolTip1->SetToolTip(this->NalVolBox, L"����������");
		// 
		// textBox5
		// 
		this->DobVolBox->Location = System::Drawing::Point(832, 64);
		this->DobVolBox->Name = L"textBox5";
		this->DobVolBox->Size = System::Drawing::Size(59, 22);
		this->DobVolBox->TabIndex = 3;
		this->toolTip1->SetToolTip(this->DobVolBox, L"����������");
		// 
		// textBox6
		// 
		this->DobPriceBox->Location = System::Drawing::Point(891, 64);
		this->DobPriceBox->Name = L"textBox6";
		this->DobPriceBox->Size = System::Drawing::Size(59, 22);
		this->DobPriceBox->TabIndex = 4;
		this->toolTip1->SetToolTip(this->DobPriceBox, L"���������");
		// 
		// textBox7
		// 
		this->PodVolBox->Location = System::Drawing::Point(566, 122);
		this->PodVolBox->Name = L"textBox7";
		this->PodVolBox->Size = System::Drawing::Size(59, 22);
		this->PodVolBox->TabIndex = 3;
		this->toolTip1->SetToolTip(this->PodVolBox, L"����");
		// 
		// textBox10
		// 
		this->PodPriceBox->Location = System::Drawing::Point(625, 122);
		this->PodPriceBox->Name = L"textBox10";
		this->PodPriceBox->Size = System::Drawing::Size(59, 22);
		this->PodPriceBox->TabIndex = 4;
		this->toolTip1->SetToolTip(this->PodPriceBox, L"���������");
		// 
		// textBox11
		// 
		this->MonPriceBox->Location = System::Drawing::Point(692, 122);
		this->MonPriceBox->Name = L"textBox11";
		this->MonPriceBox->Size = System::Drawing::Size(118, 22);
		this->MonPriceBox->TabIndex = 4;
		this->toolTip1->SetToolTip(this->MonPriceBox, L"���������");
		// 
		// textBox12
		// 
		this->DosPriceBox->Location = System::Drawing::Point(832, 122);
		this->DosPriceBox->Name = L"textBox12";
		this->DosPriceBox->Size = System::Drawing::Size(118, 22);
		this->DosPriceBox->TabIndex = 4;
		this->toolTip1->SetToolTip(this->DosPriceBox, L"���������");
		// 
		// label2
		// 
		this->KorLable->AutoSize = true;
		this->KorLable->Location = System::Drawing::Point(563, 13);
		this->KorLable->Name = L"label2";
		this->KorLable->Size = System::Drawing::Size(62, 16);
		this->KorLable->TabIndex = 0;
		this->KorLable->Text = L"�������";
		// 
		// label3
		// 
		this->NalLable->AutoSize = true;
		this->NalLable->Location = System::Drawing::Point(689, 13);
		this->NalLable->Name = L"label3";
		this->NalLable->Size = System::Drawing::Size(72, 16);
		this->NalLable->TabIndex = 0;
		this->NalLable->Text = L"��������";
		// 
		// label4
		// 
		this->DobLable->AutoSize = true;
		this->DobLable->Location = System::Drawing::Point(829, 13);
		this->DobLable->Name = L"label4";
		this->DobLable->Size = System::Drawing::Size(48, 16);
		this->DobLable->TabIndex = 0;
		this->DobLable->Text = L"�����";
		// 
		// comboBox1
		// 
		this->KorComboBox->FormattingEnabled = true;
		this->KorComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"��������", L"+30%", L"+40%", L"+50%" });
		this->KorComboBox->Location = System::Drawing::Point(566, 33);
		this->KorComboBox->Name = L"comboBox1";
		this->KorComboBox->Size = System::Drawing::Size(118, 24);
		this->KorComboBox->TabIndex = 2;
		this->KorComboBox->Text = L"������";
		// 
		// comboBox2
		// 
		this->NalComboBox->FormattingEnabled = true;
		this->NalComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"��������", L"+30%", L"+40%", L"+50%" });
		this->NalComboBox->Location = System::Drawing::Point(692, 33);
		this->NalComboBox->Name = L"comboBox2";
		this->NalComboBox->Size = System::Drawing::Size(118, 24);
		this->NalComboBox->TabIndex = 2;
		this->NalComboBox->Text = L"������";
		// 
		// comboBox3
		// 
		this->DobComboBox->FormattingEnabled = true;
		this->DobComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"��������", L"+30%", L"+40%", L"+50%" });
		this->DobComboBox->Location = System::Drawing::Point(832, 33);
		this->DobComboBox->Name = L"comboBox3";
		this->DobComboBox->Size = System::Drawing::Size(118, 24);
		this->DobComboBox->TabIndex = 2;
		this->DobComboBox->Text = L"������";
		// 
		// label5
		// 
		this->FurLable->AutoSize = true;
		this->FurLable->Location = System::Drawing::Point(13, 41);
		this->FurLable->Name = L"label5";
		this->FurLable->Size = System::Drawing::Size(81, 16);
		this->FurLable->TabIndex = 0;
		this->FurLable->Text = L"���������";
		// 
		// button3
		// 
		this->FurButtonPlus->Location = System::Drawing::Point(95, 41);
		this->FurButtonPlus->Name = L"button3";
		this->FurButtonPlus->Size = System::Drawing::Size(23, 23);
		this->FurButtonPlus->TabIndex = 1;
		this->FurButtonPlus->Text = L"+";
		this->FurButtonPlus->UseVisualStyleBackColor = true;
		this->FurButtonPlus->Click += gcnew System::EventHandler(this, &MainWindow::FurButtonPlus_Click);
		// 
		// button4
		// 
		this->FurButtonMinus->Location = System::Drawing::Point(124, 41);
		this->FurButtonMinus->Name = L"button4";
		this->FurButtonMinus->Size = System::Drawing::Size(23, 23);
		this->FurButtonMinus->TabIndex = 1;
		this->FurButtonMinus->Text = L"-";
		this->FurButtonMinus->UseVisualStyleBackColor = true;
		this->FurButtonMinus->Click += gcnew System::EventHandler(this, &MainWindow::FurButtonMinus_Click);
		// 
		// label11
		// 
		this->PodLable->AutoSize = true;
		this->PodLable->Location = System::Drawing::Point(563, 99);
		this->PodLable->Name = L"label11";
		this->PodLable->Size = System::Drawing::Size(59, 16);
		this->PodLable->TabIndex = 0;
		this->PodLable->Text = L"������";
		// 
		// label12
		// 
		this->MonLable->AutoSize = true;
		this->MonLable->Location = System::Drawing::Point(689, 99);
		this->MonLable->Name = L"label12";
		this->MonLable->Size = System::Drawing::Size(58, 16);
		this->MonLable->TabIndex = 0;
		this->MonLable->Text = L"������";
		// 
		// label13
		// 
		this->DosLable->AutoSize = true;
		this->DosLable->Location = System::Drawing::Point(829, 99);
		this->DosLable->Name = L"label13";
		this->DosLable->Size = System::Drawing::Size(69, 16);
		this->DosLable->TabIndex = 0;
		this->DosLable->Text = L"��������";
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
		this->TotalAmountLable->Location = System::Drawing::Point(566, 432);
		this->TotalAmountLable->Name = L"label6";
		this->TotalAmountLable->Size = System::Drawing::Size(384, 38);
		this->TotalAmountLable->TabIndex = 7;
		this->TotalAmountLable->Text = L"�������� �����";
		this->TotalAmountLable->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// label7
		// 
		this->TotalAmountBox->Location = System::Drawing::Point(566, 470);
		this->TotalAmountBox->Name = L"label7";
		this->TotalAmountBox->Size = System::Drawing::Size(384, 33);
		this->TotalAmountBox->TabIndex = 7;
		this->TotalAmountBox->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// button5
		// 
		this->CalculateButton->Location = System::Drawing::Point(566, 538);
		this->CalculateButton->Name = L"button5";
		this->CalculateButton->Size = System::Drawing::Size(384, 23);
		this->CalculateButton->TabIndex = 8;
		this->CalculateButton->Text = L"����������";
		this->CalculateButton->UseVisualStyleBackColor = true;
		this->CalculateButton->Click += gcnew System::EventHandler(this, &MainWindow::Calculate_Click);
		// 
		// label8
		// 
		this->label8->Location = System::Drawing::Point(566, 200);
		this->label8->Name = L"label8";
		this->label8->Size = System::Drawing::Size(384, 16);
		this->label8->TabIndex = 9;
		this->label8->Text = L"����������";
		this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
		this->label9->Text = L"������";
		this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// comboBox4
		// 
		this->comboBox4->FormattingEnabled = true;
		this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"��� ������", L"5%", L"7%", L"10%" });
		this->comboBox4->Location = System::Drawing::Point(662, 173);
		this->comboBox4->Name = L"comboBox4";
		this->comboBox4->Size = System::Drawing::Size(108, 24);
		this->comboBox4->TabIndex = 11;
		this->comboBox4->Text = L"��� ������";
		// 
		// label10
		// 
		this->label10->AutoSize = true;
		this->label10->Location = System::Drawing::Point(566, 402);
		this->label10->Name = L"label10";
		this->label10->Size = System::Drawing::Size(93, 16);
		this->label10->TabIndex = 12;
		this->label10->Text = L"����� �����";
		// 
		// textBox8
		// 
		this->textBox8->Location = System::Drawing::Point(662, 401);
		this->textBox8->Name = L"textBox8";
		this->textBox8->ReadOnly = true;
		this->textBox8->Size = System::Drawing::Size(85, 22);
		this->textBox8->TabIndex = 13;
		// 
		// label14
		// 
		this->label14->AutoSize = true;
		this->label14->Location = System::Drawing::Point(768, 404);
		this->label14->Name = L"label14";
		this->label14->Size = System::Drawing::Size(98, 16);
		this->label14->TabIndex = 12;
		this->label14->Text = L"����� ������";
		// 
		// textBox9
		// 
		this->textBox9->Location = System::Drawing::Point(872, 402);
		this->textBox9->Name = L"textBox9";
		this->textBox9->ReadOnly = true;
		this->textBox9->Size = System::Drawing::Size(77, 22);
		this->textBox9->TabIndex = 13;
		// 
		// MainWindow
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
		this->AutoScroll = true;
		this->BackColor = System::Drawing::SystemColors::Control;
		this->ClientSize = System::Drawing::Size(970, 611);
		this->Controls->Add(this->textBox9);
		this->Controls->Add(this->textBox8);
		this->Controls->Add(this->label14);
		this->Controls->Add(this->label10);
		this->Controls->Add(this->comboBox4);
		this->Controls->Add(this->label9);
		this->Controls->Add(this->label8);
		this->Controls->Add(this->CalculateButton);
		this->Controls->Add(this->TotalAmountBox);
		this->Controls->Add(this->TotalAmountLable);
		this->Controls->Add(this->richTextBox1);
		this->Controls->Add(this->dateTimePicker1);
		this->Controls->Add(this->DosPriceBox);
		this->Controls->Add(this->DobPriceBox);
		this->Controls->Add(this->MonPriceBox);
		this->Controls->Add(this->NalPriceBox);
		this->Controls->Add(this->PodPriceBox);
		this->Controls->Add(this->KorPriceBox);
		this->Controls->Add(this->DobVolBox);
		this->Controls->Add(this->DobComboBox);
		this->Controls->Add(this->NalVolBox);
		this->Controls->Add(this->NalComboBox);
		this->Controls->Add(this->PodVolBox);
		this->Controls->Add(this->KorVolBox);
		this->Controls->Add(this->KorComboBox);
		this->Controls->Add(this->FurButtonMinus);
		this->Controls->Add(this->DoorButtonMinus);
		this->Controls->Add(this->FurButtonPlus);
		this->Controls->Add(this->DoorButtonPlus);
		this->Controls->Add(this->DosLable);
		this->Controls->Add(this->DobLable);
		this->Controls->Add(this->MonLable);
		this->Controls->Add(this->NalLable);
		this->Controls->Add(this->PodLable);
		this->Controls->Add(this->KorLable);
		this->Controls->Add(this->FurLable);
		this->Controls->Add(this->DoorLable);
		this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
		this->Margin = System::Windows::Forms::Padding(4);
		this->MaximumSize = System::Drawing::Size(986, 650);
		this->MinimumSize = System::Drawing::Size(986, 650);
		this->Name = L"MainWindow";
		this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		this->Text = L"����������";
		this->ResumeLayout(false);
		this->PerformLayout();
	}
	//������� ��������� ���� ����� 
	void Door::addDoor() {
		arrDoor[MainWindow::doorCount] = gcnew Door();

		arrDoor[MainWindow::doorCount]->DoorName = gcnew TextBox();
		arrDoor[MainWindow::doorCount]->DoorSize = gcnew ComboBox();
		arrDoor[MainWindow::doorCount]->DoorColor = gcnew TextBox();
		arrDoor[MainWindow::doorCount]->DoorCount = gcnew TextBox();
		arrDoor[MainWindow::doorCount]->DoorPrice = gcnew TextBox();

		arrDoor[MainWindow::doorCount]->DoorName->Location = System::Drawing::Point(13, 33 + MainWindow::doorCount * 30);
		arrDoor[MainWindow::doorCount]->DoorName->Name = "textDoorNameBox" + MainWindow::doorCount.ToString();
		arrDoor[MainWindow::doorCount]->DoorName->Size = System::Drawing::Size(175, 24);
		arrDoor[MainWindow::doorCount]->DoorName->TabIndex = MainWindow::doorCount;
		MainWindow::toolTip1->SetToolTip(arrDoor[MainWindow::doorCount]->DoorName, "�������");
		
		arrDoor[MainWindow::doorCount]->DoorSize->Location = System::Drawing::Point(194, 33 + MainWindow::doorCount * 30);
		arrDoor[MainWindow::doorCount]->DoorSize->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"��������", L"+30%", L"+40%", L"+50%" });
		arrDoor[MainWindow::doorCount]->DoorSize->Name = L"comboSizeBox" + MainWindow::doorCount.ToString();
		arrDoor[MainWindow::doorCount]->DoorSize->Size = System::Drawing::Size(92, 24);
		arrDoor[MainWindow::doorCount]->DoorSize->TabIndex = MainWindow::doorCount;
		arrDoor[MainWindow::doorCount]->DoorSize->Text = L"������";

		arrDoor[MainWindow::doorCount]->DoorColor->Location = System::Drawing::Point(293, 33 + MainWindow::doorCount * 30);
		arrDoor[MainWindow::doorCount]->DoorColor->Name = "textDoorColorBox" + MainWindow::doorCount.ToString();
		arrDoor[MainWindow::doorCount]->DoorColor->Size = System::Drawing::Size(100, 24);
		arrDoor[MainWindow::doorCount]->DoorColor->TabIndex = MainWindow::doorCount;
		MainWindow::toolTip1->SetToolTip(arrDoor[MainWindow::doorCount]->DoorColor, "����");
		
		arrDoor[MainWindow::doorCount]->DoorCount->Location = System::Drawing::Point(399, 33 + MainWindow::doorCount * 30);
		arrDoor[MainWindow::doorCount]->DoorCount->Name = "textDoorCountBox" + MainWindow::doorCount.ToString();
		arrDoor[MainWindow::doorCount]->DoorCount->Size = System::Drawing::Size(50, 24);
		arrDoor[MainWindow::doorCount]->DoorCount->TabIndex = MainWindow::doorCount;
		MainWindow::toolTip1->SetToolTip(arrDoor[MainWindow::doorCount]->DoorCount, "����������");
		
		arrDoor[MainWindow::doorCount]->DoorPrice->Location = System::Drawing::Point(455, 33 + MainWindow::doorCount * 30);
		arrDoor[MainWindow::doorCount]->DoorPrice->Name = "textDoorPriceBox" + MainWindow::doorCount.ToString();
		arrDoor[MainWindow::doorCount]->DoorPrice->Size = System::Drawing::Size(85, 24);
		arrDoor[MainWindow::doorCount]->DoorPrice->TabIndex = MainWindow::doorCount;
		MainWindow::toolTip1->SetToolTip(arrDoor[MainWindow::doorCount]->DoorPrice, "����");
	}
	//������� ��������� ���� ���������
	void Fur::addFur() {
		arrFur[MainWindow::furCount] = gcnew Fur();
		
		arrFur[MainWindow::furCount]->FurName = gcnew TextBox();
		arrFur[MainWindow::furCount]->FurCount = gcnew TextBox();
		arrFur[MainWindow::furCount]->FurPrice = gcnew TextBox();

		arrFur[MainWindow::furCount]->FurName->Location = System::Drawing::Point(13, MainWindow::currentFurnituraY + 23 + MainWindow::furCount * 30);
		arrFur[MainWindow::furCount]->FurName->Size = System::Drawing::Size(175, 24);
		arrFur[MainWindow::furCount]->FurName->Name = L"textFurNameBox" + "Name" + MainWindow::doorCount.ToString();
		arrFur[MainWindow::furCount]->FurName->TabIndex = MainWindow::furCount;
		MainWindow::toolTip1->SetToolTip(arrFur[MainWindow::furCount]->FurName, L"������������");

		arrFur[MainWindow::furCount]->FurCount->Location = System::Drawing::Point(194, MainWindow::currentFurnituraY + 23 + MainWindow::furCount * 30);
		arrFur[MainWindow::furCount]->FurCount->Size = System::Drawing::Size(92, 24);
		arrFur[MainWindow::furCount]->FurCount->Name = L"textFurCountBox" + MainWindow::doorCount.ToString();
		arrFur[MainWindow::furCount]->FurCount->TabIndex = MainWindow::furCount;
		MainWindow::toolTip1->SetToolTip(arrFur[MainWindow::furCount]->FurCount, L"����������");

		arrFur[MainWindow::furCount]->FurPrice->Location = System::Drawing::Point(293, MainWindow::currentFurnituraY + 23 + MainWindow::furCount * 30);
		arrFur[MainWindow::furCount]->FurPrice->Size = System::Drawing::Size(85, 24);
		arrFur[MainWindow::furCount]->FurPrice->Name = L"textFurPriceBox" + MainWindow::doorCount.ToString();
		arrFur[MainWindow::furCount]->FurPrice->TabIndex = MainWindow::furCount;
		MainWindow::toolTip1->SetToolTip(arrFur[MainWindow::furCount]->FurPrice, L"���������");
	}
	//�������� �� ������� �� ������ "+" ��� ���������� ����� �����
	void MainWindow::DoorButtonPlus_Click(System::Object^ sender, System::EventArgs^ e){
		MoveComponents(0);
		Door::addDoor();
		Controls->Add(Door::arrDoor[MainWindow::doorCount]->DoorName);
		Controls->Add(Door::arrDoor[MainWindow::doorCount]->DoorSize);
		Controls->Add(Door::arrDoor[MainWindow::doorCount]->DoorColor);
		Controls->Add(Door::arrDoor[MainWindow::doorCount]->DoorCount);
		Controls->Add(Door::arrDoor[MainWindow::doorCount]->DoorPrice);
		doorCount++;
		checkButtonStatus();
	}
	//�������� �� ������� �� ������ "-" ��� �������� ����� �����
	void MainWindow::DoorButtonMinus_Click(System::Object^ sender, System::EventArgs^ e){
		MoveComponents(1);
		doorCount--;
		if (Door::arrDoor[doorCount]) delete Door::arrDoor[doorCount];
		if (Door::arrDoor[doorCount]) Controls->Remove(Door::arrDoor[doorCount]->DoorName);
		if (Door::arrDoor[doorCount]) Controls->Remove(Door::arrDoor[doorCount]->DoorSize);
		if (Door::arrDoor[doorCount]) Controls->Remove(Door::arrDoor[doorCount]->DoorColor);
		if (Door::arrDoor[doorCount]) Controls->Remove(Door::arrDoor[doorCount]->DoorCount);
		if (Door::arrDoor[doorCount]) Controls->Remove(Door::arrDoor[doorCount]->DoorPrice);
		checkButtonStatus();
	}
	//�������� �� ������� �� ������ "+" ��� ���������� ����� ���������
	void MainWindow::FurButtonPlus_Click(System::Object^ sender, System::EventArgs^ e){
		Fur::addFur();
		Controls->Add(Fur::arrFur[MainWindow::furCount]->FurName);
		Controls->Add(Fur::arrFur[MainWindow::furCount]->FurCount);
		Controls->Add(Fur::arrFur[MainWindow::furCount]->FurPrice);
		furCount++;
		checkButtonStatus();
	}
	//�������� �� ������� �� ������ "-" ��� �������� ����� ���������
	void MainWindow::FurButtonMinus_Click(System::Object^ sender, System::EventArgs^ e){
		furCount--;
		if (Fur::arrFur[furCount]) delete Fur::arrFur[furCount];
		if (Fur::arrFur[furCount]) Controls->Remove(Fur::arrFur[furCount]->FurName);
		if (Fur::arrFur[furCount]) Controls->Remove(Fur::arrFur[furCount]->FurCount);
		if (Fur::arrFur[furCount]) Controls->Remove(Fur::arrFur[furCount]->FurPrice);
		checkButtonStatus();
	}
	//�������� �� ������� ������ ���������� - �������� ������� Calculate � ��������� ����� ��� ������
	Void MainWindow::Calculate_Click(System::Object^ sender, System::EventArgs^ e){
		Calculate();
		PrintForm^ printForm = gcnew PrintForm();
		printForm->enterText();
		printForm->ShowDialog();
	}
	//��������� � ���������� ������ "+" � "-" ��� ������ � ���������
	void MainWindow::checkButtonStatus(){
		if (doorCount > 0) { DoorButtonMinus->Enabled = true; }
		else { DoorButtonMinus->Enabled = false; }
		if (doorCount > arrSize - 1) { DoorButtonPlus->Enabled = false; }
		else { DoorButtonPlus->Enabled = true; }
		if (furCount > 0) { FurButtonMinus->Enabled = true; }
		else { FurButtonMinus->Enabled = false; }
		if (furCount > arrSize - 1) { FurButtonPlus->Enabled = false; }
		else { FurButtonPlus->Enabled = true; }
	}
	//������� ��� ������ ����� ���������, 0 - ����, ������ �������� - �����
	void MainWindow::MoveComponents(int direction) {
		int offset;
		if (direction == 0)
			offset = 30;
		else
			offset = -30;

		this->FurLable->Location = System::Drawing::Point(13, currentFurnituraY += offset);
		this->FurButtonPlus->Location = System::Drawing::Point(95, currentFurnituraY);
		this->FurButtonMinus->Location = System::Drawing::Point(124, currentFurnituraY);
		for (int i = 0; i < arrSize; i++)
		{
			if (Fur::arrFur[i] != nullptr) {
				Fur::arrFur[i]->FurName->Location = System::Drawing::Point(13, (currentFurnituraY + 23 + i * 30));
				Fur::arrFur[i]->FurCount->Location = System::Drawing::Point(194, (currentFurnituraY + 23 + i * 30));
				Fur::arrFur[i]->FurPrice->Location = System::Drawing::Point(293, (currentFurnituraY + 23 + i * 30));
			}
		}
	}
	//������� �������� �������� ���������
	void MainWindow::Calculate(){
		double DoorPrice = 0, FurPrice = 0, KorPrice = 0, NalPrice = 0,
			DoborPrice = 0, PodPrice = 0, MonPrice = 0, DosPrice = 0, Sum = 0, Skidka = 0, Result = 0;

		for (int i = 0; i < arrSize; i++) {
			if (Door::arrDoor[i] != nullptr) {
				int count, price;
				if (Int32::TryParse(Door::arrDoor[i]->DoorCount->Text, count) && Int32::TryParse(Door::arrDoor[i]->DoorPrice->Text, price)) {
					String^ size = Door::arrDoor[i]->DoorSize->Text;

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

		for (int i = 0; i < arrSize; i++) {
			if (Fur::arrFur[i] != nullptr) {
				int count, price;
				if (Int32::TryParse(Fur::arrFur[i]->FurCount->Text, count) && Int32::TryParse(Fur::arrFur[i]->FurPrice->Text, price)) {
					FurPrice += count * price;
				}
			}
		}

		int tb1, tb2, tb3, tb4, tb5, tb6, tb7, tb10, tb11, tb12;
		Int32::TryParse(KorVolBox->Text, tb1);
		Int32::TryParse(KorPriceBox->Text, tb2);
		Int32::TryParse(NalVolBox->Text, tb3);
		Int32::TryParse(NalPriceBox->Text, tb4);
		Int32::TryParse(DobVolBox->Text, tb5);
		Int32::TryParse(DobPriceBox->Text, tb6);
		Int32::TryParse(PodVolBox->Text, tb7);
		Int32::TryParse(PodPriceBox->Text, tb10);
		Int32::TryParse(MonPriceBox->Text, tb11);
		Int32::TryParse(DosPriceBox->Text, tb12);

		if (KorComboBox->Text == "+30%")
			KorPrice = tb1 * (tb2 * 1.3);
		else if (KorComboBox->Text == "+40%")
			KorPrice = tb1 * (tb2 * 1.4);
		else if (KorComboBox->Text == "+50%")
			KorPrice = tb1 * (tb2 * 1.5);
		else
			KorPrice = tb1 * tb2;

		if (NalComboBox->Text == "+30%")
			NalPrice = tb3 * (tb4 * 1.3);
		else if (NalComboBox->Text == "+40%")
			NalPrice = tb3 * (tb4 * 1.4);
		else if (NalComboBox->Text == "+50%")
			NalPrice = tb3 * (tb4 * 1.5);
		else
			NalPrice = tb3 * tb4;

		if (DobComboBox->Text == "+30%")
			DoborPrice = tb5 * (tb6 * 1.3);
		else if (DobComboBox->Text == "+40%")
			DoborPrice = tb5 * (tb6 * 1.4);
		else if (DobComboBox->Text == "+50%")
			DoborPrice = tb5 * (tb6 * 1.5);
		else
			DoborPrice = tb5 * tb6;

		PodPrice = tb7 * tb10;
		MonPrice = tb11;
		DosPrice = tb12;
		Sum = DoorPrice + FurPrice + KorPrice + NalPrice + DoborPrice + PodPrice + MonPrice + DosPrice;
		if (comboBox4->Text == "5%") {
			Skidka = (Sum * 5) / 100;
		}
		else if (comboBox4->Text == "7%") {
			Skidka = (Sum * 7) / 100;
		}
		else if (comboBox4->Text == "10%") {
			Skidka = (Sum * 10) / 100;
		}
		else
			Skidka = 0;
		Result = Sum - Skidka;

		this->textBox8->Text = Sum.ToString() + " ���.";
		this->textBox9->Text = Skidka.ToString() + " ���.";
		this->TotalAmountBox->Text = Result.ToString() + " ���.";
	}
}
