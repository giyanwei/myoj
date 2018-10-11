#include<iostream>

using namespace std;

int a[65536];

int main()
{
	int n, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int ii = 0; ii < n; ii++)
	{
		for (int iii = 0; iii < n; iii++)
		{
			if (a[ii] < a[iii])
			{
				int judge = 0;
				for (int iiii = 2; iiii <= a[ii]; iiii++)
				{
					if (a[ii] % iiii == 0 && a[iii] % iiii == 0)
					{
						judge = 1;
						break;
					}
				}
				if (judge == 0)
				{
					sum++;
				}
			}
		}
	}
	cout << sum << endl;
	return 0;
}