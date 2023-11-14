#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int num;
	cout << " Напишите целое число: ";
	cin >> num;
	cout << " Делители числа " << num << ": ";
	for (int i = 1; i <= num; ++i)
	{
		if (num % i == 0)
		{
			cout << i << " ";
		}
	}
	return 0;
}