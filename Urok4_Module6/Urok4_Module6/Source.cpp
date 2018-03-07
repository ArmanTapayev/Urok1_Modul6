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
void swap(int &a, int &b); // Задание 5
int gcd(int x, int y); // Задание 6
void extremumNumbers(int *arr, int len); // Задание 7
void arr(int *arr, int len, Arrange dir); // Задание 8
void evenness(int *arr, int len); // Задание 9

void fillArrayInteger(int * mas, int len, int *min, int *max);
void printArray(int * mas, int len);
void arrangeArray(int *arr, int len, Arrange dir);

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int n;
	do
	{
		printf("Работа содержит 9 заданий.\n");
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

			int x, y;
			float a, b;

			printf("Введите значения для целых чисел x и y:\n");

			printf("x = ");
			scanf("%d", &x);
			printf("y = ");
			scanf("%d", &y);

			printf("Введите значения для вещественных чисел a и b:\n");
			printf("a = ");
			scanf("%f", &a);
			printf("b = ");
			scanf("%f", &b);

			printf("\nint overloadFuntcion(int %d) = %d\n", x, overloadFuntcion(x));
			printf("int overloadFuntcion(int %d, int %d) = %d\n", x, y, overloadFuntcion(x, y));
			printf("float overloadFuntcion(float %f) = %f\n", a, overloadFuntcion(a));
			printf("float overloadFuntcion(float %f, float %f) = %f\n", a, b, overloadFuntcion(a, b));

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
			/*5. Напишите функцию swap(int& a, int& b), которая изменяет значения параметров a и b так,
			что новое значение a равно старому значению b и наоборот*/

			int a, b, min = 0, max = 50;

			a = rand()*(max - min) / RAND_MAX + min;
			b = rand()*(max - min) / RAND_MAX + min;

			printf("\nНачальные значения чисел:\n");
			printf("a=%d  b=%d", a, b);

			swap(a, b);

			printf("\n");
			system("pause");
			system("cls");
		}break;

		case 6:
		{
			/*6. Даны два натуральных числа a и b, обозначающие соответственно числитель
			и знаменатель дроби. Сократить дробь, используя функцию определения наибольшего общего делителя*/

			int a, b, min = 10, max = 1000, gcdn;

			a = rand()*(max - min) / RAND_MAX + min;
			b = rand()*(max - min) / RAND_MAX + min;

			printf("\nНачальные значения чисел:\n");
			printf("a=%d  b=%d", a, b);

			printf("\ngcd = %d", gcd(a, b));
			printf("\nПосле сокращеия: a=%d  b=%d", a / gcd(a, b), b / gcd(a, b));


			printf("\n");
			system("pause");
			system("cls");
		}break;

		case 7:
		{
			/*7. В заданном массиве целых чисел найти максимальное и минимальное число, 
			использую функции определения максимального и минимального числа*/

			int A[10], len = 10, min = -99, max = 100;

			fillArrayInteger(A, len, &min, &max);
			printArray(A, len);
			extremumNumbers(A, len);

			printf("\n");
			system("pause");
			system("cls");
		}break;

		case 8:
		{
			/*1. Задан одномерный массив из 16 элементов. Сформировать двухмерный массив 4×4, 
			в котором элементы увеличиваются слева направо, используя функции сортировки и 
			преобразования одномерного массива в двухмерный массив*/

			int A[16], len = 16, minArr = 10, maxArr = 100;

			fillArrayInteger(A, len, &minArr, &maxArr);
			printArray(A, len);

			/* increase -- сортируем по возрастанию,
			   decrease -- сортируем по убыванию     */

			arr(A, len, increase);

			printf("\n");
			system("pause");
			system("cls");
		}break;

		case 9:
		{
			/*9. С помощью функции random(n) сгенерировать массив чисел от 0 до 50
			и определить количество четных и нечетных чисел в этом массиве. 
			Для определения четных и нечетных чисел использовать функцию*/

			int A[10], len = 10, minArr = 0, maxArr = 50;

			fillArrayInteger(A, len, &minArr, &maxArr);
			printArray(A, len);

			evenness(A, len);

			printf("\n");
			system("pause");
			system("cls");
		}break;


		}
	} while (n != 0);



}

