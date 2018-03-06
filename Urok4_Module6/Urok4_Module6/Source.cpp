#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include "Header.h"

#define M_PI 3.1415926535897932384626433832795

double hypotenuse(double *x, double *y); // Задание 1
double distance(double *x1, double *y1, double *x2, double *y2); // Задание 2 

void swap(int *a, int *b); // Задание 4

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int n;
	do
	{
		printf("Работа содержит 11 заданий.\n");
		printf("Для выхода наберите 0.\n");
		printf("Введите n = ");
		scanf("%d", &n);

		switch (n)
		{
		case 1:
		{
			/*1. Определите функцию double f(double x, double y),
			которая вычисляет и возвращает длину гипотенузы прямоугольного треугольника,
			когда две другие стороны x и y известны*/

			double a, b;

			printf("Введите значения катетов а и b:\n");

			printf("a=");
			scanf("%lf", &a);

			printf("b=");
			scanf("%lf", &b);

			printf("Длина гипотенузы: %0.2lf", hypotenuse(&a, &b));

			printf("\n");
			system("pause");
			system("cls");
		}break;

		case 2:
		{
			/*2. Напишите функцию double f(double x1, double y1, double x2, double y2),
			которая вычисляет расстояние между двумя точками (xl, yl) и (x2, y2).*/

			double x1, x2, y1, y2, min = -99, max = 100;

			x1 = (double)rand()*(max - min) / RAND_MAX + min;
			y1 = (double)rand()*(max - min) / RAND_MAX + min;
			x2 = (double)rand()*(max - min) / RAND_MAX + min;
			y2 = (double)rand()*(max - min) / RAND_MAX + min;

			printf("\nПервая точка: (%0.2lf, %0.2lf)\n", x1, y1);
			printf("Вторая точка: (%0.2lf, %0.2lf)\n", x2, y2);

			printf("\nРасстояние между точками: %0.2lf\n", distance(&x1, &y1, &x2, &y2));


			printf("\n");
			system("pause");
			system("cls");
		}break;

		case 3:
		{
			/*3. Напишите несколько функций с одним именем int f(…)
			и с разными наборами параметров. Продемонстрируйте работу перегруженных функций*/



			printf("\n");
			system("pause");
			system("cls");

		}break;

		case 4:
		{
			/*4. Напишите функцию swap(int* a, int* b), которая изменяет значения
			параметров a и b так, что новое значение a равно старому значению b и наоборот.  */

			int a, b, min = 0, max = 50;

			a = rand()*(max - min) / RAND_MAX + min;
			b = rand()*(max - min) / RAND_MAX + min;

			printf("\nНачальные значения чисел:\n");
			printf("a=%d  b=%d", a, b);

			swap(&a, &b);

			printf("\n");
			system("pause");
			system("cls");

		}break;

		case 5:
		{


			printf("\n");
			system("pause");
			system("cls");
		}break;

		case 6:
		{




			printf("\n");
			system("pause");
			system("cls");
		}break;



		}
	} while (n != 0);



}

