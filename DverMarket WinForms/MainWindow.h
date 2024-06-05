#pragma once

namespace DverMarketWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	static int curretRuchkaY = 41;
	static int curretPetliY = 70;
	static int curretZasY = 70 + 29;
	static int curretZadY = 70 + 29 + 29;
	static int curretZamY = 70 + 29 + 29 + 29;
	static int curretRigY = 70 + 29 + 29 + 29 + 29;
	static int curretFurY = 70 + 29 + 29 + 29 + 29 + 29;


	public ref class MainWindow : public System::Windows::Forms::Form
	{
		
	public:
		
		MainWindow(void)
		{
			
			InitializeComponent();
			checkButtonStatus();
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
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button9;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button8;



	private: System::Windows::Forms::Button^ button10;


	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox7;


	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;


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
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->button6 = (gcnew System::Windows::Forms::Button());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->button7 = (gcnew System::Windows::Forms::Button());
			   this->button9 = (gcnew System::Windows::Forms::Button());
			   this->button11 = (gcnew System::Windows::Forms::Button());
			   this->button8 = (gcnew System::Windows::Forms::Button());
			   this->button10 = (gcnew System::Windows::Forms::Button());
			   this->button12 = (gcnew System::Windows::Forms::Button());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->button13 = (gcnew System::Windows::Forms::Button());
			   this->button14 = (gcnew System::Windows::Forms::Button());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->label12 = (gcnew System::Windows::Forms::Label());
			   this->label13 = (gcnew System::Windows::Forms::Label());
			   this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			   this->label14 = (gcnew System::Windows::Forms::Label());
			   this->button15 = (gcnew System::Windows::Forms::Button());
			   this->button16 = (gcnew System::Windows::Forms::Button());
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
			   this->label5->Size = System::Drawing::Size(47, 16);
			   this->label5->TabIndex = 0;
			   this->label5->Text = L"Ручка";
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
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Location = System::Drawing::Point(13, 70);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(48, 16);
			   this->label6->TabIndex = 0;
			   this->label6->Text = L"Петли";
			   // 
			   // button5
			   // 
			   this->button5->Location = System::Drawing::Point(95, 70);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(23, 23);
			   this->button5->TabIndex = 1;
			   this->button5->Text = L"+";
			   this->button5->UseVisualStyleBackColor = true;
			   this->button5->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			   // 
			   // button6
			   // 
			   this->button6->Location = System::Drawing::Point(124, 70);
			   this->button6->Name = L"button6";
			   this->button6->Size = System::Drawing::Size(23, 23);
			   this->button6->TabIndex = 1;
			   this->button6->Text = L"-";
			   this->button6->UseVisualStyleBackColor = true;
			   this->button6->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Location = System::Drawing::Point(13, 99);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(64, 16);
			   this->label7->TabIndex = 0;
			   this->label7->Text = L"Защелка";
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Location = System::Drawing::Point(13, 128);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(72, 16);
			   this->label8->TabIndex = 0;
			   this->label8->Text = L"Задвижка";
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Location = System::Drawing::Point(13, 157);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(48, 16);
			   this->label9->TabIndex = 0;
			   this->label9->Text = L"Замок";
			   // 
			   // button7
			   // 
			   this->button7->Location = System::Drawing::Point(95, 99);
			   this->button7->Name = L"button7";
			   this->button7->Size = System::Drawing::Size(23, 23);
			   this->button7->TabIndex = 1;
			   this->button7->Text = L"+";
			   this->button7->UseVisualStyleBackColor = true;
			   this->button7->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			   // 
			   // button9
			   // 
			   this->button9->Location = System::Drawing::Point(95, 128);
			   this->button9->Name = L"button9";
			   this->button9->Size = System::Drawing::Size(23, 23);
			   this->button9->TabIndex = 1;
			   this->button9->Text = L"+";
			   this->button9->UseVisualStyleBackColor = true;
			   this->button9->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			   // 
			   // button11
			   // 
			   this->button11->Location = System::Drawing::Point(95, 157);
			   this->button11->Name = L"button11";
			   this->button11->Size = System::Drawing::Size(23, 23);
			   this->button11->TabIndex = 1;
			   this->button11->Text = L"+";
			   this->button11->UseVisualStyleBackColor = true;
			   this->button11->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			   // 
			   // button8
			   // 
			   this->button8->Location = System::Drawing::Point(124, 99);
			   this->button8->Name = L"button8";
			   this->button8->Size = System::Drawing::Size(23, 23);
			   this->button8->TabIndex = 1;
			   this->button8->Text = L"-";
			   this->button8->UseVisualStyleBackColor = true;
			   this->button8->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			   // 
			   // button10
			   // 
			   this->button10->Location = System::Drawing::Point(124, 128);
			   this->button10->Name = L"button10";
			   this->button10->Size = System::Drawing::Size(23, 23);
			   this->button10->TabIndex = 1;
			   this->button10->Text = L"-";
			   this->button10->UseVisualStyleBackColor = true;
			   this->button10->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			   // 
			   // button12
			   // 
			   this->button12->Location = System::Drawing::Point(124, 157);
			   this->button12->Name = L"button12";
			   this->button12->Size = System::Drawing::Size(23, 23);
			   this->button12->TabIndex = 1;
			   this->button12->Text = L"-";
			   this->button12->UseVisualStyleBackColor = true;
			   this->button12->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->Location = System::Drawing::Point(13, 186);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(53, 16);
			   this->label10->TabIndex = 0;
			   this->label10->Text = L"Ригель";
			   // 
			   // button13
			   // 
			   this->button13->Location = System::Drawing::Point(95, 186);
			   this->button13->Name = L"button13";
			   this->button13->Size = System::Drawing::Size(23, 23);
			   this->button13->TabIndex = 1;
			   this->button13->Text = L"+";
			   this->button13->UseVisualStyleBackColor = true;
			   this->button13->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			   // 
			   // button14
			   // 
			   this->button14->Location = System::Drawing::Point(124, 186);
			   this->button14->Name = L"button14";
			   this->button14->Size = System::Drawing::Size(23, 23);
			   this->button14->TabIndex = 1;
			   this->button14->Text = L"-";
			   this->button14->UseVisualStyleBackColor = true;
			   this->button14->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
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
			   // label14
			   // 
			   this->label14->AutoSize = true;
			   this->label14->Location = System::Drawing::Point(13, 215);
			   this->label14->Name = L"label14";
			   this->label14->Size = System::Drawing::Size(81, 16);
			   this->label14->TabIndex = 0;
			   this->label14->Text = L"Фурнитура";
			   // 
			   // button15
			   // 
			   this->button15->Location = System::Drawing::Point(95, 215);
			   this->button15->Name = L"button15";
			   this->button15->Size = System::Drawing::Size(23, 23);
			   this->button15->TabIndex = 1;
			   this->button15->Text = L"+";
			   this->button15->UseVisualStyleBackColor = true;
			   this->button15->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			   // 
			   // button16
			   // 
			   this->button16->Location = System::Drawing::Point(124, 215);
			   this->button16->Name = L"button16";
			   this->button16->Size = System::Drawing::Size(23, 23);
			   this->button16->TabIndex = 1;
			   this->button16->Text = L"-";
			   this->button16->UseVisualStyleBackColor = true;
			   this->button16->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			   // 
			   // MainWindow
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(970, 794);
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
			   this->Controls->Add(this->button16);
			   this->Controls->Add(this->button14);
			   this->Controls->Add(this->button12);
			   this->Controls->Add(this->button6);
			   this->Controls->Add(this->button10);
			   this->Controls->Add(this->button4);
			   this->Controls->Add(this->button8);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button15);
			   this->Controls->Add(this->button13);
			   this->Controls->Add(this->button11);
			   this->Controls->Add(this->button5);
			   this->Controls->Add(this->button9);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->button7);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->label13);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->label12);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label11);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label14);
			   this->Controls->Add(this->label10);
			   this->Controls->Add(this->label9);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->label8);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->label7);
			   this->Controls->Add(this->label1);
			   this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->Margin = System::Windows::Forms::Padding(4);
			   this->Name = L"MainWindow";
			   this->Text = L"MainWindow";
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
		   int doorCount = 0;
		   array <TextBox^>^ tbDoor = gcnew array<TextBox^>(4);
		   array <ComboBox^>^ cbSize = gcnew array<ComboBox^>(4);
		   array <TextBox^>^ tbColor = gcnew array<TextBox^>(4);
		   array <TextBox^>^ tbCount = gcnew array<TextBox^>(4);
		   array <TextBox^>^ tbPrice = gcnew array<TextBox^>(4);
		   int petliCount = 0;
		   array <TextBox^>^ tbPetliName = gcnew array<TextBox^>(4);
		   array <TextBox^>^ tbPetliCount = gcnew array<TextBox^>(4);
		   array <TextBox^>^ tbPetliPrice = gcnew array<TextBox^>(4);
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		MoveCompsDown(1);
			tbPetliName[petliCount] = gcnew TextBox();
			tbPetliName[petliCount]->Location = System::Drawing::Point(13, curretRuchkaY + 23 + petliCount * 30);
			tbPetliName[petliCount]->Size = System::Drawing::Size(175, 24);
			tbPetliName[petliCount]->TabIndex = petliCount;
			this->toolTip1->SetToolTip(tbPetliName[petliCount], L"Наименование");
			Controls->Add(tbPetliName[petliCount]);

			tbPetliCount[petliCount] = gcnew TextBox();
			tbPetliCount[petliCount]->Location = System::Drawing::Point(194, curretRuchkaY + 23 + petliCount * 30);
			tbPetliCount[petliCount]->Size = System::Drawing::Size(92, 24);
			tbPetliCount[petliCount]->TabIndex = petliCount;
			this->toolTip1->SetToolTip(tbPetliCount[petliCount], L"Количество");
			Controls->Add(tbPetliCount[petliCount]);


			tbPetliPrice[petliCount] = gcnew TextBox();
			tbPetliPrice[petliCount]->Location = System::Drawing::Point(293, curretRuchkaY + 23 + petliCount * 30);
			tbPetliPrice[petliCount]->Size = System::Drawing::Size(85, 24);
			tbPetliPrice[petliCount]->TabIndex = petliCount;
			this->toolTip1->SetToolTip(tbPetliPrice[petliCount], L"Стоимость");
			Controls->Add(tbPetliPrice[petliCount]);
			petliCount++;
			if (petliCount > 0) { button4->Enabled = true; }
			else { button4->Enabled = false; }
			if (petliCount > 3) { button3->Enabled = false; }
			else { button3->Enabled = true; }

	}
		   private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			   MoveCompsUp(1);
			   Controls->Remove(tbPetliName[petliCount - 1]);
			   delete tbPetliName[petliCount - 1];
			   Controls->Remove(tbPetliCount[petliCount - 1]);
			   delete tbPetliCount[petliCount - 1];
			   Controls->Remove(tbPetliPrice[petliCount - 1]);
			   delete tbPetliPrice[petliCount - 1];
			   
			   petliCount--;
			   if (petliCount > 0) { button4->Enabled = true; }
			   else { button4->Enabled = false; }
			   if (petliCount > 3) { button3->Enabled = false; }
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
			   if (doorCount > 3) { button1->Enabled = false; }
			   else { button1->Enabled = true; }
	}
	
	void MoveCompsDown(int index) {
		if (index == 0) {
			this->label5->Location = System::Drawing::Point(13, curretRuchkaY += 30);
			this->button3->Location = System::Drawing::Point(95, curretRuchkaY);
			this->button4->Location = System::Drawing::Point(124, curretRuchkaY);

			this->label6->Location = System::Drawing::Point(13, curretPetliY += 30);
			this->button5->Location = System::Drawing::Point(95, curretPetliY);
			this->button6->Location = System::Drawing::Point(124, curretPetliY);

			this->label7->Location = System::Drawing::Point(13, curretZasY += 30);
			this->button7->Location = System::Drawing::Point(95, curretZasY);
			this->button8->Location = System::Drawing::Point(124, curretZasY);

			this->label8->Location = System::Drawing::Point(13, curretZadY += 30);
			this->button9->Location = System::Drawing::Point(95, curretZadY);
			this->button10->Location = System::Drawing::Point(124, curretZadY);

			this->label9->Location = System::Drawing::Point(13, curretZamY += 30);
			this->button11->Location = System::Drawing::Point(95, curretZamY);
			this->button12->Location = System::Drawing::Point(124, curretZamY);

			this->label10->Location = System::Drawing::Point(13, curretRigY += 30);
			this->button13->Location = System::Drawing::Point(95, curretRigY);
			this->button14->Location = System::Drawing::Point(124, curretRigY);

			this->label14->Location = System::Drawing::Point(13, curretFurY += 30);
			this->button15->Location = System::Drawing::Point(95, curretFurY);
			this->button16->Location = System::Drawing::Point(124, curretFurY);
		}
		else if (index == 1) {

			this->label6->Location = System::Drawing::Point(13, curretPetliY += 30);
			this->button5->Location = System::Drawing::Point(95, curretPetliY);
			this->button6->Location = System::Drawing::Point(124, curretPetliY);

			this->label7->Location = System::Drawing::Point(13, curretZasY += 30);
			this->button7->Location = System::Drawing::Point(95, curretZasY);
			this->button8->Location = System::Drawing::Point(124, curretZasY);

			this->label8->Location = System::Drawing::Point(13, curretZadY += 30);
			this->button9->Location = System::Drawing::Point(95, curretZadY);
			this->button10->Location = System::Drawing::Point(124, curretZadY);

			this->label9->Location = System::Drawing::Point(13, curretZamY += 30);
			this->button11->Location = System::Drawing::Point(95, curretZamY);
			this->button12->Location = System::Drawing::Point(124, curretZamY);

			this->label10->Location = System::Drawing::Point(13, curretRigY += 30);
			this->button13->Location = System::Drawing::Point(95, curretRigY);
			this->button14->Location = System::Drawing::Point(124, curretRigY);

			this->label14->Location = System::Drawing::Point(13, curretFurY += 30);
			this->button15->Location = System::Drawing::Point(95, curretFurY);
			this->button16->Location = System::Drawing::Point(124, curretFurY);
		}
		else if (index == 2) {

			this->label7->Location = System::Drawing::Point(13, curretZasY += 30);
			this->button7->Location = System::Drawing::Point(95, curretZasY);
			this->button8->Location = System::Drawing::Point(124, curretZasY);

			this->label8->Location = System::Drawing::Point(13, curretZadY += 30);
			this->button9->Location = System::Drawing::Point(95, curretZadY);
			this->button10->Location = System::Drawing::Point(124, curretZadY);

			this->label9->Location = System::Drawing::Point(13, curretZamY += 30);
			this->button11->Location = System::Drawing::Point(95, curretZamY);
			this->button12->Location = System::Drawing::Point(124, curretZamY);

			this->label10->Location = System::Drawing::Point(13, curretRigY += 30);
			this->button13->Location = System::Drawing::Point(95, curretRigY);
			this->button14->Location = System::Drawing::Point(124, curretRigY);

			this->label14->Location = System::Drawing::Point(13, curretFurY += 30);
			this->button15->Location = System::Drawing::Point(95, curretFurY);
			this->button16->Location = System::Drawing::Point(124, curretFurY);
		}
		else if (index == 3) {

			this->label8->Location = System::Drawing::Point(13, curretZadY += 30);
			this->button9->Location = System::Drawing::Point(95, curretZadY);
			this->button10->Location = System::Drawing::Point(124, curretZadY);

			this->label9->Location = System::Drawing::Point(13, curretZamY += 30);
			this->button11->Location = System::Drawing::Point(95, curretZamY);
			this->button12->Location = System::Drawing::Point(124, curretZamY);

			this->label10->Location = System::Drawing::Point(13, curretRigY += 30);
			this->button13->Location = System::Drawing::Point(95, curretRigY);
			this->button14->Location = System::Drawing::Point(124, curretRigY);

			this->label14->Location = System::Drawing::Point(13, curretFurY += 30);
			this->button15->Location = System::Drawing::Point(95, curretFurY);
			this->button16->Location = System::Drawing::Point(124, curretFurY);
		}
		else if (index == 4) {

			this->label9->Location = System::Drawing::Point(13, curretZamY += 30);
			this->button11->Location = System::Drawing::Point(95, curretZamY);
			this->button12->Location = System::Drawing::Point(124, curretZamY);

			this->label10->Location = System::Drawing::Point(13, curretRigY += 30);
			this->button13->Location = System::Drawing::Point(95, curretRigY);
			this->button14->Location = System::Drawing::Point(124, curretRigY);

			this->label14->Location = System::Drawing::Point(13, curretFurY += 30);
			this->button15->Location = System::Drawing::Point(95, curretFurY);
			this->button16->Location = System::Drawing::Point(124, curretFurY);
		}
		else if (index == 5) {

			this->label10->Location = System::Drawing::Point(13, curretRigY += 30);
			this->button13->Location = System::Drawing::Point(95, curretRigY);
			this->button14->Location = System::Drawing::Point(124, curretRigY);

			this->label14->Location = System::Drawing::Point(13, curretFurY += 30);
			this->button15->Location = System::Drawing::Point(95, curretFurY);
			this->button16->Location = System::Drawing::Point(124, curretFurY);
		}
		else if (index == 6) {

			this->label14->Location = System::Drawing::Point(13, curretFurY += 30);
			this->button15->Location = System::Drawing::Point(95, curretFurY);
			this->button16->Location = System::Drawing::Point(124, curretFurY);
		}
	}
	void MoveCompsUp(int index) {
		if (index == 0) {
			this->label5->Location = System::Drawing::Point(13, curretRuchkaY -= 30);
			this->button3->Location = System::Drawing::Point(95, curretRuchkaY);
			this->button4->Location = System::Drawing::Point(124, curretRuchkaY);

			this->label6->Location = System::Drawing::Point(13, curretPetliY -= 30);
			this->button5->Location = System::Drawing::Point(95, curretPetliY);
			this->button6->Location = System::Drawing::Point(124, curretPetliY);

			this->label7->Location = System::Drawing::Point(13, curretZasY -= 30);
			this->button7->Location = System::Drawing::Point(95, curretZasY);
			this->button8->Location = System::Drawing::Point(124, curretZasY);

			this->label8->Location = System::Drawing::Point(13, curretZadY -= 30);
			this->button9->Location = System::Drawing::Point(95, curretZadY);
			this->button10->Location = System::Drawing::Point(124, curretZadY);

			this->label9->Location = System::Drawing::Point(13, curretZamY -= 30);
			this->button11->Location = System::Drawing::Point(95, curretZamY);
			this->button12->Location = System::Drawing::Point(124, curretZamY);

			this->label10->Location = System::Drawing::Point(13, curretRigY -= 30);
			this->button13->Location = System::Drawing::Point(95, curretRigY);
			this->button14->Location = System::Drawing::Point(124, curretRigY);

			this->label14->Location = System::Drawing::Point(13, curretFurY -= 30);
			this->button15->Location = System::Drawing::Point(95, curretFurY);
			this->button16->Location = System::Drawing::Point(124, curretFurY);
		}
		else if (index == 1) {
			
			this->label6->Location = System::Drawing::Point(13, curretPetliY -= 30);
			this->button5->Location = System::Drawing::Point(95, curretPetliY);
			this->button6->Location = System::Drawing::Point(124, curretPetliY);

			this->label7->Location = System::Drawing::Point(13, curretZasY -= 30);
			this->button7->Location = System::Drawing::Point(95, curretZasY);
			this->button8->Location = System::Drawing::Point(124, curretZasY);

			this->label8->Location = System::Drawing::Point(13, curretZadY -= 30);
			this->button9->Location = System::Drawing::Point(95, curretZadY);
			this->button10->Location = System::Drawing::Point(124, curretZadY);

			this->label9->Location = System::Drawing::Point(13, curretZamY -= 30);
			this->button11->Location = System::Drawing::Point(95, curretZamY);
			this->button12->Location = System::Drawing::Point(124, curretZamY);

			this->label10->Location = System::Drawing::Point(13, curretRigY -= 30);
			this->button13->Location = System::Drawing::Point(95, curretRigY);
			this->button14->Location = System::Drawing::Point(124, curretRigY);

			this->label14->Location = System::Drawing::Point(13, curretFurY -= 30);
			this->button15->Location = System::Drawing::Point(95, curretFurY);
			this->button16->Location = System::Drawing::Point(124, curretFurY);
		}
		else if (index == 2) {

			this->label7->Location = System::Drawing::Point(13, curretZasY -= 30);
			this->button7->Location = System::Drawing::Point(95, curretZasY);
			this->button8->Location = System::Drawing::Point(124, curretZasY);

			this->label8->Location = System::Drawing::Point(13, curretZadY -= 30);
			this->button9->Location = System::Drawing::Point(95, curretZadY);
			this->button10->Location = System::Drawing::Point(124, curretZadY);

			this->label9->Location = System::Drawing::Point(13, curretZamY -= 30);
			this->button11->Location = System::Drawing::Point(95, curretZamY);
			this->button12->Location = System::Drawing::Point(124, curretZamY);

			this->label10->Location = System::Drawing::Point(13, curretRigY -= 30);
			this->button13->Location = System::Drawing::Point(95, curretRigY);
			this->button14->Location = System::Drawing::Point(124, curretRigY);

			this->label14->Location = System::Drawing::Point(13, curretFurY -= 30);
			this->button15->Location = System::Drawing::Point(95, curretFurY);
			this->button16->Location = System::Drawing::Point(124, curretFurY);
		}
		else if (index == 3) {

			this->label8->Location = System::Drawing::Point(13, curretZadY -= 30);
			this->button9->Location = System::Drawing::Point(95, curretZadY);
			this->button10->Location = System::Drawing::Point(124, curretZadY);

			this->label9->Location = System::Drawing::Point(13, curretZamY -= 30);
			this->button11->Location = System::Drawing::Point(95, curretZamY);
			this->button12->Location = System::Drawing::Point(124, curretZamY);

			this->label10->Location = System::Drawing::Point(13, curretRigY -= 30);
			this->button13->Location = System::Drawing::Point(95, curretRigY);
			this->button14->Location = System::Drawing::Point(124, curretRigY);

			this->label14->Location = System::Drawing::Point(13, curretFurY -= 30);
			this->button15->Location = System::Drawing::Point(95, curretFurY);
			this->button16->Location = System::Drawing::Point(124, curretFurY);
		}
		else if (index == 4) {

			this->label9->Location = System::Drawing::Point(13, curretZamY -= 30);
			this->button11->Location = System::Drawing::Point(95, curretZamY);
			this->button12->Location = System::Drawing::Point(124, curretZamY);

			this->label10->Location = System::Drawing::Point(13, curretRigY -= 30);
			this->button13->Location = System::Drawing::Point(95, curretRigY);
			this->button14->Location = System::Drawing::Point(124, curretRigY);

			this->label14->Location = System::Drawing::Point(13, curretFurY -= 30);
			this->button15->Location = System::Drawing::Point(95, curretFurY);
			this->button16->Location = System::Drawing::Point(124, curretFurY);
		}
		else if (index == 5) {

			this->label10->Location = System::Drawing::Point(13, curretRigY -= 30);
			this->button13->Location = System::Drawing::Point(95, curretRigY);
			this->button14->Location = System::Drawing::Point(124, curretRigY);

			this->label14->Location = System::Drawing::Point(13, curretFurY -= 30);
			this->button15->Location = System::Drawing::Point(95, curretFurY);
			this->button16->Location = System::Drawing::Point(124, curretFurY);
		}
		else if (index == 6) {

			this->label14->Location = System::Drawing::Point(13, curretFurY -= 30);
			this->button15->Location = System::Drawing::Point(95, curretFurY);
			this->button16->Location = System::Drawing::Point(124, curretFurY);
			}
	}

};
}
