#include <iostream>
#include <math.h>

using namespace std;

void First(double a, double b, double z, double e)
{
	double x, y, fi;
	int operationType = 0;
	if (z < -1) x = -z / 3;
	else if (z >= -1) x = fabs(z);
	cout << "Выберите значение функции 1 - 2x; 2 - x^2; 3 - x/3" << endl;
	cin >> operationType;
	switch (operationType)
	{
	case 1: fi = 2 * x; break;
	case 2: fi = pow(x, 2); break;
	case 3: fi = x / 3; break;
	default: cout << "Ошибка"; return; break;
	}
	y = a * fi - log(x + 2.5) + b * (pow(e, x) - pow(e, 1 / x));
	cout << "y = " << y << endl;
}

void Second(double a, double b, double z, double e)
{
	double x, fi;
	long double y;
	int operationType = 0;
	if (z > 0) x = -3 * z;
	else if (z <= 0) x = pow(z, 2);
	cout << "Выберите значение функции 1 - 2x; 2 - x^2; 3 - x/3" << endl;
	cin >> operationType;
	switch (operationType)
	{
	case 1: fi = 2 * x; break;
	case 2: fi = pow(x, 2); break;
	case 3: fi = x / 3; break;
	default: cout << "Ошибка"; return; break;
	}
	y = 2 * fi * (a * sin(x) + b * pow(e, -(x + 3)));
	cout << "y2 = " << y << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");
	double x, y, z, fi, a, b;
	int operationType = 0;
	const double e = 2.7182818284590;
	cout << "Введите a: " << endl;
	cin >> a;
	cout << "Введите b: " << endl;
	cin >> b;
	cout << "Введите z: " << endl;
	cin >> z;
	First(a, b, z, e);
	Second(a, b, z, e);
	system("pause");
	return 1;
}