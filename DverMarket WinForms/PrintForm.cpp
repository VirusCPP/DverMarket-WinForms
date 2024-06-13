#include "MainWindow.h"
#include "PrintForm.h"

namespace DverMarketWinForms {

	void PrintForm::enterText() {
		for (int i = 0; i < MainWindow::doorCount; i++) {
			this->textBox1->Text += "����� � " + Int32(i + 1) + "\r\n"
				+ "�������: " + MainWindow::tbDoorName[i]->Text
				+ "   ������: " + MainWindow::cbDoorSize[i]->Text
				+ "   ����: " + MainWindow::tbDoorColor[i]->Text
				+ "   ����������: " + MainWindow::tbDoorCount[i]->Text
				+ "   ��������� �� 1 ��.: " + MainWindow::tbDoorPrice[i]->Text + "\r\n";
		}
		if (MainWindow::furCount > 0)
			this->textBox1->Text += "\r\n���������:" + "\r\n";
		for (int i = 0; i < MainWindow::furCount; i++) {
			this->textBox1->Text += "������������: " + MainWindow::tbFurnituraName[i]->Text
				+ "   ����������: " + MainWindow::tbFurnituraCount[i]->Text
				+ "   ��������� �� 1 ��.: " + MainWindow::tbFurnituraPrice[i]->Text + "\r\n";
		}
		if (MainWindow::KorComboBox->Text != "������") {
			this->textBox1->Text += "\r\n�������: " + "\r\n"
				+ "   ������: " + MainWindow::KorComboBox->Text
				+ "   ����������: " + MainWindow::KorVolBox->Text
				+ "   ���������: " + MainWindow::KorPriceBox->Text + "\r\n";
		}
		if (MainWindow::NalComboBox->Text != "������") {
			this->textBox1->Text += "\r\n��������: " + "\r\n"
				+ "   ������: " + MainWindow::NalComboBox->Text
				+ "   ����������: " + MainWindow::NalVolBox->Text
				+ "   ���������: " + MainWindow::NalPriceBox->Text + "\r\n";
		}

		if (MainWindow::DobComboBox->Text != "������") {
			this->textBox1->Text += "\r\n�����: " + "\r\n"
				+ "   ������: " + MainWindow::KorComboBox->Text
				+ "   ����������: " + MainWindow::DobVolBox->Text
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
		this->textBox1->Text += "\r\n�������� �����: " + MainWindow::label7->Text;
	}
}