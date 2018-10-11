#include<iostream>

using namespace std;

int x[1024]{ 0 }, total = 0;

void split(int n, int m)
{
	int rest, i, j;
	for (i = 1; i <= n; i++)
	{
		if (i >= x[m - 1])
		{
			x[m] = i;
			rest = n - i;
			if (rest == 0 && m > 1)
			{
				total++;
			}
			else
			{
				split(rest, m + 1);
			}
			x[m] = 0;
		}
	}
	
}

int main()
{
	int n;
	while (cin >> n)
	{
		split(n, 1);
		cout << total + 1 << endl;
		total = 0;
	}
	return 0;
}