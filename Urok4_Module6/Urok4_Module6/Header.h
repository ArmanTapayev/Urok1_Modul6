#pragma once

enum Arrange { increase, decrease };

double hypotenuse(double *x, double *y); // Задание 1
double distance(double *x1, double *y1, double *x2, double *y2); // Задание 2 
int overloadFuntcion(int x); // Задание 3
int overloadFuntcion(int x, int y); // Задание 3
float overloadFuntcion(float x); // Задание 3
float overloadFuntcion(float x, float y); // Задание 3
void swap(int *a, int *b); // Задание 4
void swap(int &a, int &b); // Задание 5
int gcd(int x, int y); // Задание 6
void extremumNumbers(int *arr, int len); // Задание 7
void arr(int *arr, int len, Arrange dir); // Задание 8
void evenness(int *arr, int len); // Задание 9

void fillArrayInteger(int * mas, int len, int *min, int *max);
void printArray(int * mas, int len);
void arrangeArray(int *arr, int len, Arrange dir);