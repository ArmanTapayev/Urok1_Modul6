#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>
#include<time.h>

using namespace std;

void ShiftRight3(double *a, double *b, double *c);																				 //функция 1
void ShiftLeft3(double *a, double *b, double *c);																				 //функция 1
bool IsLeapYear(int *Year);																									   	 //функция 3
int MonthDays(int *Month, int *Year);																							 //функция 4
void PrevDate(int *Day, int *Month, int *Year);																					 //функция 5
void NextDate(int *Day, int *Month, int *Year);																					 //функция 6
double Dist(double *x1, double *y1, double *x2, double *y2, double *x3, double *y3);											 //функция 7
void Altitudes(double *xA, double *yA, double *xB, double *yB, double  *xC, double *yC, double *hA, double *hB, double *hC);	 //функция 7
double f(double *x, double *y);																									 //функция 8
double f(double *x1, double *y1, double *x2, double *y2);																		 //функция 9
int f(int *m2, int *m1, int *m0);																							     //функция 10


void main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	do
	{
		cout << "Введите номер задания n=";
		cin >> n;
		cout << endl;

			switch (n)
			{
				case 1:
				{
					/*1. Описать процедуру ShiftRight3(A, B, C),
					выполняющую правый циклический сдвиг: значение A переходит в B, 
					значение B — в C, значение C — в A (A, B, C — вещественные параметры, 
					являющиеся одновременно входными и выходными).
					С помощью этой процедуры выполнить правый циклический сдвиг для двух данных
					наборов из трех чисел: (A1, B1, C1) и (A2, B2, C2).*/

					double A, B, C;
					cout.precision(4);

						for (int i = 0; i < 2; i++)
						{
							A = (float)rand() * 40 / RAND_MAX + 10;
							B = (float)rand() * 40 / RAND_MAX + 10;
							C = (float)rand() * 40 / RAND_MAX + 10;

							cout << "Исходный вид:      " << A << "  " << B << "  "<< C << endl;

							ShiftRight3(&A, &B, &C);

							cout << "Циклический сдвиг: " << A<<"  "<<B<< "  "<<C<<"  " << endl;

							cout << endl;

						}

					cout << endl;
					system("pause");
					system("cls");
				}break;

				case 2:
				{
					/*2. Описать процедуру ShiftLeft3(A, B, C), 
					выполняющую левый циклический сдвиг: значение A переходит в C, 
					значение C — в B, значение B — в A (A, B, C — вещественные параметры, 
					являющиеся одновременно входными и выходными).
					С помощью этой процедуры выполнить левый циклический сдвиг для двух данных 
					наборов из трех чисел: (A1, B1, C1) и (A2, B2, C2).*/

					double A, B, C;
					cout.precision(4);

					for (int i = 0; i < 2; i++)
					{
						A = (float)rand() * 40 / RAND_MAX + 10;
						B = (float)rand() * 40 / RAND_MAX + 10;
						C = (float)rand() * 40 / RAND_MAX + 10;

						cout << "Исходный вид:      " << A << "  " << B << "  " << C << endl;

						ShiftLeft3(&A, &B, &C);

						cout << "Циклический сдвиг: " << A << "  " << B << "  " << C << "  " << endl;

						cout << endl;
					}

					cout << endl;
					system("pause");
					system("cls");
				}break;

				case 3:
				{
					/*3. Описать функцию IsLeapYear(Y) логического типа, которая возвращает True, 
					если год Y (целое положительное число) является високосным, 
					и False в противном случае. Вывести значение функции IsLeapYear 
					для пяти данных значений параметра Y.
					Високосным считается год, делящийся на 4, за исключением тех годов, 
					которые делятся на 100 и не делятся на 400.*/

					int A[10];

						for (int i = 0; i < 10; i++)
						{
							A[i] = 1900 + rand() % 999;

							IsLeapYear(&A[i])
								? cout << "Год "<<A[i]<<" високосный" << endl
								: cout << "Год " << A[i] << " не високосный" << endl;
						}

					cout << endl;
					system("pause");
					system("cls");

				}break;

				case 4:
				{
					/*4. Используя функцию IsLeapYear из задания 3, описать функцию
					MonthDays(M, Y) целого типа, которая возвращает количество дней для 
					M-го месяца года Y (1 ≤ M ≤ 12, Y > 0 — целые числа).
					Вывести значение функции MonthDays для данного года Y и месяцев
					M1, M2, M3.*/

					int Y, M1, M2, M3;

						while (1)
						{
							cout << "Введите год (Y): ";
							cin >> Y;
							cout << endl;

							cout << "Введите месяц 1 (M1): ";
							cin >> M1;
							cout << endl;

							cout << "Введите месяц 2 (M2): ";
							cin >> M2;
							cout << endl;

							cout << "Введите месяц 3 (M3): ";
							cin >> M3;
							cout << endl;
							if (((M1 >= 1) && (M1 <= 12)) && ((M2 >= 1) && (M2 <= 12)) && ((M3 >= 1) && (M3 <= 12)) && (Y > 0))
								break;
							cout << "Должно выполнятся условие: 1 ≤ M ≤ 12, Y > 0 " << endl;
							cout << "Введите данные еще раз." << endl;
						}
					

						cout << "Количество дней в месяце " << M1 << " года " << Y << " :" << MonthDays(&M1, &Y) << endl;
						cout << "Количество дней в месяце " << M2 << " года " << Y << " :" << MonthDays(&M2, &Y) << endl;
						cout << "Количество дней в месяце " << M3 << " года " << Y << " :" << MonthDays(&M3, &Y) << endl;

					cout << endl;
					system("pause");
					system("cls");

				}break;

				case 5:
				{
					/*5. Используя функцию MonthDays из задания 4, описать процедуру 
					PrevDate(D, M, Y), которая по информации о правильной дате, включающей день D,
					номер месяца M и год Y, определяет предыдущую дату 
					(параметры целого типа D, M, Y являются одновременно входными и выходными). 
					Применить процедуру PrevDate к трем исходным датам и вывести полученные
					значения предыдущих дат */

					int Y, M, D;

						while (1)
						{
							cout << "Введите год (Y): ";
							cin >> Y;
							cout << endl;

							cout << "Введите месяц (M): ";
							cin >> M;
							cout << endl;

							cout << "Введите день (D): ";
							cin >> D;
							cout << endl;

							if (((D >= 1) && (D <= 31)) && ((M >= 1) && (M <= 12)) && (Y > 0))
								break;
							cout << "Должно выполнятся условие: 1 ≤ D ≤ 31, 1 ≤ M ≤ 12, Y > 0 " << endl;
							cout << "Введите данные еще раз." << endl;
						}

						PrevDate(&D, &M, &Y);
						cout << "Предыдущая дата: ";
						cout << D<<"."<<M<<"."<< Y << endl;

					cout << endl;
					system("pause");
					system("cls");
				}break;

				case 6:
				{
					/*6. Используя функцию MonthDays из задания 4, описать процедуру 
					NextDate(D, M, Y), которая по информации о правильной дате, включающей день D,
					номер месяца M и год Y, определяет следующую дату
					(параметры целого типа D, M, Y являются одновременно входными и выходными).
					Применить процедуру NextDate к трем исходным датам и вывести 
					полученные значения следующих дат*/

					int D, M, Y;

					while (1)
					{
						cout << "Введите год (Y): ";
						cin >> Y;
						cout << endl;

						cout << "Введите месяц (M): ";
						cin >> M;
						cout << endl;

						cout << "Введите день (D): ";
						cin >> D;
						cout << endl;

						if (((D >= 1) && (D <= 31)) && ((M >= 1) && (M <= 12)) && (Y > 0))
							break;
						cout << "Должно выполнятся условие: 1 ≤ D ≤ 31, 1 ≤ M ≤ 12, Y > 0 " << endl;
						cout << "Введите данные еще раз." << endl;
					}

					NextDate(&D, &M, &Y);

					cout << "Следующая дата: ";
					cout << D << "." << M << "." << Y << endl;

					cout << endl;
					system("pause");
					system("cls");
				}break;

				case 7:
				{
					/*7. Используя функцию Dist из задания Proc59, описать процедуру
					Altitudes(xA, yA, xB, yB, xC, yC, hA, hB, hC), находящую высоты hA, hB, hC 
					треугольника ABC (выходные параметры), проведенные соответственно из 
					вершин A, B, C (их координаты являются входными параметрами). 
					С помощью этой процедуры найти высоты треугольников ABC, ABD, ACD, 
					если даны координаты точек A, B, C, D.*/

					double x[4], y[4], hA, hB, hC, hD;
					char A[4];
					cout.precision(4);
						

						for (int i = 0; i < 4; i++)
						{
							//cout.precision(4);
							x[i] = (float)rand() * 40 / RAND_MAX - 10;
							y[i] = (float)rand() * 40 / RAND_MAX - 10;
							A[i] = i + 65;
							cout << "Координаты вершины "<<A[i] <<"(" << x[i] << ", " << y[i] << ")" << endl;
						}
						cout << endl;

						cout << "Высоты треугольника ABC: " << endl;
						Altitudes(&x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &hA, &hB, &hC);
						cout << "hA = " << hA << endl;
						cout << "hB = " << hB << endl;
						cout << "hC = " << hC << endl;
						cout << endl;

						cout << "Высоты треугольника ABD: " << endl;
						Altitudes(&x[0], &y[0], &x[2], &y[2], &x[3], &y[3], &hA, &hB, &hD);
						cout << "hA = " << hA << endl;
						cout << "hB = " << hB << endl;
						cout << "hD = " << hD << endl;
						cout << endl;

						cout << "Высоты треугольника ABD: " << endl;
						Altitudes(&x[0], &y[0], &x[1], &y[1], &x[3], &y[3], &hA, &hB, &hD);
						cout << "hA = " << hA << endl;
						cout << "hC = " << hC << endl;
						cout << "hD = " << hD << endl;
						cout << endl;
											
					system("pause");
					system("cls");
				}break;

				case 8:
				{
					/* 8. Определите функцию double f(double x, double y), которая вычисляет и 
					возвращает длину гипотенузы прямоугольного треугольника, две другие стороны x 
					и y которого известны*/

					double a, b;

					cout << "Введите длину первого катета a = ";
					cin >> a;
					cout << endl;

					cout << "Введите длину второго катета b = ";
					cin >> b;
					cout << endl;

					cout << "Длина гипотенузы прямоугольного треугольника: " << f(&a, &b) << endl;

					system("pause");
					system("cls");
				}break;

				case 9:
				{
					/*9. Напишите функцию double f(double x1, double y1, double x2, double y2), 
					которая вычисляет расстояние между двумя точками (xl, yl) и (x2, y2)*/

					double x1, x2, y1, y2;

					cout << "Введите координаты точки 1 (x1, y1):" << endl;
					cout << "x1 = ";
					cin >> x1;
					cout << "y1 = ";
					cin >> y1;
					cout << endl;

					cout << "Введите координаты точки 2 (x2, y2):" << endl;
					cout << "x1 = ";
					cin >> x2;
					cout << "y1 = ";
					cin >> y2;
					cout << endl;

						cout << "Расстояние между двумя точками: " << f(&x1, &y1, &x2, &y2) << endl;

					system("pause");
					system("cls");
				}break;

				case 10:
				{
					/*10. Напишите функцию int f(int m2, int m1, int m0),
					которая вычисляет и возвращает натуральное число, первая (сотни),
					вторая (десятки) и третья (единицы) цифры которого равны соответственно
					m2, m1, m0*/

					int m2, m1, m0;

						cout << "Введите количество сотен m2: ";
						cin >> m2;
						cout << "Введите количество десятков m1: ";
						cin >> m1;
						cout << "Введите количество единиц m0: ";
						cin >> m0;

						cout << endl;
						cout<<"Полученное натуральное число: "<<f(&m2, &m1, &m0);

					cout << endl;
					system("pause");
					system("cls");

				}break;

		}
	} while (n != 0);

}

