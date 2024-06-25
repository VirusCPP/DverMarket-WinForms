#include "MainWindow.h"
#include "PrintForm.h"

namespace DverMarketWinForms {
	void MainWindow::InitializeComponent(void) {
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
		this->PrintButton = (gcnew System::Windows::Forms::Button());
		this->SuspendLayout();
		// 
		// DoorLable
		// 
		this->DoorLable->AutoSize = true;
		this->DoorLable->Location = System::Drawing::Point(13, 10);
		this->DoorLable->Name = L"DoorLable";
		this->DoorLable->Size = System::Drawing::Size(47, 16);
		this->DoorLable->TabIndex = 0;
		this->DoorLable->Text = L"Дверь";
		// 
		// DoorButtonPlus
		// 
		this->DoorButtonPlus->Location = System::Drawing::Point(95, 10);
		this->DoorButtonPlus->Name = L"DoorButtonPlus";
		this->DoorButtonPlus->Size = System::Drawing::Size(23, 23);
		this->DoorButtonPlus->TabIndex = 1;
		this->DoorButtonPlus->Text = L"+";
		this->DoorButtonPlus->UseVisualStyleBackColor = true;
		this->DoorButtonPlus->Click += gcnew System::EventHandler(this, &MainWindow::DoorButtonPlus_Click);
		// 
		// DoorButtonMinus
		// 
		this->DoorButtonMinus->Location = System::Drawing::Point(124, 10);
		this->DoorButtonMinus->Name = L"DoorButtonMinus";
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
		// KorVolBox
		// 
		this->KorVolBox->Location = System::Drawing::Point(566, 64);
		this->KorVolBox->Name = L"KorVolBox";
		this->KorVolBox->Size = System::Drawing::Size(59, 22);
		this->KorVolBox->TabIndex = 3;
		this->toolTip1->SetToolTip(this->KorVolBox, L"Количество");
		this->KorVolBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWindow::textBox_KeyPress);
		// 
		// KorPriceBox
		// 
		this->KorPriceBox->Location = System::Drawing::Point(625, 64);
		this->KorPriceBox->Name = L"KorPriceBox";
		this->KorPriceBox->Size = System::Drawing::Size(59, 22);
		this->KorPriceBox->TabIndex = 4;
		this->toolTip1->SetToolTip(this->KorPriceBox, L"Стоимость");
		this->KorPriceBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWindow::textBox_KeyPress);
		// 
		// NalPriceBox
		// 
		this->NalPriceBox->Location = System::Drawing::Point(751, 64);
		this->NalPriceBox->Name = L"NalPriceBox";
		this->NalPriceBox->Size = System::Drawing::Size(59, 22);
		this->NalPriceBox->TabIndex = 4;
		this->toolTip1->SetToolTip(this->NalPriceBox, L"Стоимость");
		this->NalPriceBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWindow::textBox_KeyPress);
		// 
		// NalVolBox
		// 
		this->NalVolBox->Location = System::Drawing::Point(692, 64);
		this->NalVolBox->Name = L"NalVolBox";
		this->NalVolBox->Size = System::Drawing::Size(59, 22);
		this->NalVolBox->TabIndex = 3;
		this->toolTip1->SetToolTip(this->NalVolBox, L"Количество");
		this->NalVolBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWindow::textBox_KeyPress);
		// 
		// DobVolBox
		// 
		this->DobVolBox->Location = System::Drawing::Point(832, 64);
		this->DobVolBox->Name = L"DobVolBox";
		this->DobVolBox->Size = System::Drawing::Size(59, 22);
		this->DobVolBox->TabIndex = 3;
		this->toolTip1->SetToolTip(this->DobVolBox, L"Количество");
		this->DobVolBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWindow::textBox_KeyPress);
		// 
		// DobPriceBox
		// 
		this->DobPriceBox->Location = System::Drawing::Point(891, 64);
		this->DobPriceBox->Name = L"DobPriceBox";
		this->DobPriceBox->Size = System::Drawing::Size(59, 22);
		this->DobPriceBox->TabIndex = 4;
		this->toolTip1->SetToolTip(this->DobPriceBox, L"Стоимость");
		this->DobPriceBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWindow::textBox_KeyPress);
		// 
		// PodVolBox
		// 
		this->PodVolBox->Location = System::Drawing::Point(566, 122);
		this->PodVolBox->Name = L"PodVolBox";
		this->PodVolBox->Size = System::Drawing::Size(59, 22);
		this->PodVolBox->TabIndex = 3;
		this->toolTip1->SetToolTip(this->PodVolBox, L"Этаж");
		this->PodVolBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWindow::textBox_KeyPress);
		// 
		// PodPriceBox
		// 
		this->PodPriceBox->Location = System::Drawing::Point(625, 122);
		this->PodPriceBox->Name = L"PodPriceBox";
		this->PodPriceBox->Size = System::Drawing::Size(59, 22);
		this->PodPriceBox->TabIndex = 4;
		this->toolTip1->SetToolTip(this->PodPriceBox, L"Стоимость");
		this->PodPriceBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWindow::textBox_KeyPress);
		// 
		// MonPriceBox
		// 
		this->MonPriceBox->Location = System::Drawing::Point(692, 122);
		this->MonPriceBox->Name = L"MonPriceBox";
		this->MonPriceBox->Size = System::Drawing::Size(118, 22);
		this->MonPriceBox->TabIndex = 4;
		this->toolTip1->SetToolTip(this->MonPriceBox, L"Стоимость");
		this->MonPriceBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWindow::textBox_KeyPress);
		// 
		// DosPriceBox
		// 
		this->DosPriceBox->Location = System::Drawing::Point(832, 122);
		this->DosPriceBox->Name = L"DosPriceBox";
		this->DosPriceBox->Size = System::Drawing::Size(118, 22);
		this->DosPriceBox->TabIndex = 4;
		this->toolTip1->SetToolTip(this->DosPriceBox, L"Стоимость");
		this->DosPriceBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWindow::textBox_KeyPress);
		// 
		// KorLable
		// 
		this->KorLable->AutoSize = true;
		this->KorLable->Location = System::Drawing::Point(563, 13);
		this->KorLable->Name = L"KorLable";
		this->KorLable->Size = System::Drawing::Size(62, 16);
		this->KorLable->TabIndex = 0;
		this->KorLable->Text = L"Коробка";
		// 
		// NalLable
		// 
		this->NalLable->AutoSize = true;
		this->NalLable->Location = System::Drawing::Point(689, 13);
		this->NalLable->Name = L"NalLable";
		this->NalLable->Size = System::Drawing::Size(72, 16);
		this->NalLable->TabIndex = 0;
		this->NalLable->Text = L"Наличник";
		// 
		// DobLable
		// 
		this->DobLable->AutoSize = true;
		this->DobLable->Location = System::Drawing::Point(829, 13);
		this->DobLable->Name = L"DobLable";
		this->DobLable->Size = System::Drawing::Size(48, 16);
		this->DobLable->TabIndex = 0;
		this->DobLable->Text = L"Добор";
		// 
		// KorComboBox
		// 
		this->KorComboBox->FormattingEnabled = true;
		this->KorComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"стандарт", L"+30%", L"+40%", L"+50%" });
		this->KorComboBox->Location = System::Drawing::Point(566, 33);
		this->KorComboBox->Name = L"KorComboBox";
		this->KorComboBox->Size = System::Drawing::Size(118, 24);
		this->KorComboBox->TabIndex = 2;
		this->KorComboBox->Text = L"Размер";
		// 
		// NalComboBox
		// 
		this->NalComboBox->FormattingEnabled = true;
		this->NalComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"стандарт", L"+30%", L"+40%", L"+50%" });
		this->NalComboBox->Location = System::Drawing::Point(692, 33);
		this->NalComboBox->Name = L"NalComboBox";
		this->NalComboBox->Size = System::Drawing::Size(118, 24);
		this->NalComboBox->TabIndex = 2;
		this->NalComboBox->Text = L"Размер";
		// 
		// DobComboBox
		// 
		this->DobComboBox->FormattingEnabled = true;
		this->DobComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"стандарт", L"+30%", L"+40%", L"+50%" });
		this->DobComboBox->Location = System::Drawing::Point(832, 33);
		this->DobComboBox->Name = L"DobComboBox";
		this->DobComboBox->Size = System::Drawing::Size(118, 24);
		this->DobComboBox->TabIndex = 2;
		this->DobComboBox->Text = L"Размер";
		// 
		// FurLable
		// 
		this->FurLable->AutoSize = true;
		this->FurLable->Location = System::Drawing::Point(13, 41);
		this->FurLable->Name = L"FurLable";
		this->FurLable->Size = System::Drawing::Size(81, 16);
		this->FurLable->TabIndex = 0;
		this->FurLable->Text = L"Фурнитура";
		// 
		// FurButtonPlus
		// 
		this->FurButtonPlus->Location = System::Drawing::Point(95, 41);
		this->FurButtonPlus->Name = L"FurButtonPlus";
		this->FurButtonPlus->Size = System::Drawing::Size(23, 23);
		this->FurButtonPlus->TabIndex = 1;
		this->FurButtonPlus->Text = L"+";
		this->FurButtonPlus->UseVisualStyleBackColor = true;
		this->FurButtonPlus->Click += gcnew System::EventHandler(this, &MainWindow::FurButtonPlus_Click);
		// 
		// FurButtonMinus
		// 
		this->FurButtonMinus->Location = System::Drawing::Point(124, 41);
		this->FurButtonMinus->Name = L"FurButtonMinus";
		this->FurButtonMinus->Size = System::Drawing::Size(23, 23);
		this->FurButtonMinus->TabIndex = 1;
		this->FurButtonMinus->Text = L"-";
		this->FurButtonMinus->UseVisualStyleBackColor = true;
		this->FurButtonMinus->Click += gcnew System::EventHandler(this, &MainWindow::FurButtonMinus_Click);
		// 
		// PodLable
		// 
		this->PodLable->AutoSize = true;
		this->PodLable->Location = System::Drawing::Point(563, 99);
		this->PodLable->Name = L"PodLable";
		this->PodLable->Size = System::Drawing::Size(59, 16);
		this->PodLable->TabIndex = 0;
		this->PodLable->Text = L"Подъем";
		// 
		// MonLable
		// 
		this->MonLable->AutoSize = true;
		this->MonLable->Location = System::Drawing::Point(689, 99);
		this->MonLable->Name = L"MonLable";
		this->MonLable->Size = System::Drawing::Size(58, 16);
		this->MonLable->TabIndex = 0;
		this->MonLable->Text = L"Монтаж";
		// 
		// DosLable
		// 
		this->DosLable->AutoSize = true;
		this->DosLable->Location = System::Drawing::Point(829, 99);
		this->DosLable->Name = L"DosLable";
		this->DosLable->Size = System::Drawing::Size(69, 16);
		this->DosLable->TabIndex = 0;
		this->DosLable->Text = L"Доставка";
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
		// TotalAmountLable
		// 
		this->TotalAmountLable->Location = System::Drawing::Point(566, 432);
		this->TotalAmountLable->Name = L"TotalAmountLable";
		this->TotalAmountLable->Size = System::Drawing::Size(384, 38);
		this->TotalAmountLable->TabIndex = 7;
		this->TotalAmountLable->Text = L"ИТОГОВАЯ СУММА";
		this->TotalAmountLable->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// TotalAmountBox
		// 
		this->TotalAmountBox->Location = System::Drawing::Point(566, 470);
		this->TotalAmountBox->Name = L"TotalAmountBox";
		this->TotalAmountBox->Size = System::Drawing::Size(384, 33);
		this->TotalAmountBox->TabIndex = 7;
		this->TotalAmountBox->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// CalculateButton
		// 
		this->CalculateButton->Location = System::Drawing::Point(566, 506);
		this->CalculateButton->Name = L"CalculateButton";
		this->CalculateButton->Size = System::Drawing::Size(384, 23);
		this->CalculateButton->TabIndex = 8;
		this->CalculateButton->Text = L"Рассчитать";
		this->CalculateButton->UseVisualStyleBackColor = true;
		this->CalculateButton->Click += gcnew System::EventHandler(this, &MainWindow::Calculate_Click);
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
		this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"без скидки", L"5%", L"7%", L"10%" });
		this->comboBox4->Location = System::Drawing::Point(662, 173);
		this->comboBox4->Name = L"comboBox4";
		this->comboBox4->Size = System::Drawing::Size(108, 24);
		this->comboBox4->TabIndex = 11;
		this->comboBox4->Text = L"без скидки";
		// 
		// label10
		// 
		this->label10->AutoSize = true;
		this->label10->Location = System::Drawing::Point(566, 402);
		this->label10->Name = L"label10";
		this->label10->Size = System::Drawing::Size(93, 16);
		this->label10->TabIndex = 12;
		this->label10->Text = L"Общая сумма";
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
		this->label14->Text = L"Сумма скидки";
		// 
		// textBox9
		// 
		this->textBox9->Location = System::Drawing::Point(872, 402);
		this->textBox9->Name = L"textBox9";
		this->textBox9->ReadOnly = true;
		this->textBox9->Size = System::Drawing::Size(77, 22);
		this->textBox9->TabIndex = 13;
		// 
		// PrintButton
		// 
		this->PrintButton->Location = System::Drawing::Point(566, 551);
		this->PrintButton->Name = L"PrintButton";
		this->PrintButton->Size = System::Drawing::Size(384, 23);
		this->PrintButton->TabIndex = 8;
		this->PrintButton->Text = L"Распечатать";
		this->PrintButton->UseVisualStyleBackColor = true;
		this->PrintButton->Click += gcnew System::EventHandler(this, &MainWindow::PrintButton_Click);
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
		this->Controls->Add(this->PrintButton);
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
		this->Text = L"ДверМаркет    " + "версия: " + version;
		this->ResumeLayout(false);
		this->PerformLayout();

	}

	void PrintForm::InitializeComponent(void)
	{
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PrintForm::typeid));
		this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
		this->textBox2 = (gcnew System::Windows::Forms::TextBox());
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
		this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
		this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
		this->SuspendLayout();
		// 
		// textBox1
		// 
		this->textBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
		this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->textBox1->Cursor = System::Windows::Forms::Cursors::Default;
		this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->textBox1->Location = System::Drawing::Point(12, 151);
		this->textBox1->Multiline = true;
		this->textBox1->Name = L"textBox1";
		this->textBox1->ReadOnly = true;
		this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
		this->textBox1->Size = System::Drawing::Size(721, 789);
		this->textBox1->TabIndex = 10;
		// 
		// pictureBox1
		// 
		this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
		this->pictureBox1->Location = System::Drawing::Point(12, 46);
		this->pictureBox1->Name = L"pictureBox1";
		this->pictureBox1->Size = System::Drawing::Size(297, 84);
		this->pictureBox1->TabIndex = 1;
		this->pictureBox1->TabStop = false;
		// 
		// textBox2
		// 
		this->textBox2->BackColor = System::Drawing::SystemColors::ControlLightLight;
		this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->textBox2->Cursor = System::Windows::Forms::Cursors::Default;
		this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->textBox2->Location = System::Drawing::Point(315, 46);
		this->textBox2->Multiline = true;
		this->textBox2->Name = L"textBox2";
		this->textBox2->ReadOnly = true;
		this->textBox2->Size = System::Drawing::Size(351, 104);
		this->textBox2->TabIndex = 2;
		this->textBox2->Text = resources->GetString(L"textBox2.Text");
		// 
		// button1
		// 
		this->button1->Location = System::Drawing::Point(12, 7);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(70, 22);
		this->button1->TabIndex = 0;
		this->button1->Text = L"Печать";
		this->button1->UseVisualStyleBackColor = true;
		this->button1->Click += gcnew System::EventHandler(this, &PrintForm::printButton_Click);
		// 
		// printDocument1
		// 
		this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &PrintForm::printDocument_PrintPage);
		// 
		// printPreviewDialog1
		// 
		this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
		this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
		this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
		this->printPreviewDialog1->Document = this->printDocument1;
		this->printPreviewDialog1->Enabled = true;
		this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
		this->printPreviewDialog1->Name = L"printPreviewDialog1";
		this->printPreviewDialog1->Visible = false;
		// 
		// printDialog1
		// 
		this->printDialog1->UseEXDialog = true;
		// 
		// PrintForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::SystemColors::ControlLightLight;
		this->ClientSize = System::Drawing::Size(773, 969);
		this->Controls->Add(this->button1);
		this->Controls->Add(this->textBox2);
		this->Controls->Add(this->pictureBox1);
		this->Controls->Add(this->textBox1);
		this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
		this->MaximumSize = System::Drawing::Size(1240, 1008);
		this->Name = L"PrintForm";
		this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		this->Text = L"Форма Печати";
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
		this->ResumeLayout(false);
		this->PerformLayout();
	}
}