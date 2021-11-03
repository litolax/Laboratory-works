#include <iostream>
#include <math.h>

using namespace std;

void First()
{
	int n, k;
	cout << "Введите число N: " << endl;
	cin >> n;
	cout << "Введите число K: " << endl;
	cin >> k;
	if (n < 0 || n > 1000 || k < 0 || k < n || k > 1000) return;
	for (; n <= k; n++) if (n % 3 == 0 && n % 5 != 0) cout << n << " " << endl;
}

void Second()
{
	int n = 0, count = 0, sum = 0, first = 0;
	cout << "Введите число N: " << endl;
	cin >> n;
	first = n % 10;
	while (n > 0)
	{
		count++;
		first = n % 10;
		sum += first;
		n = n / 10;
	}
	cout << "Первая цифра числа N = " << first << endl;
	cout << "Количество цифр в числе N = " << count << endl;
	cout << "Сумма цифр числа N = " << sum << endl;
}

void Third()
{
	for (int i = 10; i < 100; i++) if (i == (2 * ((i % 10) * ((i / 10))))) cout << i << " " << endl;
}

void Fourth()
{
	int a = 0, b = 0;
	cout << "Введите a: " << endl;
	cin >> a;
	cout << "Введите b: " << endl;
	cin >> b;
	if (a < 1000 || a > 9999 || b < 1000 || b > 9999) return;
	for (; a <= b; a++)
	{
		int first = (a / 1000) % 10;
		int second = (a / 100) % 10;
		int third = (a / 10) % 10;
		int fourth = a % 10; 
		if (first == fourth && second == third) cout << a << " " << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "en_US.UTF-8");
	//First();
	//Second();
	//Third();
    //Fourth();
	for (int i = 10; i < 100; i++) if (i == (2 * ((i % 10) * ((i / 10))))) cout << i << " " << endl;
	system("pause");
	return 1;
}