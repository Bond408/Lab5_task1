#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#define M_PI 3.14159265358979323846
void main()
{
	float gr;
	setlocale(LC_ALL, "RUS");
	printf("Введите градусы\n");
	scanf_s("%f", &gr);
	printf("Синус %.lf градусов равен %lf\n", gr, sin(gr*M_PI/180));



}