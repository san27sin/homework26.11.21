/*
homework 26.11.2021
created by Alex Sinitsyn
*/
#include<iostream>
#include<cstdlib>
using namespace std;

bool initArray_1(double* arr, int size)
{
	for (size_t a = 0; a < size; a++)
	{
		arr[a] = (double)(rand()) / RAND_MAX;
		cout << arr[a] << endl;
	}
	return true;
}

bool changeDate(int* arr, int size)
{
	cout << "Second initialization" << endl;
	for (int c = 0; c < size; c++)
	{
		if (arr[c] == 1)
		{
			arr[c] = 0;
		}

		else
		{
			arr[c] = 1;
		}
		cout << arr[c] << "\t";
	}
	cout << "\n";
	return true;
}

bool initArray_2(int* arr, int size)
{
	for (int g{ 0 }, d{ 1 }; g < size; g++)
	{
		arr[g] = d;
		cout << arr[g] <<"\t";
		d += 3;
	}
	return true;
}

int printArray(int* arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	return 0;
}

int moveElementsInArr(int* arr, int size)
{
	int n = arr[0];
	for (int i = 0; i < size - 1; ++i)
	{
		arr[i] = arr[i + 1];
	}
	arr[size - 1] = n;


	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << "\t";
	}
	return 0;
}

void main()
{
	setlocale(LC_ALL, "Rus");
	/*
	1. Написать функцию которая выводит массив double 
	чисел на экран. Параметры функции это сам массив и его
	размер. Вызвать функцию из main.
	*/
	cout << "Task 1" << endl;
	const int mysize = 5;
	double array[mysize];
	initArray_1(array, mysize);

	/*
	2. Задать целочисленный массив, состоящий из элементов 0 и 1.
	Например [ 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 ]. Написать функцию, 
	заменяющую в принятом массиве 0 на 1, 1 на 0. Выводить
	на экран массив до изменений и после.
	*/
	cout << "\n\nTask 2" << endl;
	const int mysize_2 = 10;
	int arr_2[mysize_2] = { 0,1,0,0,1,1,1,0,0,1};
	cout << "First initialization\n";
	for (int b = 0; b < mysize_2; b++)
	{
		cout << arr_2[b] <<"\t";
	}
	cout << "\n";
	changeDate(arr_2, mysize_2);

	/*
	3. Задать пустой целочисленный массив размером 8. 
	Написать функцию, которая с помощью цикла заполнит его значениями
	1 4 7 10 13 16 19 22. Вывести массив на экран.
	*/
	cout << "\n\nTask 3" << endl;
	const int mySize3 = 8;
	int arr_3[mySize3];
	initArray_2(arr_3, mySize3);
	cout << "\n";

	/*
	4. Написать функцию, которой на вход подается одномерный массив 
	и число n (может быть положительным, или отрицательным), при этом
	метод должен циклически сместить все элементы массива на n позиций.
	*/
	cout << "\n\nTask 4" << endl;
	int const size_4 = 5;
	int array_4[size_4] = { 1,2,3,4,5 };
	printArray(array_4, size_4);
	moveElementsInArr(array_4, size_4);
}