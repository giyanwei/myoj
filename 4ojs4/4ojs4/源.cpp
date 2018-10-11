#include<iostream>

using namespace std;

int main()
{
	int a[17];
	int i = 0, sum = 0;
	while (cin >> a[i])
	{
		if (a[i] == 0)
		{
			break;
		}
		i++;
	}
	for (int ii = 0; ii < i; ii++)
	{
		for (int iii = 0; iii < i; iii++)
		{
			if (2 * a[ii] == a[iii])
			{
				sum++;
			}
		}
	}
	cout << sum << endl;
	return 0;
}