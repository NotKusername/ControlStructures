#include <iostream>
using namespace std;

    #define 123

void main()
{
	setlocale(LC_ALL, "");

#ifdef 123




	int temperature;
	cout << "������� ����������� �������:"; cin >> temperature;
	if (temperature > 70)
	{
		cout << "�� ���� ��������������" << endl;

	}
	else if (temperature > 50)
	{
		cout << "����� ���� ����" << endl;

	}
	else if (temperature > 35)
	{
		cout << "������" << endl;

	}
	else if (temperature > 25)
	{
		cout << "������ �����" << endl;

	}
	else if (temperature > 15)
	{
		cout << "�����" << endl;

	}
	else if (temperature > 5)
	{
		cout << "���������" << endl;

	}
	else if (temperature > 0)
	{
		cout << "�������" << endl;
	}
	else if (temperature > -10)
	{
		cout << "��������" << endl;
	}
	else if  (temperature > -40)
	{
		cout << "���� �����" << endl;
	}

		
#endif






}

