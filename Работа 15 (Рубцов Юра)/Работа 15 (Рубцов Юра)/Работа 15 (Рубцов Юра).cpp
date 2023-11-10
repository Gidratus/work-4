﻿// Работа 15 (Рубцов Юра).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "rus");
	float value;

	cout << "Выберите вариант перевода: \n";
	cout << "1. Сажени в метры\n";
	cout << "2. Дюймы в сантиметры\n";
	cout << "3. Футы в метры\n";
	cout << "4. Драхмы в граммы\n";
	cout << "5. Унции в граммы\n";
	cout << "6. Фунты в килограммы\n";
	cout << "7. Аршины в метры\n";
	cout << "8. Золотники в граммы\n";
	cout << "9. Дюймы в миллиметры\n";

	int option;
	cout << "Ваш выбор: ";
	cin >> option;

	switch (option)
	{
	case 1:
		cout << "Введите значение в саженях: ";
		cin >> value;
		cout << value << " сажень(ей) = " << value * 2.1366 << " м\n";
		break;

	case 2:
		cout << "Введите значение в дюймах: ";
		cin >> value;
		cout << value << " дюйм(ов) = " << value * 2.54 << " см\n";
		break;

	case 3:
		cout << "Введите значение в футах: ";
		cin >> value;
		cout << value << " фут(ов) = " << value * 0.3048 << " м\n";
		break;

	case 4:
		cout << "Введите значение в драхмах: ";
		cin >> value;
		cout << value << " драхма(ы) = " << value * 3.7325 << " г\n";
		break;

	case 5:
		cout << "Введите значение в унциях: ";
		cin >> value;
		cout << value << " унция(и) = " << value * 29.86 << " г\n";
		break;

	case 6:
		cout << "Введите значение в фунтах: ";
		cin >> value;
		cout << value << " фунт(ов) = " << value * 0.40951 << " кг\n";
		break;

	case 7:
		cout << "Введите значение в аршинах: ";
		cin >> value;
		cout << value << " аршин(ов) = " << value * 0.7112 << " м\n";
		break;

	case 8:
		cout << "Введите значение в золотниках: ";
		cin >> value;
		cout << value << " золотник(ов) = " << value * 4.2657 << " г\n";
		break;

	case 9:
		cout << "Введите значение в дюймах: ";
		cin >> value;
		cout << value << " дюйм(ов) = " << value * 25.3995 << " мм\n";
		break;

	default:
		cout << "Некорректный вариант перевода\n";
		break;
	}

	return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
