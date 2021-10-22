#include <iostream>
#include <math.h>

using namespace std;

void ExerciseFirstNumber1()
{
	int a, b;
	cout << "Введите a и б: " << endl;
	cin >> a >> b;
	if (a > b) cout << a << endl;
	else cout << b << endl;
}

void ExerciseFirstNumber2()
{
	int n1, n2, n3;
	cout << "Введите n1, n2, n3" << endl;
	cin >> n1 >> n2 >> n3;
	if (n1 < n2) n1 = n2;
	if (n1 < n3) n1 = n3;
	cout << n1 << endl;

}

void ExerciseFirstNumber3()
{
	bool b;
	cout << "Хотите купить машину?" << endl;
	cin >> b;
	if (b == 1)
	{
		cout << "Хотите Audi?" << endl;
		cin >> b;

		if (b == 1) cout << "Пройдемте со мной." << endl;
		else cout << "Тогда вам в соседний отдел." << endl;
	}
	else cout << "Так зачем вы сюда пришли?" << endl;
}

void ExerciseFirstNumber4()
{
	int n, k, m, res = 0;
	cin >> k >> m >> n;
	if (n <= k) res = 2 * m;
	else
	{
		res = 2 * (int)n / k * m;
		if (2 * n % k != 0) res += m;
	}
	cout << res << endl;
	
}

void ExerciseFirstNumber5()
{
	int dayNumber;
	cout << "Введите день недели: " << endl;
	cin >> dayNumber;
	if ((dayNumber < 1) || (dayNumber > 7)) cout << "Ошибка, такого дня недели не существует" << endl;
	else
	{
		switch (dayNumber)
		{
		case 1:
			cout << "Понидельник: Экскурсия." << endl;
			break;
		case 2:
			cout << "Вторник: Учеба." << endl;
			break;
		case 3:
			cout << "Среда: В 17:00 тренировка." << endl;
			break;
		case 4:
			cout << "Четверг: Соревнования по шашкам." << endl;
			break;
		case 5:
			cout << "Пятница: Тусовка." << endl;
			break;

		case 6:
			cout << "Суббота: Встреча." << endl;
			break;
		case 7:
			cout << "Воскресенье: Что угодно." << endl;
			break;
		}
	}
}

void ExerciseSecondNumber1()
{
	int a, b, c;
	double discriminant;
	cout << "Введите a: " << endl;
	cin >> a;
	cout << "Введите b: " << endl;
	cin >> b;
	cout << "Введите c: " << endl;
	cin >> c;
	discriminant = pow(b, 2) - 4 * a * c;
	if (discriminant < 0) cout << "Корней нет." << endl;
	if (discriminant > 0)
	{
		cout << "Два корня:" << endl;
		int x1 = (-b - sqrt(discriminant)) / (2 * a);
		int x2 = (-b + sqrt(discriminant)) / (2 * a);
		cout << "x1 = " << x1 << endl;;
		cout << "x2 = " << x2 << endl;
	}
	if (discriminant == 0)
	{
		cout << "Один корень:" << endl;
		int x1 = (-b - sqrt(discriminant)) / (2 * a);
		cout << "x1 = " << x1 << endl;;
	}
}

void ExerciseSecondNumber2()
{
	int a, b, c;
	cout << "Введите первую сторону треугольника: " << endl;
	cin >> a;
	cout << "Введите вторую сторону треугольника: " << endl;
	cin >> b;
	cout << "Введите третью сторону треугольника: " << endl;
	cin >> c;
	if (c >= (a + b) || b >= (a + c) || a >= (c + b)) cout << "Ваш треугольник - не существует" << endl;
	else
	{
		int c2, b2, a2;
		c2 = pow(c, 2);
		b2 = pow(b, 2);
		a2 = pow(a, 2);
		if (a2 + b2 == c2 || a2 + c2 == b2 || c2 + b2 == a2) cout << "Ваш треугольник - прямоугольный" << endl;
		if (a == b || b == c || c == a) cout << "Вам треугольник - равнобедренный" << endl;
		if (a == b && a == c && b == c) cout << "Ваш треугольник - равносторонний" << endl;
		if (a != b && a != c && b != c) cout << "Ваш треугольник - разносторонний" << endl;

	}
}

void ExerciseSecondNumber3()
{
	int n;
	cout << "Введите число коров: " << endl;
	cin >> n;
	if (n > 100 || n < 0)
	{
		cout << "Вы ввели неправильное число." << endl;
		return;
	}
	if (n >= 5 && n <= 20)
	{
		cout << "На лугу пасётся " << n << " коров" << endl;
		return;
	}
	switch (n%10)
	{
	case 1: 
		cout << "На лугу пасётся " << n << " корова" << endl;
		break;
	case 3:
	case 4:
	case 2: 
		cout << "На лугу пасётся " << n << " коровы" << endl;
		break;
	case 6:
	case 7:
	case 8:
	case 9:
	case 0:
	case 5:
		cout << "На лугу пасётся " << n <<  " коров" << endl;
	}

}

void ExerciseSecondNumber4()
{
	int n;
	cout << "Номер для недели: " << endl;
	cin >> n;
	if (n > 8 || n < 0)
	{
		cout << "Вы ввели неправильное число." << endl;
		return;
	}
	switch (n)
	{
	case 1:
		cout << "Сегодня: Понедельник" << endl;
		break;
	case 2:
		cout << "Сегодня: Вторник" << endl;
		break;
	case 3:
		cout << "Сегодня: Среда" << endl;
		break;
	case 4:
		cout << "Сегодня: Четверг" << endl;
		break;
	case 5:
		cout << "Сегодня: Пятница" << endl;
		break;
	case 6:
		cout << "Сегодня: Суббота" << endl;
		break;
	case 7:
		cout << "Сегодня: Воскресенье" << endl;
		break;
	}

}

void ExerciseSecondNumber5()
{
	int a, b, c;
	cout << "Введите a: " << endl;
	cin >> a;
	cout << "Введите b: " << endl;
	cin >> b;
	cout << "Введите c: " << endl;
	cin >> c;
	bool isEven = false, isNotEven = false;
	if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0) isEven = true;
	if (a % 2 != 0 || b % 2 != 0 || c % 2 != 0) isNotEven = true;
	if (isEven && isNotEven) cout << "YES" << endl;
	else cout << "NO" << endl;
}


int main()
{
	setlocale(LC_ALL, "ru");
	ExerciseFirstNumber1();
	ExerciseFirstNumber2();
	ExerciseFirstNumber3();
	ExerciseFirstNumber4();
	ExerciseFirstNumber5();
	ExerciseSecondNumber1();
	ExerciseSecondNumber2();
	ExerciseSecondNumber3();
	ExerciseSecondNumber4();
	ExerciseSecondNumber5();
	system("pause");
	return 1;
}