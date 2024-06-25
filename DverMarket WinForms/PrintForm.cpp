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

		if (MainWindow::richTextBox1->Text != "") {
			this->textBox1->Text += "\r\n\r\n����������: " + "\r\n"
				+ MainWindow::richTextBox1->Text + "\r\n";
		}
	}

	void PrintForm::textBox_KeyPress(Object^ sender, KeyPressEventArgs^ e)
	{
		if (!Char::IsDigit(e->KeyChar))
		{
			e->Handled = true;
		}
	}
	//�������� �� ������ ������ - ������� �� ������ �����
	void PrintForm::printButton_Click(System::Object^ sender, System::EventArgs^ e) {
		PrintDialog^ p1 = gcnew PrintDialog();
		PrintDocument^ p2 = gcnew PrintDocument();
		p2->PrintPage += gcnew PrintPageEventHandler(this, &PrintForm::printDocument_PrintPage);
		p1->Document = p2;
		p1->AllowSelection = false;
		if (p1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			p2->Print();
	}

	void PrintForm::printDocument_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
		static int charCount = 0;  // ���������� ��� �������� ������� ������� ������� � ������.
		String^ textToPrint = this->textBox1->Text; // �������� ���� ����� �� TextBox
		System::ComponentModel::ComponentResourceManager^ resources = gcnew System::ComponentModel::ComponentResourceManager(PrintForm::typeid);
		// ��������� ����������� �� �������� �����
		System::Drawing::Image^ image = nullptr;
		// �������� ����������� �� ��������
		image = (System::Drawing::Image^)resources->GetObject("Header");
		int yOffset = image->Height + 10; // �������� ��� ������ ����� �����������.
		e->Graphics->DrawImage(image, 10, 10, image->Width, image->Height);
		// ��������� ������ � �����
		System::Drawing::Font^ printFont = gcnew System::Drawing::Font("Arial", 10);
		System::Drawing::Brush^ printBrush = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Black);
		// ������ �������� � ������ �������� � ��������
		int pageSize = e->MarginBounds.Height - yOffset;
		float lineHeight = printFont->GetHeight(e->Graphics);
		while (charCount < textToPrint->Length) {
		// �������� ������ ��� ������
			String^ line = this->GetLine(textToPrint, charCount, printFont, e->MarginBounds.Width, e->Graphics);
			e->Graphics->DrawString(line, printFont, printBrush, e->MarginBounds.Left, yOffset);
			yOffset += lineHeight;
		// ���� ������� �������� �� ������ ��������� ������ ��������
			if (yOffset + lineHeight > e->MarginBounds.Bottom) {
				e->HasMorePages = true;
				return;
				}
			}
		// ���� ���� ����� ���������, ������ ������� ���
		e->HasMorePages = false;
		charCount = 0; // ���������� ��� ���������� ���������
	}

	String^ PrintForm::GetLine(String^ text, int& charCount, System::Drawing::Font^ font, int width, System::Drawing::Graphics^ graphics) {
		String^ line = "";
		for (; charCount < text->Length; charCount++) {
			line += text[charCount].ToString();
			System::Drawing::SizeF size = graphics->MeasureString(line, font);
			if (size.Width > width) {
				line = line->Substring(0, line->Length - 1);
				charCount--; // ����� �� ���������� ������
				break;
			}
		}
		return line;
	}
}