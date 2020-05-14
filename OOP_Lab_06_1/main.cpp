#include <iostream>
#include <string>

#include "Class.h"

using namespace std;


int main()
{
	system("chcp 1251");
	system("cls");

	int chose;
	int count_el;

	Array<int> arr_int;
	int temp_int;
	Array<double> arr_double;
	double temp_double;
	Array<string> arr_string;
	string temp_string;



	cout << "Виберіть що ви хочете вводити" << endl;
	cout << "1) int" << endl;
	cout << "2) double" << endl;
	cout << "3) string" << endl;
	cout << "інше завершити програму" << endl;
	cin >> chose;

	if (chose < 1 || chose>3)
		return 0;

	cout << "Введіть кількість елементів які хочете ввести" << endl;
	cin >> count_el;

	cout << "Вводіть ваші елементи" << endl;

	if (chose == 1) {
		for (int i = 0; i < count_el; i++) {
			cin >> temp_int;
			arr_int.Push_back(temp_int);
		}
	}
	else if (chose == 2) {
		for (int i = 0; i < count_el; i++) {
			cin >> temp_double;
			arr_double.Push_back(temp_double);
		}
	}
	else {
		for (int i = 0; i < count_el; i++) {
			cin >> temp_string;
			arr_string.Push_back(temp_string);
		}
	}

	cout << "ваші елементи" << endl;
	if (chose == 1) {
		arr_int.Puts_elem();
	}
	else if (chose == 2) {
		arr_double.Puts_elem();
	}
	else {
		arr_string.Puts_elem();
	}

	cout << "Контрольна сума" << endl;
	int sum;
	if (chose == 1)
		sum = arr_int.Sum_Elem();

	else if (chose == 2)
		sum = arr_double.Sum_Elem();

	else
		sum = arr_string.Sum_Elem();

	cout << sum << endl;

	system("pause");
	return 0;
}
