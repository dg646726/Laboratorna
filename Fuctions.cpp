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

#define CLEAR system("cls");
#define PAUSE system("pause");


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
	CLEAR
		int first_number;
	int second_number;
	cout << "¬ведiть дiапазон чисел(15 30):";
	cin >> first_number >> second_number;
	for (int i = 0; i < size_array; i++)
	{
		arr[i] = rand() % second_number + first_number;
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
	PAUSE
		CLEAR


}

void show_arr(int arr[], int size_array)
{
	for (int i = 0; i < size_array; i++) {

		cout << arr[i] << " ";
	}
	cout << endl;
}
