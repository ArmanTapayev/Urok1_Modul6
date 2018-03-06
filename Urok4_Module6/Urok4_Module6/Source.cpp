#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include "Header.h"

#define M_PI 3.1415926535897932384626433832795

double hypotenuse(double *x, double *y); // ������� 1
double distance(double *x1, double *y1, double *x2, double *y2); // ������� 2 

void swap(int *a, int *b); // ������� 4

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int n;
	do
	{
		printf("������ �������� 11 �������.\n");
		printf("��� ������ �������� 0.\n");
		printf("������� n = ");
		scanf("%d", &n);

		switch (n)
		{
		case 1:
		{
			/*1. ���������� ������� double f(double x, double y),
			������� ��������� � ���������� ����� ���������� �������������� ������������,
			����� ��� ������ ������� x � y ��������*/

			double a, b;

			printf("������� �������� ������� � � b:\n");

			printf("a=");
			scanf("%lf", &a);

			printf("b=");
			scanf("%lf", &b);

			printf("����� ����������: %0.2lf", hypotenuse(&a, &b));

			printf("\n");
			system("pause");
			system("cls");
		}break;

		case 2:
		{
			/*2. �������� ������� double f(double x1, double y1, double x2, double y2),
			������� ��������� ���������� ����� ����� ������� (xl, yl) � (x2, y2).*/

			double x1, x2, y1, y2, min = -99, max = 100;

			x1 = (double)rand()*(max - min) / RAND_MAX + min;
			y1 = (double)rand()*(max - min) / RAND_MAX + min;
			x2 = (double)rand()*(max - min) / RAND_MAX + min;
			y2 = (double)rand()*(max - min) / RAND_MAX + min;

			printf("\n������ �����: (%0.2lf, %0.2lf)\n", x1, y1);
			printf("������ �����: (%0.2lf, %0.2lf)\n", x2, y2);

			printf("\n���������� ����� �������: %0.2lf\n", distance(&x1, &y1, &x2, &y2));


			printf("\n");
			system("pause");
			system("cls");
		}break;

		case 3:
		{
			/*3. �������� ��������� ������� � ����� ������ int f(�)
			� � ������� �������� ����������. ����������������� ������ ������������� �������*/



			printf("\n");
			system("pause");
			system("cls");

		}break;

		case 4:
		{
			/*4. �������� ������� swap(int* a, int* b), ������� �������� ��������
			���������� a � b ���, ��� ����� �������� a ����� ������� �������� b � ��������.  */

			int a, b, min = 0, max = 50;

			a = rand()*(max - min) / RAND_MAX + min;
			b = rand()*(max - min) / RAND_MAX + min;

			printf("\n��������� �������� �����:\n");
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

