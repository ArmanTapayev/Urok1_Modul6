#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include "Header.h"

//enum Arrange { increase, decrease };

// Задание 1
double hypotenuse(double *x, double *y)
{
	return sqrt(*x**x + *y**y);
}

// Задание 3
double distance(double *x1, double *y1, double *x2, double *y2)
{
	return abs(sqrt(pow(*x1 - *x2, 2) + pow(*y1 - *y2, 2)));
}

int overloadFuntcion(int x)
{
	return x * x;
}

int overloadFuntcion(int x, int y)
{
	return x + y;
}

float overloadFuntcion(float x)
{
	return x + x;
}

float overloadFuntcion(float x, float y)
{
	return x + y;
}

// Задание 4
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("\nПосле выполнения программы:");
	printf("\na=%d  b=%d\n", *a, *b);
}

// Задание 5
void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("\nПосле выполнения программы:");
	printf("\na=%d  b=%d\n", a, b);
}

// Задание 6
int gcd(int x, int y)
{
	/*Программа представляет собой реализацию алгоритма Эвклида нахождения
	наибольшего общего делителя для двух целых чисел.
	Алгоритм основывается на факте, что НОД двух целых чисел x и y, когда
	x>y, совпадает с НОД числа y и x по модулю y (остатка от деления x на y).*/

	/*if (y == 0) return x;
	return gcd(y, x % y);*/

	return y ? gcd(y, x % y) : x;
}

// Задание 7
void extremumNumbers(int *arr, int len)
{
	int min = *arr, max = *arr, indexMin=0, indexMax=0;

	for (int i = 0; i < len; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			indexMin = i;
		}
		if (arr[i] > max)
		{
			max = arr[i];
			indexMax = i;
		}
	}
	printf("\nmin[%d]=%d, max[%d]=%d\n", indexMin, min, indexMax, max);
}

// Задание 8
void arr(int *arr, int len, Arrange dir)
{
	arrangeArray(arr, len, dir);

	printf("\nМассив после сортировки:\n");
	
	int k = 0, A[4][4];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (k <= len) A[i][j] = arr[k];
			printf("A[%d][%d]=%d  ",i,j, A[i][j]);
			k++;
		}
		printf("\n");
	}

}

// Задание 9
void evenness(int *arr, int len)
{
	int evenNumber = 0, oddNumber=0;
	for (int i = 0; i < len; i++)
	{
		if ((arr[i] % 2 == 0)||(arr[i]==0)) evenNumber++;
	}
	oddNumber = len - evenNumber;
	printf("\nКоличество четных элементов: %d\n", evenNumber);
	printf("Количество нечетных элементов: %d\n", oddNumber);
}

void fillArrayInteger(int * mas, int len, int *min, int *max)
{
	for (int i = 0; i < len; i++)
		mas[i] = rand() * (*max - *min) / RAND_MAX + *min;
}

void printArray(int * mas, int len)
{
	printf("\nИсходный массив:\n");
	for (int i = 0; i < len; i++)
		printf("A[%d]=%d  ", i, mas[i]);
	printf("\n");
}

void arrangeArray(int *arr, int len, Arrange dir)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = len-1; j > i; j--)
		{
			switch (dir)
			{
				case increase:
				{
					if (arr[j] < arr[j - 1])
					{
						int temp = arr[j];
						arr[j] = arr[j-1];
						arr[j - 1] = temp;
					}

				}break;

				case decrease:
				{
					if (arr[j] > arr[j - 1])
					{
						int temp = arr[j];
						arr[j] = arr[j - 1];
						arr[j - 1] = temp;
					}
				}break;
			}
		}
	}
}



 


