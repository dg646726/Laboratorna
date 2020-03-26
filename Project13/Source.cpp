#include<iostream>
#include<Windows.h>
#include<math.h>
#include<ctime>
#include<string>
#include<conio.h>
#include<list>
#include<fstream>
#include "Fuctions.h"


using namespace std;
HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

#define CLEAR system("cls");
#define PAUSE system("pause");



int main() {
	setlocale(LC_CTYPE, "");

	const int size = 100;
	int numbers[size];

	init(numbers, size);

	int action;
	do {
		SetConsoleTextAttribute(color, FOREGROUND_RED | FOREGROUND_GREEN);
		cout << "1.Zapovnennya array" << endl;
		cout << "2.Show array" << endl;
		cout << "3.Search number in array" << endl;
		cout << "4.Sort array" << endl;
		cout << "5.Average array" << endl;
		cout << "6.Kratne" << endl;
		cout << "7.Exit" << endl;
		cout << endl;
		SetConsoleTextAttribute(color, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);

		cout << "Select action:";
		cin >> action;
		cout << endl;
		switch (action)
		{
		case 1:
			random(numbers, size);
			break;
		case 2:
			show_arr(numbers, size);
			break;
		case 3:
			search(numbers, size);
			break;
		case 4:
			sort(numbers, size);
			break;
		case 5:
			average(numbers, size);
			break;
		case 6:
			kratne(numbers, size);
			break;
		case 7:
			cout << "Bye" << endl;
			break;
		default:
			cout << "Error" << endl;
			break;
		}
	} while (action != 7);




	system("pause");
	return 0;
}