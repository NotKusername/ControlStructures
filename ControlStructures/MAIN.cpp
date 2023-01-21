#include <iostream>
using namespace std;

    #define 123

void main()
{
	setlocale(LC_ALL, "");

#ifdef 123




	int temperature;
	cout << "Введите температуру воздуха:"; cin >> temperature;
	if (temperature > 70)
	{
		cout << "Не надо преувиличивать" << endl;

	}
	else if (temperature > 50)
	{
		cout << "Лучше сиди дома" << endl;

	}
	else if (temperature > 35)
	{
		cout << "Жарень" << endl;

	}
	else if (temperature > 25)
	{
		cout << "Весьма жарко" << endl;

	}
	else if (temperature > 15)
	{
		cout << "Тепло" << endl;

	}
	else if (temperature > 5)
	{
		cout << "Прохладно" << endl;

	}
	else if (temperature > 0)
	{
		cout << "Холодно" << endl;
	}
	else if (temperature > -10)
	{
		cout << "Холодень" << endl;
	}
	else if  (temperature > -40)
	{
		cout << "Жить можно" << endl;
	}

		
#endif






}

