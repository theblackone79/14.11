#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int number;
	int d;
	int sum = 0;
	int product = 1;
	cout << "введите целое число: ";
	cin >> number;
	int originalNumber = number;
	while (number != 0)
	{
		d = number % 10;
		sum += d;
		product *= d;
		number /= 10;
	}
	cout << "сумма цифр числа " << originalNumber << " = " << sum << endl;
	cout << "произведение цифр числа " << originalNumber << " = " << product << endl;
	return 0;
}