/*функция 1*/
void ShiftRight3(double *a, double *b, double *c) 
{
	double temp = *b;
	*b = *a;
	*a = *c;
	*c = temp;
}

/*функция 2*/
void ShiftLeft3(double *a, double *b, double *c)
{
	double temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

/*функция 3*/
bool IsLeapYear(int *Year)
{
	if ((*Year % 4 == 0) && (*Year % 100 != 0) || (*Year % 400 == 0))
		return true;
	else
		return false;
}

/*функция 4*/
int MonthDays(int *Month, int *Year)
{
	int Y = *Year;
	switch (*Month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
			break;

		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
			break;

		case 2:
			if (IsLeapYear(&Y))
				return 29;
			else
				return 28;
			break;

		default:
			return 0;
	}

}

/*функция 5*/
void PrevDate(int *Day, int *Month, int *Year)
{
	int M = *Month;
	int Y = *Year;

		if ((*Day == 1) && (*Month == 1))
		{
			*Year = *Year - 1;
		}

		if (*Day == 1)
		{
			switch (*Month)
			{
				case 3:
					M--;
					*Day = MonthDays(&M, &Y);
					break;

				case 5:
				case 7:
				case 10:
				case 12:
					*Day = 30;
					break;

				case 1:
				case 2:
				case 4:
				case 6:
				case 8:
				case 9:
				case 11:
					*Day = 31;
					break;

			}

			*Month = (*Month + 10) % 12 + 1;
		}
		else
			*Day = *Day - 1;

}

/*функция 6*/
void NextDate(int *Day, int *Month, int *Year)
{
	int M = *Month;
	int Y = *Year;
	int LastDay;

		if ((*Day == 31) && (*Month == 12))
		{
			*Year = *Year + 1;
		}

		switch (*Month)
		{
			case 2:
				LastDay = MonthDays(&M, &Y);
				break;

			case 4:
			case 6:
			case 9:
			case 11:
				LastDay = 30;
				break;

			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				LastDay = 31;
			break;

		}

			if (LastDay > *Day)
				*Day= *Day+1;
			else if(LastDay == *Day)
			{
				*Day = 1;
				*Month = *Month % 12 + 1;
			}

}

/*функция 7*/

/* Dist - функция, вычисляющая расстояние от вершины А(х1, у1) до стороны ВС с координатами
В(х2, у2) и С(х3, у3). */

double Dist(double *x1, double *y1, double *x2, double *y2, double *x3, double *y3)
{
	// Вычисляем коэффициены прямой Ах+Ву+С=0, проходящей через точки В(х2, у2) и С(х3, у3)
	double A, B, C;

		A = *y3 - *y2;
		B = *x2 - *x3;
		C = *y2*(*x3 - *x2) - *x2*(*y3 - *y2);

		// Вычисляем расстояние от вершины А(х1, у1) до прямой Ах+Ву+С=0
		double d;

			d = abs(A**x1 + B**y1) / (sqrt(pow(A, 2) + pow(B, 2)));

		return d;

}

/*Вводятся координаты вершмн треугольника АВС с вершинами А(xA,yA), В(xB,yB), С(xC,yC).
Выходные параметры - высоты hA, hB, hC, опущенные из вершин А(xA,yA), В(xB,yB), С(xC,yC)*/

void Altitudes(double *xA, double *yA, double *xB, double *yB, double  *xC, double *yC, double *hA, double *hB, double *hC)
{
	*hA = Dist(xA, yA, xB, yB, xC, yC);
	*hB = Dist(xB, yB, xA, yA, xC, yC);
	*hC = Dist(xC, yC, xA, yA, xB, yB);

}


/*функция 8*/
double f(double *x, double *y)
{
	return sqrt(pow(*x, 2) + pow(*y, 2));
}

/*функция 9*/
double f(double *x1, double *y1, double *x2, double *y2)
{
	return sqrt(pow((*x2 - *x1), 2) + pow((*y2 - *y1), 2));
}

/*функция 10*/
int f(int *m2, int *m1, int *m0)
{
	return *m2 * 100 +*m1 * 10 + *m0;
}



