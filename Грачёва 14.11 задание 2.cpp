﻿#include <iostream>

using namespace std;
int main()
{
	setlocale(0, "");
	int n = 10;
	int a = 0;
	int b = 1;

	cout << " Первые " << n << " чисел Фибоначчи:" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << a << " ";
		int sum = a + b;
		a = b;
		b = sum;
	}
	return 0;
}