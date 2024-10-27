#include <iostream>
#include <windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double wallet{};
	double choice{};
	double result{};
	double commission{};
	double dollar = 96.67;
	double euro = 104.81;
	double yuan = 13.5;
	double farit = 37;
	double ien = 0.635;
	double answer = 1;

	while (answer == 1)
	{
		std::cout << "Введите количество рублей которые вы хотите обменять: ";
		std::cin >> wallet;
		std::cout << "Выберите валюту на которую хотите обменять\n1.Dollar 2.Euro\t3.Yuan\t4.Farit\t5.Ien ";
		std::cin >> choice;
		commission = wallet * 5 / 100;
		if (choice == 1)
		{
			result = wallet / dollar;
		}
		if (choice == 2)
		{
			result = wallet / euro;
		}
		if (choice == 3)
		{
			result = wallet / yuan;
		}
		if (choice == 4)
		{
			result = wallet / farit;
		}
		if (choice == 5)
		{
			result = wallet / ien;
		}
		std::cout << "\nПолучилось купить " << result << " Валют";
		std::cout << "\nКоммисия составила " << commission << " рублей";
		std::cout << "\nПовторим?\n1.Да\t2.Нет";
		std::cin >> answer;
		if (answer != 1)
		{
			return 0;
		}
	}








}