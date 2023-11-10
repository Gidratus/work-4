// Работа 13 (Рубцов Юра).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main() {
	
	int score = 0;
	setlocale(0, "rus");

	// Вопрос 1
	cout << "1. Какое значение имеет переменная x после выполнения следующего кода?\n";
	cout << " int x = 5 + 3 * 2 - 1;\n";
	cout << " a) 15\n";
	cout << " b) 9\n";
	cout << " c) 10\n";
	cout << "Ответ: ";
	char answer1;
	cin >> answer1;
	if (answer1 == 'c') {
		score++;
	}

	// Вопрос 2
	cout << "2. Как объявить переменную с именем 'age' типа int в C++?\n";
	cout << " a) int age\n";
	cout << " b) int age = 0\n";
	cout << " c) int age();\n";
	cout << "Ответ: ";
	char answer2;
	cin >> answer2;
	if (answer2 == 'a') {
		score++;
	}

	cout << "3. Что делает оператор << в C++?\n";
	cout << " a) Выводит значение\n";
	cout << " b) Читает значение\n";
	cout << " c) Делает логическое И\n";
	cout << "Ответ: ";
	char answer3;
	cin >> answer3;
	if (answer3 == 'a') {
		score++;
	}

	cout << "4. Что делает оператор ++ в C++?\n";
	cout << " a) Уменьшает значение на 1\n";
	cout << " b) Увеличивает значение на 1\n";
	cout << " c) Возвращает остаток от деления\n";
	cout << "Ответ: ";
	char answer4;
	cin >> answer4;
	if (answer4 == 'b') {
		score++;
	}

	cout << "5. Как объявить массив с именем numbers, состоящий из 5 целочисленных элементов в C++?\n";
	cout << " a) int[5] numbers;\n";
	cout << " b) int numbers[5];\n";
	cout << " c) numbers[5] = int;\n";
	cout << "Ответ: ";
	char answer5;
	cin >> answer5;
	if (answer5 == 'b') {
		score++;
	}

	cout << "6. Какая функция используется для получения длины строки в C++?\n";
	cout << " a) len()\n";
	cout << " b) length()\n";
	cout << " c) size()\n";
	cout << "Ответ: ";
	char answer6;
	cin >> answer6;
	if (answer6 == 'c') {
		score++;
	}

	cout << "7. на сколько вопросов ва осталось ответить\n";
	cout << " a) 1()\n";
	cout << " b) 999999()\n";
	cout << " c) 33\n";
	cout << "Ответ: ";
	char answer7;
	cin >> answer7;
	if (answer7 == 'c') {
		score++;
	}

	cout << "8. Как зовут автора манги JoJo's Bizarre Adventure?\n";
	cout << " a) Хирохико Араки\n";
	cout << " b) Осаму Тедзука\n";
	cout << " c) Акира Торияма\n";
	cout << "Ответ: ";
	char answer8;
	cin >> answer8;
	if (answer8 == 'a') {
		score++;
	}

	cout << "9.Сколько дней было у Джозефа до полного растворения колец в его теле?\n";
	cout << " a) 27\n";
	cout << " b) 36()\n";
	cout << " c) 33()\n";
	cout << "Ответ: ";
	char answer9;
	cin >> answer9;
	if (answer9 == 'c') {
		score++;
	}

	cout << "10. Сколько частей ДжоДжо, и когда появилась на свет?\n";
	cout << " a) 9 частей, 1985 год\n";
	cout << " b) 8 частей, 1987 год\n";
	cout << " c) 7 частей, 1988 год\n";
	cout << "Ответ: ";
	char answer10;
	cin >> answer10;
	if (answer10 == 'b') {
		score++;
	}

	cout << "11. Как Джотаро спас Какёина?\n";
	cout << " a) Вытащил паразита используя Стенд\n";
	cout << " b) Заморозил паразита в теле Какёина\n";
	cout << " c) Убил паразита в теле Какёина с помощью Стенда\n";
	cout << "Ответ: ";
	char answer11;
	cin >> answer11;
	if (answer11 == 'a') {
		score++;
	}

	cout << "12. Сколько раз Джозеф управлял самолётом?\n";
	cout << " a) 3\n";
	cout << " b) 4\n";
	cout << " c) 2\n";
	cout << "Ответ: ";
	char answer12;
	cin >> answer12;
	if (answer12 == 'b') {
		score++;
	}

	cout << "13.История мема: Какая песня в 1-ом эндинге стала мемом?\n";
	cout << " a) Grateful Dead — Friends of the Devil\n";
	cout << " b) King Crimson — Epitaph\n";
	cout << " c) YES — Roundabout\n";
	cout << "Ответ: ";
	char answer13;
	cin >> answer13;
	if (answer13 == 'c') {
		score++;
	}

	cout << "14. Что такое Хамон в JOJO?\n";
	cout << " a)Время полдника когда принято употреблять мясо\n";
	cout << " b)Запрещеный продукт в нескольких странах\n";
	cout << " c)Суперспособность\n";
	cout << "Ответ: ";
	char answer14;
	cin >> answer14;
	if (answer14 == 'c') {
		score++;
	}

	cout << "15. Как звали Главного героя из первой части ДжоДжо?\n";
	cout << " a)Джонатан\n";
	cout << " b)Джотаро\n";
	cout << " c)Дио\n";
	cout << "Ответ: ";
	char answer15;
	cin >> answer15;
	if (answer15 == 'a') {
		score++;
	}

	cout << "16. Как называлась боевая техника, которую использовали главные герои первых двух частей?\n";
	cout << " a)Стенд\n";
	cout << " b)Хамон\n";
	cout << " c)Вампиризм\n";
	cout << "Ответ: ";
	char answer16;
	cin >> answer16;
	if (answer16 == 'b') {
		score++;
	}

	cout << "17.Как зовут главного Антоганиста Невероятных приключений ДжоДжо? (3 часть)\n";
	cout << " a) Карс\n";
	cout << " b) Дио Брандо()\n";
	cout << " c) Энрико Пуччи()\n";
	cout << "Ответ: ";
	char answer17;
	cin >> answer17;
	if (answer17 == 'b') {
		score++;
	}

	cout << "18. Где начались собития 3 части ДжоДжо?\n";
	cout << " a)В Англии\n";
	cout << " b)В Китае\n";
	cout << " c)В Японии\n";
	cout << "Ответ: ";
	char answer18;
	cin >> answer18;
	if (answer18 == 'c') {
		score++;
	}

	cout << "19.Какая Фамилия у Джотаро?\n";
	cout << " a)Брандо\n";
	cout << " b)Джостар()\n";
	cout << " c)Куджо\n";
	cout << "Ответ: ";
	char answer19;
	cin >> answer19;
	if (answer19 == 'c') {
		score++;
	}

	cout << "20.Что использовал Джозеф, чтобы сбежать от Карса?\n";
	cout << " a)Автомобиль\n";
	cout << " b)Мотоцикл\n";
	cout << " c)Самолет\n";
	cout << "Ответ: ";
	char answer20;
	cin >> answer20;
	if (answer20 == 'c') {
		score++;
	}

	cout << "21.Какова была первая цель Дио, на момент первой части?\n";
	cout << " a)Стать самым богатым\n";
	cout << " b)Заполучить силу Каменной маски\n";
	cout << " c)Стать совершенным существом, правящем людьми\n";
	cout << "Ответ: ";
	char answer21;
	cin >> answer21;
	if (answer21 == 'c') {
		score++;
	}

	cout << "22. Сражался ли Джозеф со всеми людьми из колонн?\n";
	cout << " a)Да, он сражался со всеми\n";
	cout << " b)Нет, только с двумя()\n";
	cout << " c)Нет, только с одним\n";
	cout << "Ответ: ";
	char answer22;
	cin >> answer22;
	if (answer22 == 'a') {
		score++;
	}

	cout << "23. Как зовут Главного героя 3 части ДжоДжо?\n";
	cout << " a) Джозеф\n";
	cout << " b) Джотаро\n";
	cout << " c) Джонатан\n";
	cout << "Ответ: ";
	char answer23;
	cin >> answer23;
	if (answer23 == 'c') {
		score++;
	}

	cout << "24. Как называет сила, которую использует Джотаро?\n";
	cout << " a) Хамон\n";
	cout << " b) Вампиризм\n";
	cout << " c) Стенд\n";
	cout << "Ответ: ";
	char answer24;
	cin >> answer24;
	if (answer24 == 'c') {
		score++;
	}

	cout << "25. Какая функция используется для получения длины строки в C++?\n";
	cout << " a) len()\n";
	cout << " b) length()\n";
	cout << " c) size()\n";
	cout << "Ответ: ";
	char answer25;
	cin >> answer25;
	if (answer25 == 'c') {
		score++;
	}

	cout << "26. колько было лет Джотаро на момент 3 части ДжоДжо?\n";
	cout << " a) 23 года\n";
	cout << " b) 21 год\n";
	cout << " c) 17 лет\n";
	cout << "Ответ: ";
	char answer26;
	cin >> answer26;
	if (answer26 == 'c') {
		score++;
	}

	cout << "27. Какая функция используется для получения длины строки в C++?\n";
	cout << " a) len()\n";
	cout << " b) length()\n";
	cout << " c) size()\n";
	cout << "Ответ: ";
	char answer27;
	cin >> answer27;
	if (answer27 == 'c') {
		score++;
	}

	cout << "28. Как называется Стенд, который использует Дио?\n";
	cout << " a) Made in Heaven\n";
	cout << " b) The World\n";
	cout << " c) Star Platinum\n";
	cout << "Ответ: ";
	char answer28;
	cin >> answer28;
	if (answer28 == 'b') {
		score++;
	}

	cout << "29. В чем главная особенность стенда Star Platinum?\n";
	cout << " a) Он был невидимым для врагов\n";
	cout << " b) У него была сила, способная ускорить своего владельца\n";
	cout << " c) У него были сильные и сверх-точные удары\n";
	cout << "Ответ: ";
	char answer29;
	cin >> answer29;
	if (answer29 == 'c') {
		score++;
	}

	cout << "30. Какой персонаж появлялся чаще всего в ДжоДжо?\n";
	cout << " a) Дио Брандо\n";
	cout << " b) Джотаро\n";
	cout << " c) Джозеф\n";
	cout << "Ответ: ";
	char answer30;
	cin >> answer30;
	if (answer30 == 'c') {
		score++;
	}

	cout << "31. Как назывался стенд, который забирал  жизненную энергию методом игры в камень-ножницы-бумага?\n";
	cout << " a) Boy II Man\n";
	cout << " b) Cheap Trick\n";
	cout << " c) Tehore Sax\n";
	cout << "Ответ: ";
	char answer31;
	cin >> answer31;
	if (answer31 == 'a') {
		score++;
	}

	cout << "32. Как назывался стенд, который мог вывести человеческие способности на максимум?\n";
	cout << " a) Whitesnake\n";
	cout << " b) Survivor\n";
	cout << " c) Emperor\n";
	cout << "Ответ: ";
	char answer32;
	cin >> answer32;
	if (answer32 == 'b') {
		score++;
	}

	cout << "33.Самый сильный персонаж в ДжоДжо?\n";
	cout << " a) Джорно Джованна (GER)\n";
	cout << " b) Куджо Джотаро (Star Platinum:The World)\n";
	cout << " c) Кишибе Рохан (Heaven's Door)\n";
	cout << "Ответ: ";
	char answer33;
	cin >> answer33;
	if (answer33 == 'a') {
		score++;
	}

	cout << "34. У какого Антогониста самый слабый стенд?\n";
	cout << " a) Дио Брандо\n";
	cout << " b) Дьяволо\n";
	cout << " c) Энрико Пуччи\n";
	cout << "Ответ: ";
	char answer34;
	cin >> answer34;
	if (answer34 == 'b') {
		score++;
	}

	cout << "35. Выбирете правду\n";
	cout << " a) Дио не упоминается только в 4 части\n";
	cout << " b) Собитие стардастов произошли раньше встречи Пуччи и Дио\n";
	cout << " c) Истинная цель Дио - достич Рая\n";
	cout << "Ответ: ";
	char answer35;
	cin >> answer35;
	if (answer35 == 'c') {
		score++;
	}

	cout << "36. Имя Дио частично происходит от?\n";
	cout << " a)  Дио Маджо, итальянского певца и актера, известного своими ролями в музыкальных спектаклях и фильмах\n";
	cout << " b) Ронни Джеймса Дио, основателя группы Dio\n";
	cout << " c)  нет происхождения\n";
	cout << "Ответ: ";
	char answer36;
	cin >> answer36;
	if (answer36 == 'b') {
		score++;
	}

	cout << "37. Любимый музыкант Джотаро?\n";
	cout << " a) Тошинобу Кубота\n";
	cout << " b) Анджела Аки\n";
	cout << " c) Юдзи Камидзё\n";
	cout << "Ответ: ";
	char answer37;
	cin >> answer37;
	if (answer37 =='a') {
		score++;
	}

	cout << "38. Какая функция используется для получения длины строки в C++?\n";
	cout << " a) len()\n";
	cout << " b) length()\n";
	cout << " c) size()\n";
	cout << "Ответ: ";
	char answer38;
	cin >> answer38;
	if (answer38 == 'c') {
		score++;
	}

	cout << "39. Араки упоминает, что вдохновением для персонажа Джотаро послужил голливудский актер...?\n";
	cout << " a) Клинт Иствуд\n";
	cout << " b)Дольф Лундгрен\n";
	cout << " c) Том Круз\n";
	cout << "Ответ: ";
	char answer39;
	cin >> answer39;
	if (answer39 == 'a'){
		score++;
	}

	// Вопрос 40
	cout << "40. вы поставите 5?\n";
	cout << " a) да\n";
	cout << " b) нет\n";
	cout << " c) это тянет на 3\n";
	cout << "Ответ: ";
	char answer40;
	cin >> answer40;
	if (answer40 == 'a') {
		score++;
	}

	cout << "\nТест окончен. Ваш результат: " << score << " из 40.\n";

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
