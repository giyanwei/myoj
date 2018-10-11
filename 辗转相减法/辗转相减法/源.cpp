#include<iostream>

using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;

	if (m > 0 && n > 0)
	{
		while (m != n)
		{
			if (m < n)
			{
				n = n - m;
			}
			else
			{
				m = m - n;
			}
		}
		cout << m;
	}
	return 0;
}
