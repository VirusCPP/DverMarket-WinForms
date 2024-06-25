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
	
	//Заполнение осмновного поля рассчетами
	void PrintForm::enterText() {
		for (int i = 0; i < MainWindow::doorCount; i++) {
			this->textBox1->Text += "Дверь № " + Int32(i + 1) + "\r\n"
				+ "Полотно: " + Door::arrDoor[i]->DoorName->Text
				+ "   Размер: " + Door::arrDoor[i]->DoorSize->Text
				+ "   Цвет: " + Door::arrDoor[i]->DoorColor->Text
				+ "   Кол-во: " + Door::arrDoor[i]->DoorCount->Text
				+ "   Стоимость за 1 шт.: " + Door::arrDoor[i]->DoorPrice->Text + "\r\n";
		}
		if (MainWindow::furCount > 0)
			this->textBox1->Text += "\r\nФурнитура:" + "\r\n";
		for (int i = 0; i < MainWindow::furCount; i++) {
			this->textBox1->Text += "Наименование: " + Fur::arrFur[i]->FurName->Text
				+ "   Кол-во: " + Fur::arrFur[i]->FurCount->Text
				+ "   Стоимость за 1 шт.: " + Fur::arrFur[i]->FurPrice->Text + "\r\n";
		}
		if (MainWindow::KorComboBox->Text != "Размер") {
			this->textBox1->Text += "\r\nКоробка: " + "\r\n"
				+ "   Размер: " + MainWindow::KorComboBox->Text
				+ "   Кол-во: " + MainWindow::KorVolBox->Text
				+ "   Стоимость: " + MainWindow::KorPriceBox->Text + "\r\n";
		}
		if (MainWindow::NalComboBox->Text != "Размер") {
			this->textBox1->Text += "\r\nНаличник: " + "\r\n"
				+ "   Размер: " + MainWindow::NalComboBox->Text
				+ "   Кол-во: " + MainWindow::NalVolBox->Text
				+ "   Стоимость: " + MainWindow::NalPriceBox->Text + "\r\n";
		}

		if (MainWindow::DobComboBox->Text != "Размер") {
			this->textBox1->Text += "\r\nДобор: " + "\r\n"
				+ "   Размер: " + MainWindow::KorComboBox->Text
				+ "   Кол-во: " + MainWindow::DobVolBox->Text
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
		this->textBox1->Text += "\r\nИтоговая сумма: " + MainWindow::TotalAmountBox->Text;

		if (MainWindow::richTextBox1->Text != "") {
			this->textBox1->Text += "\r\n\r\nПримечание: " + "\r\n"
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
	//Действие на кнопку Печать - выводит на печать форму
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
		static int charCount = 0;  // Переменная для хранения текущей позиции символа в тексте.
		String^ textToPrint = this->textBox1->Text; // Получаем весь текст из TextBox
		System::ComponentModel::ComponentResourceManager^ resources = gcnew System::ComponentModel::ComponentResourceManager(PrintForm::typeid);
		// Загружаем изображение из ресурсов формы
		System::Drawing::Image^ image = nullptr;
		// Получаем изображение из ресурсов
		image = (System::Drawing::Image^)resources->GetObject("Header");
		int yOffset = image->Height + 10; // Смещение для текста после изображения.
		e->Graphics->DrawImage(image, 10, 10, image->Width, image->Height);
		// Настройки шрифта и кисти
		System::Drawing::Font^ printFont = gcnew System::Drawing::Font("Arial", 10);
		System::Drawing::Brush^ printBrush = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Black);
		// Высота страницы с учетом отступов и смещения
		int pageSize = e->MarginBounds.Height - yOffset;
		float lineHeight = printFont->GetHeight(e->Graphics);
		while (charCount < textToPrint->Length) {
		// Получаем строку для печати
			String^ line = this->GetLine(textToPrint, charCount, printFont, e->MarginBounds.Width, e->Graphics);
			e->Graphics->DrawString(line, printFont, printBrush, e->MarginBounds.Left, yOffset);
			yOffset += lineHeight;
		// Если текущее смещение по высоте превышает размер страницы
			if (yOffset + lineHeight > e->MarginBounds.Bottom) {
				e->HasMorePages = true;
				return;
				}
			}
		// Если весь текст напечатан, больше страниц нет
		e->HasMorePages = false;
		charCount = 0; // Сбрасываем для следующего документа
	}

	String^ PrintForm::GetLine(String^ text, int& charCount, System::Drawing::Font^ font, int width, System::Drawing::Graphics^ graphics) {
		String^ line = "";
		for (; charCount < text->Length; charCount++) {
			line += text[charCount].ToString();
			System::Drawing::SizeF size = graphics->MeasureString(line, font);
			if (size.Width > width) {
				line = line->Substring(0, line->Length - 1);
				charCount--; // Откат на предыдущий символ
				break;
			}
		}
		return line;
	}
}