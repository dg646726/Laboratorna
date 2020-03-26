#include "Fuctions.h"
#include<iostream>
#include<Windows.h>
#include<math.h>
#include<ctime>
#include<string>
#include<conio.h>
#include<list>
#include<fstream>

using namespace std;
HANDLE color1 = GetStdHandle(STD_OUTPUT_HANDLE);

#define CLEAR system("cls")
#define PAUSE system("pause")
#define ENDL cout<<endl


const string fileName = "FileWithNumbers.txt";

void init(int arr[], int size)
{
	ifstream fin;
	fin.open(fileName);
	bool isOpen = fin.is_open();

	if (isOpen == false) {
		cout << "Error" << endl;
	}
	else {
		int data;
		int index = 0;
		while (!fin.eof()) {


			fin >> data;
			arr[index] = data;
			index++;
		}
	}
}

void random(int arr[], int size_array)
{
	CLEAR;
	int first_number;
	int second_number;
	cout << "Enter the number range (15 30):";
	cin >> first_number >> second_number;
	for (int i = 0; i < size_array; i++)
	{
		arr[i] = rand() % (second_number-first_number) + first_number;
	}

	ofstream fout;
	fout.open(fileName);
	bool isOpen = fout.is_open();
	if (isOpen == false) {
		cout << "Error: Application can't connecting to database file" << endl;
	}
	else {
		for (int i = 0; i < size_array; i++)
		{
			fout << arr[i] << endl;

		}

	}
	fout.close();
	PAUSE;
	CLEAR;


}

void show_arr(int arr[], int size_array)
{
	CLEAR;
	for (int i = 0; i < size_array; i++) {

		cout << arr[i] << " ";
		if (i==9||i==19 || i == 29 || i == 39 || i == 49 || i == 59 || i == 69 || i == 79 || i == 89 || i == 99) {
			ENDL;
		}
	}
	ENDL;
	PAUSE;
	CLEAR;
}

void search(int arr[], int size)
{
	CLEAR;
	int number;
	cout << "Enter number:";
	cin >> number;
	for (int i = 0; i < size; i++)
	{
		if (number == arr[i]) {
			cout << "Index number = " << i+1 << endl;
		}
	}
	ENDL;
	PAUSE;
	CLEAR;
}

void sort(int arr[], int size)
{
	CLEAR;
	int tempAction;
	do {
		SetConsoleTextAttribute(color1, FOREGROUND_RED | FOREGROUND_GREEN);
		cout << "1.Growth" << endl;
		cout << "2.Decrease" << endl;
		cout << endl;
		SetConsoleTextAttribute(color1, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);

		cout << "Select action:";
		cin >> tempAction;
		cout << endl;
		int temp1 = 0;
		int indexPrev = 0;
		int temp3 = 0;
		int indexPrev2 = 0;
		switch (tempAction)
		{
		case 1:
			CLEAR;
			int tempAction2;
			do {
				SetConsoleTextAttribute(color1, FOREGROUND_RED | FOREGROUND_GREEN);
				cout << "1.Bubble" << endl;
				cout << "2.Selection" << endl;
				cout << "3.Insertion" << endl;
				cout << endl;
				SetConsoleTextAttribute(color1, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);

				cout << "Select action:";
				cin >> tempAction2;
				cout << endl;
				switch (tempAction2)
				{
				case 1:
					for (int i = 0; i < size - 1; i++)
					{
						for (int j = 0; j < size - 1; j++)
						{
							if (arr[j] < arr[j + 1]) {
								swap(arr[j], arr[j + 1]);
							}
						}
					}
					break;
				case 2:
					for (int i = 0; i < size; i++)
					{
						int temp = arr[0];
						for (int j = i + 1; j < size; j++)
						{
							if (arr[i] < arr[j]) {

								temp = arr[i];
								arr[i] = arr[j];
								arr[j] = temp;
							}
						}
					}
					break;
				case 3:
					

					for (int i = 1; i < size; i++)
					{
						temp1 = arr[i];
						indexPrev = i - 1;
						while (indexPrev >= 0 && arr[indexPrev] < temp1) {

							arr[indexPrev + 1] = arr[indexPrev];
							arr[indexPrev] = temp1;
							indexPrev--;

						}
					}
					break;
				default:
					cout << "Error" << endl;
					break;
				}
			} while (tempAction2 != 1 && tempAction2 != 2&& tempAction2 != 3);
			ENDL;
			CLEAR;
			break;
		case 2:
			CLEAR;
			int tempAction3;
			do {
				SetConsoleTextAttribute(color1, FOREGROUND_RED | FOREGROUND_GREEN);
				cout << "1.Bubble" << endl;
				cout << "2.Selection" << endl;
				cout << "3.Insertion" << endl;
				cout << endl;
				SetConsoleTextAttribute(color1, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);

				cout << "Select action:";
				cin >> tempAction3;
				cout << endl;
				switch (tempAction3)
				{
				case 1:
					for (int i = 0; i < size - 1; i++)
					{
						for (int j = 0; j < size - 1; j++)
						{
							if (arr[j] > arr[j + 1]) {
								swap(arr[j], arr[j + 1]);
							}
						}
					}
					break;
				case 2:
					for (int i = 0; i < size; i++)
					{
						int temp2 = arr[0];
						for (int j = i + 1; j < size; j++)
						{
							if (arr[i] > arr[j]) {

								temp2 = arr[i];
								arr[i] = arr[j];
								arr[j] = temp2;
							}
						}
					}
					break;
				case 3:
					for (int i = 1; i < size; i++)
					{
						temp3 = arr[i];
						indexPrev2 = i - 1;
						while (indexPrev2 >= 0 && arr[indexPrev2] > temp3) {

							arr[indexPrev2 + 1] = arr[indexPrev2];
							arr[indexPrev2] = temp3;
							indexPrev2--;

						}
					}
					break;
				default:
					cout << "Error" << endl;
					break;
				}
			} while (tempAction3 != 1 && tempAction3 != 2 && tempAction3 != 3);
			ENDL;
			CLEAR;
			break;
		default:
			cout << "Error" << endl;
			break;
		}
	} while (tempAction != 1 && tempAction != 2);
}

void average(int arr[], int size)
{
	CLEAR;
	int sum=0;
	for (int i = 0; i < 100; i++)
	{
		sum += arr[i];
	}
	double average = sum / 100;
	cout << "Average:" << average << endl;
	ENDL;
	PAUSE;
	CLEAR;
}

void kratne(int arr[], int size)
{
	CLEAR;
	int number;
	cout << "Enter number:";
	cin >> number;
	int count=0;
	for (int i = 0; i < 100; i++)
	{
		if (arr[i] % number == 0) {
			count++;
		}
	}
	cout << "The number of multiples:" << count << endl;
	ENDL;
	PAUSE;
	CLEAR;
}
