#include "MainWindow.h"
#include "PrintForm.h"

namespace DverMarketWinForms {
	//Заполнение осмновного поля рассчетами
	void PrintForm::enterText() {
		for (int i = 0; i < MainWindow::doorCount; i++) {
			this->textBox1->Text += "Дверь № " + Int32(i + 1) + "\r\n"
				+ "Полотно: " + MainWindow::tbDoorName[i]->Text
				+ "   Размер: " + MainWindow::cbDoorSize[i]->Text
				+ "   Цвет: " + MainWindow::tbDoorColor[i]->Text
				+ "   Количество: " + MainWindow::tbDoorCount[i]->Text
				+ "   Стоимость за 1 шт.: " + MainWindow::tbDoorPrice[i]->Text + "\r\n";
		}
		if (MainWindow::furCount > 0)
			this->textBox1->Text += "\r\nФурнитура:" + "\r\n";
		for (int i = 0; i < MainWindow::furCount; i++) {
			this->textBox1->Text += "Наименование: " + MainWindow::tbFurnituraName[i]->Text
				+ "   Количество: " + MainWindow::tbFurnituraCount[i]->Text
				+ "   Стоимость за 1 шт.: " + MainWindow::tbFurnituraPrice[i]->Text + "\r\n";
		}
		if (MainWindow::KorComboBox->Text != "Размер") {
			this->textBox1->Text += "\r\nКоробка: " + "\r\n"
				+ "   Размер: " + MainWindow::KorComboBox->Text
				+ "   Количество: " + MainWindow::KorVolBox->Text
				+ "   Стоимость: " + MainWindow::KorPriceBox->Text + "\r\n";
		}
		if (MainWindow::NalComboBox->Text != "Размер") {
			this->textBox1->Text += "\r\nНаличник: " + "\r\n"
				+ "   Размер: " + MainWindow::NalComboBox->Text
				+ "   Количество: " + MainWindow::NalVolBox->Text
				+ "   Стоимость: " + MainWindow::NalPriceBox->Text + "\r\n";
		}

		if (MainWindow::DobComboBox->Text != "Размер") {
			this->textBox1->Text += "\r\nДобор: " + "\r\n"
				+ "   Размер: " + MainWindow::KorComboBox->Text
				+ "   Количество: " + MainWindow::DobVolBox->Text
				+ "   Стоимость: " + MainWindow::DobPriceBox->Text + "\r\n";
		}
		if (MainWindow::PodVolBox->Text != "") {
			this->textBox1->Text += "\r\nПодъем: " + "\r\n"
				+ "   Этаж: " + MainWindow::PodVolBox->Text
				+ "   Стоимость за этаж: " + MainWindow::PodPriceBox->Text + "\r\n";
		}
		if (MainWindow::MonPriceBox->Text != "") {
			this->textBox1->Text += "\r\nМонтаж: " + "\r\n"
				+ "   Стоимость монтажа: " + MainWindow::MonPriceBox->Text + "\r\n";
		}
		if (MainWindow::DosPriceBox->Text != "") {
			this->textBox1->Text += "\r\nДоставка: " + "\r\n"
				+ "   Стоимость доставки: " + MainWindow::DosPriceBox->Text + "\r\n";
		}
		if (MainWindow::textBox8->Text != "") {
			this->textBox1->Text += "\r\nОбщая сумма: "
				+ MainWindow::textBox8->Text + "\r\n";
		}

		if (MainWindow::comboBox4->Text != "без скидки") {
			this->textBox1->Text += "\r\nСкидка: "
				+ MainWindow::comboBox4->Text
				+ "   Сумма скидки: " + MainWindow::textBox9->Text + "\r\n";
		}
		this->textBox1->Text += "\r\nИтоговая сумма: " + MainWindow::label7->Text;
	}
	//Действие на кнопку Печать - выводит на печать форму
	void PrintForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = this->CreateGraphics();
		bmp = gcnew Bitmap(this->Width, this->Height, g);
		Graphics^ mg = Graphics::FromImage(bmp);
		mg->CopyFromScreen(this->Location.X + 10, this->Location.Y + 30, 20, 40, this->Size);
		printPreviewDialog1->Document = printDocument1;
		printPreviewDialog1->ShowDialog();
	}
	void PrintForm::printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
		if (bmp != nullptr) {
			e->Graphics->DrawImage(bmp, 0, 0);
		}
	}
	//Инициализация компонентов формы
	void PrintForm::InitializeComponent(void)
	{
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PrintForm::typeid));
		this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
		this->textBox2 = (gcnew System::Windows::Forms::TextBox());
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
		this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
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
		this->button1->Click += gcnew System::EventHandler(this, &PrintForm::button1_Click);
		// 
		// printDocument1
		// 
		this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &PrintForm::printDocument1_PrintPage);
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