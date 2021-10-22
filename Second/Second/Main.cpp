#include <iostream>
#include <math.h>

using namespace std;

void ExerciseFirstNumber1()
{
	int a, b;
	cout << "������� a � �: " << endl;
	cin >> a >> b;
	if (a > b) cout << a << endl;
	else cout << b << endl;
}

void ExerciseFirstNumber2()
{
	int n1, n2, n3;
	cout << "������� n1, n2, n3" << endl;
	cin >> n1 >> n2 >> n3;
	if (n1 < n2) n1 = n2;
	if (n1 < n3) n1 = n3;
	cout << n1 << endl;

}

void ExerciseFirstNumber3()
{
	bool b;
	cout << "������ ������ ������?" << endl;
	cin >> b;
	if (b == 1)
	{
		cout << "������ Audi?" << endl;
		cin >> b;

		if (b == 1) cout << "��������� �� ����." << endl;
		else cout << "����� ��� � �������� �����." << endl;
	}
	else cout << "��� ����� �� ���� ������?" << endl;
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
	cout << "������� ���� ������: " << endl;
	cin >> dayNumber;
	if ((dayNumber < 1) || (dayNumber > 7)) cout << "������, ������ ��� ������ �� ����������" << endl;
	else
	{
		switch (dayNumber)
		{
		case 1:
			cout << "�����������: ���������." << endl;
			break;
		case 2:
			cout << "�������: �����." << endl;
			break;
		case 3:
			cout << "�����: � 17:00 ����������." << endl;
			break;
		case 4:
			cout << "�������: ������������ �� ������." << endl;
			break;
		case 5:
			cout << "�������: �������." << endl;
			break;

		case 6:
			cout << "�������: �������." << endl;
			break;
		case 7:
			cout << "�����������: ��� ������." << endl;
			break;
		}
	}
}

void ExerciseSecondNumber1()
{
	int a, b, c;
	double discriminant;
	cout << "������� a: " << endl;
	cin >> a;
	cout << "������� b: " << endl;
	cin >> b;
	cout << "������� c: " << endl;
	cin >> c;
	discriminant = pow(b, 2) - 4 * a * c;
	if (discriminant < 0) cout << "������ ���." << endl;
	if (discriminant > 0)
	{
		cout << "��� �����:" << endl;
		int x1 = (-b - sqrt(discriminant)) / (2 * a);
		int x2 = (-b + sqrt(discriminant)) / (2 * a);
		cout << "x1 = " << x1 << endl;;
		cout << "x2 = " << x2 << endl;
	}
	if (discriminant == 0)
	{
		cout << "���� ������:" << endl;
		int x1 = (-b - sqrt(discriminant)) / (2 * a);
		cout << "x1 = " << x1 << endl;;
	}
}

void ExerciseSecondNumber2()
{
	int a, b, c;
	cout << "������� ������ ������� ������������: " << endl;
	cin >> a;
	cout << "������� ������ ������� ������������: " << endl;
	cin >> b;
	cout << "������� ������ ������� ������������: " << endl;
	cin >> c;
	if (c >= (a + b) || b >= (a + c) || a >= (c + b)) cout << "��� ����������� - �� ����������" << endl;
	else
	{
		int c2, b2, a2;
		c2 = pow(c, 2);
		b2 = pow(b, 2);
		a2 = pow(a, 2);
		if (a2 + b2 == c2 || a2 + c2 == b2 || c2 + b2 == a2) cout << "��� ����������� - �������������" << endl;
		if (a == b || b == c || c == a) cout << "��� ����������� - ��������������" << endl;
		if (a == b && a == c && b == c) cout << "��� ����������� - ��������������" << endl;
		if (a != b && a != c && b != c) cout << "��� ����������� - ��������������" << endl;

	}
}

void ExerciseSecondNumber3()
{
	int n;
	cout << "������� ����� �����: " << endl;
	cin >> n;
	if (n > 100 || n < 0)
	{
		cout << "�� ����� ������������ �����." << endl;
		return;
	}
	if (n >= 5 && n <= 20)
	{
		cout << "�� ���� ������ " << n << " �����" << endl;
		return;
	}
	switch (n%10)
	{
	case 1: 
		cout << "�� ���� ������ " << n << " ������" << endl;
		break;
	case 3:
	case 4:
	case 2: 
		cout << "�� ���� ������ " << n << " ������" << endl;
		break;
	case 6:
	case 7:
	case 8:
	case 9:
	case 0:
	case 5:
		cout << "�� ���� ������ " << n <<  " �����" << endl;
	}

}

void ExerciseSecondNumber4()
{
	int n;
	cout << "����� ��� ������: " << endl;
	cin >> n;
	if (n > 8 || n < 0)
	{
		cout << "�� ����� ������������ �����." << endl;
		return;
	}
	switch (n)
	{
	case 1:
		cout << "�������: �����������" << endl;
		break;
	case 2:
		cout << "�������: �������" << endl;
		break;
	case 3:
		cout << "�������: �����" << endl;
		break;
	case 4:
		cout << "�������: �������" << endl;
		break;
	case 5:
		cout << "�������: �������" << endl;
		break;
	case 6:
		cout << "�������: �������" << endl;
		break;
	case 7:
		cout << "�������: �����������" << endl;
		break;
	}

}

void ExerciseSecondNumber5()
{
	int a, b, c;
	cout << "������� a: " << endl;
	cin >> a;
	cout << "������� b: " << endl;
	cin >> b;
	cout << "������� c: " << endl;
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