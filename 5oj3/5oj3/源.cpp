#include<iostream>

using namespace std;

int main()
{
	int m, n, sum = 0, x, a[100];
	cin >> m >> n;
	if (m <= 2 || n <= 2)
	{
		while (cin >> x)
		{
			sum += x;
		}
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			cin >> x;
			sum += x;
		}
		for (int iii = 0; iii < m - 2; iii++)
		{
			for (int ii = 0; ii < n; ii++)
			{
				cin >> x;
				a[ii] = x;
			}
			sum = sum + a[0] + a[n - 1];
		}
		for (int i = 1; i <= n; i++)
		{
			cin >> x;
			sum += x;
		}
	}
	cout << sum << endl;
	return 0;
}