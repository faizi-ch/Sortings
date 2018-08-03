#include<iostream>
#include <conio.h>

using namespace std;

int s = 10;
int a[10] = { 10,8,9,1,2,3,5,44,-4,7 };

void mainMenu();
void bubbleSort();
void insertionSort();
void selectionSort();

void main()
{
	//a[10]={10,8,9,1,2,3,5,44,-4,7};
	
	mainMenu();

	_getch();
}

void mainMenu()
{

	system("CLS");
	cout << "\n\n1. Bubble Sort\n2. Insertion Sort\n3. Selection Sort\n4. Exit\n\nEnter your choice:\n";
	char ch = _getch();
	switch (ch)
	{
	case '1':
	{
		bubbleSort();
		break;
	}
	case '2':
	{
		insertionSort();
		break;
	}
	case  '3':
	{
		selectionSort();
		break;
	}
	case '4':
		exit(0);
	default:
		cout << "\aWRONG ENTRY!!!";
	}
}

void bubbleSort()
{
	int temp;
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < s; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	cout << "*Bubble Sort*\n\n";
	for (int i = 0; i < s; i++)
	{
		cout << a[i] << " ";
	}
}

void insertionSort()
{
	int temp;
	for (int i = 1; i < s; i++)
	{
		temp = a[i];
		for (int j = i; j > 0 && temp < a[j - 1]; j--)
		{
			a[j] = a[j - 1];
			a[j - 1] = temp;
		}
	}

	cout << "*Selection Sort*\n\n";
	for (int i = 0; i < s; i++)
	{
		cout << a[i] << " ";
	}
}

void selectionSort()
{
	int temp;
	for (int i = 0; i < s; i++)
	{
		for (int j = i; j < s; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	cout << "*Selection Sort*\n\n";
	for (int i = 0; i < s; i++)
	{
		cout << a[i] << " ";
	}
}