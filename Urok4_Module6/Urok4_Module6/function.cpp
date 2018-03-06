#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include "Header.h"

// Задание 1
double hypotenuse(double *x, double *y)
{
	return sqrt(*x**x + *y**y);
}

// Задание 2
double distance(double *x1, double *y1, double *x2, double *y2)
{
	return abs(sqrt(pow(*x1 - *x2, 2) + pow(*y1 - *y2, 2)));
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