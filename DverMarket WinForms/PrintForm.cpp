#include "MainWindow.h"
#include "PrintForm.h"

namespace DverMarketWinForms {

	PrintForm::PrintForm()
	{
		InitializeComponent();

	}
	
	PrintForm::~PrintForm()
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
	
	//���������� ���������� ���� ����������
	void PrintForm::enterText() {
		for (int i = 0; i < MainWindow::doorCount; i++) {
			this->textBox1->Text += "����� � " + Int32(i + 1) + "\r\n"
				+ "�������: " + Door::arrDoor[i]->DoorName->Text
				+ "   ������: " + Door::arrDoor[i]->DoorSize->Text
				+ "   ����: " + Door::arrDoor[i]->DoorColor->Text
				+ "   ���-��: " + Door::arrDoor[i]->DoorCount->Text
				+ "   ��������� �� 1 ��.: " + Door::arrDoor[i]->DoorPrice->Text + "\r\n";
		}
		if (MainWindow::furCount > 0)
			this->textBox1->Text += "\r\n���������:" + "\r\n";
		for (int i = 0; i < MainWindow::furCount; i++) {
			this->textBox1->Text += "������������: " + Fur::arrFur[i]->FurName->Text
				+ "   ���-��: " + Fur::arrFur[i]->FurCount->Text
				+ "   ��������� �� 1 ��.: " + Fur::arrFur[i]->FurPrice->Text + "\r\n";
		}
		if (MainWindow::KorComboBox->Text != "������") {
			this->textBox1->Text += "\r\n�������: " + "\r\n"
				+ "   ������: " + MainWindow::KorComboBox->Text
				+ "   ���-��: " + MainWindow::KorVolBox->Text
				+ "   ���������: " + MainWindow::KorPriceBox->Text + "\r\n";
		}
		if (MainWindow::NalComboBox->Text != "������") {
			this->textBox1->Text += "\r\n��������: " + "\r\n"
				+ "   ������: " + MainWindow::NalComboBox->Text
				+ "   ���-��: " + MainWindow::NalVolBox->Text
				+ "   ���������: " + MainWindow::NalPriceBox->Text + "\r\n";
		}

		if (MainWindow::DobComboBox->Text != "������") {
			this->textBox1->Text += "\r\n�����: " + "\r\n"
				+ "   ������: " + MainWindow::KorComboBox->Text
				+ "   ���-��: " + MainWindow::DobVolBox->Text
				+ "   ���������: " + MainWindow::DobPriceBox->Text + "\r\n";
		}
		if (MainWindow::PodVolBox->Text != "") {
			this->textBox1->Text += "\r\n������: " + "\r\n"
				+ "   ����: " + MainWindow::PodVolBox->Text
				+ "   ��������� �� ����: " + MainWindow::PodPriceBox->Text + "\r\n";
		}
		if (MainWindow::MonPriceBox->Text != "") {
			this->textBox1->Text += "\r\n������: " + "\r\n"
				+ "   ��������� �������: " + MainWindow::MonPriceBox->Text + "\r\n";
		}
		if (MainWindow::DosPriceBox->Text != "") {
			this->textBox1->Text += "\r\n��������: " + "\r\n"
				+ "   ��������� ��������: " + MainWindow::DosPriceBox->Text + "\r\n";
		}
		if (MainWindow::textBox8->Text != "") {
			this->textBox1->Text += "\r\n����� �����: "
				+ MainWindow::textBox8->Text + "\r\n";
		}

		if (MainWindow::comboBox4->Text != "��� ������") {
			this->textBox1->Text += "\r\n������: "
				+ MainWindow::comboBox4->Text
				+ "   ����� ������: " + MainWindow::textBox9->Text + "\r\n";
		}
		this->textBox1->Text += "\r\n�������� �����: " + MainWindow::TotalAmountBox->Text;
	}
	//�������� �� ������ ������ - ������� �� ������ �����
	void PrintForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
		PrintDialog^ p1 = gcnew PrintDialog();
		PrintDocument^ p2 = gcnew PrintDocument();
		p2->PrintPage += gcnew PrintPageEventHandler(this, &PrintForm::printDocument_PrintPage);
		p1->Document = p2;
		p1->AllowSelection = false;
		if (p1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			p2->Print();
	}
	void PrintForm::printDocument_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
		System::Drawing::Image^ image = System::Drawing::Image::FromFile("Header.jpg");
		e->Graphics->DrawImage(image, 10, 10, image->Width, image->Height);
		int yOffset = image->Height + 10;
		System::Drawing::Font^ printFont = gcnew System::Drawing::Font("Arial", 10);
		System::Drawing::Brush^ printBrush = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Black);
		e->Graphics->DrawString(this->textBox1->Text, printFont, printBrush, 10, yOffset);
	}
	//������������� ����������� �����
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
		this->button1->Text = L"������";
		this->button1->UseVisualStyleBackColor = true;
		this->button1->Click += gcnew System::EventHandler(this, &PrintForm::button1_Click);
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
		this->Text = L"����� ������";
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
		this->ResumeLayout(false);
		this->PerformLayout();

	}
}