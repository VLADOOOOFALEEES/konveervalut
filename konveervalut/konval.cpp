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
		std::cout << "������� ���������� ������ ������� �� ������ ��������: ";
		std::cin >> wallet;
		std::cout << "�������� ������ �� ������� ������ ��������\n1.Dollar 2.Euro\t3.Yuan\t4.Farit\t5.Ien ";
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
		std::cout << "\n���������� ������ " << result << " �����";
		std::cout << "\n�������� ��������� " << commission << " ������";
		std::cout << "\n��������?\n1.��\t2.���";
		std::cin >> answer;
		if (answer != 1)
		{
			return 0;
		}
	}








}