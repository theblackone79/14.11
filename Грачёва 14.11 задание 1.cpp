#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int sum = 0;
	for (int i = 1; i <= 150; ++i)
	{
		if (i % 5 == 0 || i % 7 == 0)
		{
			sum += i;
		}
	}
	cout << " ��������� : " << sum;
	return 0;
}
