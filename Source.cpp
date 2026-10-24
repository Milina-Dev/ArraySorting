#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(0));

	int array[10];
	char choice;

	cout << "Выберите способ заполнение массива:" << endl;
	cout << "1. Заполнить случайными числами" << endl;
	cout << "2. Ввести числа вручную" << endl;
	cout << "Выберите действие: ";
	cin >> choice;

	if (choice == '1')
	{
		for (int i = 0; i < 10; i++)
		{
			array[i] = rand() % 100 + 1; 
		}

	}

	else if (choice == '2')
	{
		cout << "Напишите 10 чисел: ";

		for (int i = 0; i < 10; i++)
		{
			cin >> array[i];
		}
	}

	else
	{
		cout << "Ошибка! Данного выбора нет";
		return 0;
	}

	cout << "Исходный массив: ";

	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << " ";
	}

	int iteration = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			iteration++;

			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}

	cout << "\nОтсортированный массив: ";

	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << " ";
	}

	cout << "\nКоличество итераций: " << iteration;

	return 0;
}