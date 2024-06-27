#include "MainWindow.h"
#include "Door.h"
#include "Furnitura.h"
#include "PrintForm.h"

namespace DverMarketWinForms {

	void MainWindow::textBox_KeyPress(Object^ sender, KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '\b')
		{
			e->Handled = true;
		}
	}
	
	//Функция добавляет поля Двери 
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
		MainWindow::toolTip1->SetToolTip(arrDoor[MainWindow::doorCount]->DoorName, "Полотно");
		
		arrDoor[MainWindow::doorCount]->DoorSize->Location = System::Drawing::Point(194, 33 + MainWindow::doorCount * 30);
		arrDoor[MainWindow::doorCount]->DoorSize->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"стандарт", L"+30%", L"+40%", L"+50%" });
		arrDoor[MainWindow::doorCount]->DoorSize->Name = L"comboSizeBox" + MainWindow::doorCount.ToString();
		arrDoor[MainWindow::doorCount]->DoorSize->Size = System::Drawing::Size(92, 24);
		arrDoor[MainWindow::doorCount]->DoorSize->TabIndex = MainWindow::doorCount;
		arrDoor[MainWindow::doorCount]->DoorSize->Text = L"Размер";

		arrDoor[MainWindow::doorCount]->DoorColor->Location = System::Drawing::Point(293, 33 + MainWindow::doorCount * 30);
		arrDoor[MainWindow::doorCount]->DoorColor->Name = "textDoorColorBox" + MainWindow::doorCount.ToString();
		arrDoor[MainWindow::doorCount]->DoorColor->Size = System::Drawing::Size(100, 24);
		arrDoor[MainWindow::doorCount]->DoorColor->TabIndex = MainWindow::doorCount;
		MainWindow::toolTip1->SetToolTip(arrDoor[MainWindow::doorCount]->DoorColor, "Цвет");
		
		arrDoor[MainWindow::doorCount]->DoorCount->Location = System::Drawing::Point(399, 33 + MainWindow::doorCount * 30);
		arrDoor[MainWindow::doorCount]->DoorCount->Name = "textDoorCountBox" + MainWindow::doorCount.ToString();
		arrDoor[MainWindow::doorCount]->DoorCount->Size = System::Drawing::Size(50, 24);
		arrDoor[MainWindow::doorCount]->DoorCount->TabIndex = MainWindow::doorCount;
		arrDoor[MainWindow::doorCount]->DoorCount->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(arrDoor[MainWindow::doorCount], &textBox_KeyPress);
		MainWindow::toolTip1->SetToolTip(arrDoor[MainWindow::doorCount]->DoorCount, "Количество");
		
		arrDoor[MainWindow::doorCount]->DoorPrice->Location = System::Drawing::Point(455, 33 + MainWindow::doorCount * 30);
		arrDoor[MainWindow::doorCount]->DoorPrice->Name = "textDoorPriceBox" + MainWindow::doorCount.ToString();
		arrDoor[MainWindow::doorCount]->DoorPrice->Size = System::Drawing::Size(85, 24);
		arrDoor[MainWindow::doorCount]->DoorPrice->TabIndex = MainWindow::doorCount;
		arrDoor[MainWindow::doorCount]->DoorPrice->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(arrDoor[MainWindow::doorCount], &textBox_KeyPress);
		MainWindow::toolTip1->SetToolTip(arrDoor[MainWindow::doorCount]->DoorPrice, "Цена");
	}
	//Функция добавляет поля Фурнитуры
	void Fur::addFur() {
		arrFur[MainWindow::furCount] = gcnew Fur();
		
		arrFur[MainWindow::furCount]->FurName = gcnew TextBox();
		arrFur[MainWindow::furCount]->FurCount = gcnew TextBox();
		arrFur[MainWindow::furCount]->FurPrice = gcnew TextBox();

		arrFur[MainWindow::furCount]->FurName->Location = System::Drawing::Point(13, MainWindow::currentFurnituraY + 23 + MainWindow::furCount * 30);
		arrFur[MainWindow::furCount]->FurName->Size = System::Drawing::Size(175, 24);
		arrFur[MainWindow::furCount]->FurName->Name = L"textFurNameBox" + "Name" + MainWindow::doorCount.ToString();
		arrFur[MainWindow::furCount]->FurName->TabIndex = MainWindow::furCount;
		MainWindow::toolTip1->SetToolTip(arrFur[MainWindow::furCount]->FurName, L"Наименование");

		arrFur[MainWindow::furCount]->FurCount->Location = System::Drawing::Point(194, MainWindow::currentFurnituraY + 23 + MainWindow::furCount * 30);
		arrFur[MainWindow::furCount]->FurCount->Size = System::Drawing::Size(92, 24);
		arrFur[MainWindow::furCount]->FurCount->Name = L"textFurCountBox" + MainWindow::doorCount.ToString();
		arrFur[MainWindow::furCount]->FurCount->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(arrFur[MainWindow::furCount], &textBox_KeyPress);
		MainWindow::toolTip1->SetToolTip(arrFur[MainWindow::furCount]->FurCount, L"Количество");

		arrFur[MainWindow::furCount]->FurPrice->Location = System::Drawing::Point(293, MainWindow::currentFurnituraY + 23 + MainWindow::furCount * 30);
		arrFur[MainWindow::furCount]->FurPrice->Size = System::Drawing::Size(85, 24);
		arrFur[MainWindow::furCount]->FurPrice->Name = L"textFurPriceBox" + MainWindow::doorCount.ToString();
		arrFur[MainWindow::furCount]->FurPrice->TabIndex = MainWindow::furCount;
		arrFur[MainWindow::furCount]->FurPrice->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(arrFur[MainWindow::furCount], &textBox_KeyPress);
		MainWindow::toolTip1->SetToolTip(arrFur[MainWindow::furCount]->FurPrice, L"Стоимость");
	}
	//Действия по нажатию на кнопку "+" для добавления полей Двери
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
	//Действия по нажатию на кнопку "-" для удаления полей Двери
	void MainWindow::DoorButtonMinus_Click(System::Object^ sender, System::EventArgs^ e) {
		MoveComponents(1);
		doorCount--;
		if (Door::arrDoor[doorCount] != nullptr) delete Door::arrDoor[doorCount];
		if (Door::arrDoor[doorCount] != nullptr) { delete Door::arrDoor[doorCount]->DoorName; Controls->Remove(Door::arrDoor[doorCount]->DoorName); }
		if (Door::arrDoor[doorCount] != nullptr) { delete Door::arrDoor[doorCount]->DoorSize; Controls->Remove(Door::arrDoor[doorCount]->DoorSize); }
		if (Door::arrDoor[doorCount] != nullptr) { delete Door::arrDoor[doorCount]->DoorColor; Controls->Remove(Door::arrDoor[doorCount]->DoorColor); }
		if (Door::arrDoor[doorCount] != nullptr) { delete Door::arrDoor[doorCount]->DoorCount; Controls->Remove(Door::arrDoor[doorCount]->DoorCount); }
		if (Door::arrDoor[doorCount] != nullptr) { delete Door::arrDoor[doorCount]->DoorPrice; Controls->Remove(Door::arrDoor[doorCount]->DoorPrice); }
		checkButtonStatus();
	}
	
	void MainWindow::FurButtonPlus_Click(System::Object^ sender, System::EventArgs^ e) {
		Fur::addFur();
		Controls->Add(Fur::arrFur[MainWindow::furCount]->FurName);
		Controls->Add(Fur::arrFur[MainWindow::furCount]->FurCount);
		Controls->Add(Fur::arrFur[MainWindow::furCount]->FurPrice);
		furCount++;
		checkButtonStatus();
	}
	
	void MainWindow::FurButtonMinus_Click(System::Object^ sender, System::EventArgs^ e) {
		furCount--;
		if (Fur::arrFur[furCount] != nullptr) delete Fur::arrFur[furCount];
		if (Fur::arrFur[furCount] != nullptr) { delete Fur::arrFur[furCount]->FurName; Controls->Remove(Fur::arrFur[furCount]->FurName); }
		if (Fur::arrFur[furCount] != nullptr) { delete Fur::arrFur[furCount]->FurCount; Controls->Remove(Fur::arrFur[furCount]->FurCount); }
		if (Fur::arrFur[furCount] != nullptr) { delete Fur::arrFur[furCount]->FurPrice; Controls->Remove(Fur::arrFur[furCount]->FurPrice); }
		checkButtonStatus();
	}
	//Действие по нажатию кнопки рассчитать - вызывает функцию Calculate и открывает форму для печати
	void MainWindow::Calculate_Click(System::Object^ sender, System::EventArgs^ e) {
		Calculate();
	}
	//Включение и отключение кнопок "+" и "-" для дверей и фурнитуры
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
	//Функция для сдвига полей фурнитуры, 0 - вниз, другое значение - вверх
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

	void MainWindow::PrintButton_Click(System::Object^ sender, System::EventArgs^ e) {
		PrintForm^ printForm = gcnew PrintForm();
		printForm->enterText();
		printForm->ShowDialog();
	}

	//Функция рассчета итоговой стоимости
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

		this->textBox8->Text = Sum.ToString() + " Руб.";
		this->textBox9->Text = Skidka.ToString() + " Руб.";
		this->TotalAmountBox->Text = Result.ToString() + " Руб.";
	}
}
