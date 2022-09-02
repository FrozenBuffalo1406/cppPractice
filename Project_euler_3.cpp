#include <iostream>
using namespace std;

int main()
{
	int bil;
	long n, m;
	cout << "insert number you want to factor to ";
	cin >> n;

	for (int k = 0; k < n; k++)
	{
		if (n % k == 0)
			;
		m = k;
		cout << m << " ";
	}

	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				bil = bil + 1;
			}
		}
		if (bil == 3)
			cout << i << " ";
	}
}