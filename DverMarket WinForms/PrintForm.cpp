#include "MainWindow.h"
#include "PrintForm.h"

namespace DverMarketWinForms {

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
}