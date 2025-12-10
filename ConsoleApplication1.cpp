// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b, c;

	setlocale(LC_ALL, "Russian");
	cout << "Введите первое число:";
	cin >> a;
	cout << "Введите второе число:";
	cin >> b;
	cout << "Введите третье  число:";
	cin >> c;

	// max
	int first = (a >= b && a >= c) ? a : (b >= c ? b : c);

	// min
	int third = (a <= b && a <= c) ? a : (b <= c ? b : c);

	// среднее

	int second = (a != first && a != third) ? a : (b != first && b != third) ? b : c;

	cout << "Результать:" << first << " " << second << " " << third << endl;

	return 0;
}

