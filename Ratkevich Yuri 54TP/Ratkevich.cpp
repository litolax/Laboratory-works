#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>
#include <windows.h>


void FirstTest()
{
	float pi(3.1415926), z1, z2, a;
	printf("Введите a: ");
	scanf_s("%f", &a);
	z1 = cos(a) + sin(a) + cos(3 * a) + sin(3 * a);
	z2 = 2 * sqrt(2) * cos(a) * sin(pi / 4 + 2 * a);
	printf("z1 = %f \n", z1);
	printf("z2 = %f \n", z2);
}
void SecondTest()
{
	float pi(3.1415926), z1, z2, a, b;
	printf("Введите a: ");
	scanf_s("%f", &a);
	printf("Введите b: ");
	scanf_s("%f", &b);
	z1 = pow((cos(a) - cos(b)), 2) - pow((sin(a) - sin(b)), 2);
	z2 = -4 * pow(sin((a - b) / 2), 2) * cos(a + b);
	printf("z1 = %f \n", z1);
	printf("z2 = %f \n", z2);
}

void ThirdTest()
{
	float pi(3.1415926), z1, z2, a;
	printf("Введите a: ");
	scanf_s("%f", &a);
	z1 = (1-2*pow(sin(a),2))/(1+sin(2*a));
	z2 = (1 - tan(a))/(1+tan(a));
	printf("z1 = %f \n", z1);
	printf("z2 = %f \n", z2);
}

void FourthTest()
{
	float pi(3.1415926), z1, z2, a, b;
	printf("Введите a: ");
	scanf_s("%f", &a);
	printf("Введите b: ");
	scanf_s("%f", &b);
	z1 = (sin(a) + cos(2 * b - a)) / (cos(a) - sin(2*b - a));
	z2 = (1 + sin(2 * b)) / cos(2 * b);
	printf("z1 = %f \n", z1);
	printf("z2 = %f \n", z2);
}

void FifthTest()
{
	float g, f, x, y, z;
	x = 12.3 * pow(10, -1);
	y = 15.4;
	z = 0.252 * pow(10, 3);
	g = pow(y, x + 1) / (pow(fabs(y - 2), 1 / 3) + 3) + (x + y / 2) / (2 * fabs(x + y)) * pow(x + 1, -1 / sin(z));
	printf("g = %f \n", g);
	x = 3.251;
	y = 0.325;
	z = 0.466 * pow(10, -4);
	f = pow(y + pow(x - 1, 1 / 3), 1 / 4) / (fabs(x - y) * (pow(sin(z), 2) + tan(z)));
	printf("f = %f \n", f);
}

int main()
{
    SetConsoleOutputCP(866);
    SetConsoleCP(866);
	setlocale(LC_ALL, "ru");
	FirstTest();
	SecondTest();
	ThirdTest();
	FourthTest();
	FifthTest();
	system("pause");
	return 1;
}