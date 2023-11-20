/*
1.	Дан массив А размера N.
Найти минимальный элемент из его элементов
с четными номерами: A2, A4, A6, …
*/

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	size_t n;
	cout << "Введите число элементов массива: ";
	cin >> n;

	if (n == 0)
	{
		cerr << "Ошибка: размер массива не может быть равен нулю";
			return 1;
	}

	int* array;
	array = new int[n];

	cout << "Введите элементы массива:" << endl;
	for (size_t i = 0; i < n; i++)
	{
		cout << i << ") ";
		cin >> array[i];
	}

	int min = array[0];
	for (size_t i = 2; i < n; i += 2)
	{
		int mini = array[i];
		if (mini < min) {
			min = mini;
		}
	}

	delete[] array;

	cout << "Минимальный элемент из элементов с четными индексами: " << min;
}
