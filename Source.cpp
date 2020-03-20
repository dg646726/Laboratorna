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
	srand(time(0));


	int arr[10] = {1,5,7,2,7,13,8,3,9,10};


	//Бульбашка
	/*for (int  i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size-1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}*/

	//show_arr(arr, size);

	//Вибіркою
	/*for (int i = 0; i < size; i++)
	{
		int temp = arr[0];
		for (int j = i+1; j < size; j++)
		{
			if (arr[i] > arr[j]) {

				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}*/

	//Вставка
	/*int temp = 0;
	int indexPrev = 0;

	for (int i = 1; i < size; i++)
	{
		temp = arr[i];
		indexPrev = i - 1;
		while (indexPrev >= 0 && arr[indexPrev] > temp) {

			arr[indexPrev + 1] = arr[indexPrev];
			arr[indexPrev] = temp;
			indexPrev--;

		}
	}*/



	const int size = 100;
	int numbers[size];

	init(numbers, size);

	int action;
	do {
		SetConsoleTextAttribute(color, FOREGROUND_RED | FOREGROUND_GREEN);
		cout << "1.Заповнення масиву" << endl;
		cout << "2.Виведення масиву" << endl;
		cout << "3." << endl;
		cout << "4." << endl;
		cout << "5." << endl;
		cout << "6." << endl;
		cout << "7.Exit" << endl;
		cout << endl;
		SetConsoleTextAttribute(color, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);

		cout << "select action:";
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
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		default:
			cout << "Error" << endl;
			break;
		}
	} while (action != 7);




	system("pause");
	return 0;
}