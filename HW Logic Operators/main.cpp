#include <iostream>
using namespace std;

#define FIRST_TASK
//#define SECOND_TASK
int main()
{
	setlocale(LC_ALL, "Rus");

#ifdef FIRST_TASK
	int answer1, answer2, answer3, answer4, answer5;
	int answers = 0;
	cout << "\t\t��������� �� ���� ���� Destiny 2\n" << endl;
	cout << "1 ������:\n������������� - ��� ������ �� �������������, \n����� �������� - ���� �� ����� ����� ��� \n��������������� ������ ������� - ������ ���� \n�� ����� ���������� ����� �������������� ���������, \n���� ��� �� ����� �������� ���� �� ���������.\n\n� ��� ���� ����?" << endl;
	cout << "\n\t�������� ����� ������" << endl;
	cout << "\t1 - �����������\n\t2 - �������\n\t3 - ������ ����\n\t4 - �������� ���� �����\n" << endl;
	cout << "�����: "; cin >> answer1;
	if (answer1 == 3)
	{
		cout << "����� ������" << endl;
		answers++;
	}
	else if(answer1 == 1)
	{
		cout << "����� ��������" << endl;
	}
	else if (answer1 == 2)
	{
		cout << "����� ��������" << endl;
	}
	else if (answer1 == 4)
	{
		cout << "����� ��������" << endl;
	}
	else
	{
		cout << "�������� ����, ��������� ������ 1,2,3 ��� 4" << endl;
		return 1;
	}

	cout << "\n2 ������:\n����� ������ �� ��������� ��� ���������. \n���������� ��... ������� ������. �� �������� � ��� \n����� � ��������...\n\n��� ������� ..." << endl;
	cout << "\n\t�������� ����� ������" << endl;
	cout << "\t1 - �����\n\t2 - ����\n\t3 - �� - ������� �����\n\t4 - ���������\n" << endl;
	cout << "�����: "; cin >> answer2;
	if (answer2 == 4)
	{
		cout << "����� ������" << endl;
		answers++;
	}
	else if (answer2 == 1)
	{
		cout << "����� ��������" << endl;
	}
	else if (answer2 == 2)
	{
		cout << "����� ��������" << endl;
	}
	else if (answer2 == 3)
	{
		cout << "����� ��������" << endl;
	}
	else
	{
		cout << "�������� ����, ��������� ������ 1,2,3 ��� 4" << endl;
		return 1;
	}

	cout << "\n3 ������:\n������� ��� ����� ������� ��������� - ������� \n������ � ������ ������� �������?\n" << endl;
	cout << "\n\t�������� ����� ������" << endl;
	cout << "\t1 - 43\n\t2 - 52\n\t3 - 14\n\t4 - �� �����\n" << endl;
	cout << "�����: "; cin >> answer3;
	if (answer3 == 2)
	{
		cout << "����� ������" << endl;
		answers++;
	}
	else if (answer3 == 1)
	{
		cout << "����� ��������" << endl;
	}
	else if (answer3 == 3)
	{
		cout << "����� ��������" << endl;
	}
	else if (answer3 == 4)
	{
		cout << "����� ��������" << endl;
	}
	else
	{
		cout << "�������� ����, ��������� ������ 1,2,3 ��� 4" << endl;
		return 1;
	}

	cout << "\n4 ������:\n������� ���������, ������������ �����... \n��� ...?" << endl;
	cout << "\n\t�������� ����� ������" << endl;
	cout << "\t1 - ����� �����\n\t2 - �������\n\t3 - ������ ����\n\t4 - ���� ��������� � �����\n" << endl;
	cout << "�����: "; cin >> answer4;
	if (answer4 == 2)
	{
		cout << "����� ������" << endl;
		answers++;
	}
	else if (answer4 == 1)
	{
		cout << "����� ��������" << endl;
	}
	else if (answer4 == 3)
	{
		cout << "����� ��������" << endl;
	}
	else if (answer4 == 4)
	{
		cout << "����� ��������" << endl;
	}
	else
	{
		cout << "�������� ����, ��������� ������ 1,2,3 ��� 4" << endl;
		return 1;
	}

	cout << "\n5 ������:\n����� ������� ��� ������� ���������������� \n����� � ������ ������� � ��������� �������?" << endl;
	cout << "\n\t�������� ����� ������" << endl;
	cout << "\t1 - ������\n\t2 - ����\n\t3 - ��������\n\t4 - ����" << endl;
	cout << "�����: "; cin >> answer5;
	if (answer5 == 3)
	{
		cout << "����� ������" << endl;
		answers++;
	}
	else if (answer5 == 1)
	{
		cout << "����� ��������" << endl;
	}
	else if (answer5 == 2)
	{
		cout << "����� ��������" << endl;
	}
	else if (answer5 == 4)
	{
		cout << "����� ��������" << endl;
	}
	else
	{
		cout << "�������� ����, ��������� ������ 1,2,3 ��� 4" << endl;
		return 1;
	}

	cout << "\n\t\t��������� ���������" << endl;
	cout << "������ �������: " << answers << endl;
#endif // FIRST_TASK

#ifdef SECOND_TASK
	int operation = 0;
	double a, b = 0;
	double solution = 0;
	cout << "\t\t�����������" << endl;
	cout << "�������� ���������:\n\t1 - ��������\n\t2 - ���������\n\t3 - ���������\n\t4 - �������\n"; cin >> operation;
	if (operation == 1)
	{
		cout << "��������. ������� �����:" << endl;
		cin >> a;
		cin >> b;
		double solution = a + b;
		cout << "�����: " << a << " + " << b << " = " << solution << endl;
	}
	else if (operation == 2)
	{
		cout << "���������. ������� �����:" << endl;
		cin >> a;
		cin >> b;
		double solution = a - b;
		cout << "�����: " << a << " - " << b << " = " << solution << endl;
	}
	else if (operation == 3)
	{
		cout << "���������. ������� �����:" << endl;
		cin >> a;
		cin >> b;
		double solution = a * b;
		cout << "�����: " << a << " * " << b << " = " << solution << endl;
	}
	else if (operation == 4)
	{
		cout << "�������. ������� �����:" << endl;
		cin >> a;
		cin >> b;
		double solution = a / b;
		cout << "�����: " << a << " / " << b << " = " << solution << endl;
	}
#endif // SECOND_TASK
}