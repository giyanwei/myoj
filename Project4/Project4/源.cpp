#include<iostream>
#include<cmath>

using namespace std;

int out[100000];

int main()
{
	int m, n, re, weishu, ii, mm, h, num = 0;
	double i;
	cin >> m >> n;
	while (m <= n)
	{
		int v = 0, k = 0;
		i = 0;
		if (m == 1)
		{
			m++;
			continue;
		}
		mm = m - 1;
		while (mm > 1)
		{
			if (m % mm == 0)
			{
				v = 1; break;
			}
			mm--;
		}
		if (v == 1)
		{
			m++;
			continue;
		}
		while (m % int(pow(10.0, i)) != m)
		{
			i++;
		}
		weishu = i;
		i = 0;
		ii = weishu;
		mm = m;
		re = 0;
		while (i <= weishu)
		{
			if (weishu == 1)
			{
				re = m; break;
			}
			h = mm % 10;
			re = re + h * pow(10, ii - 1);
			mm = (mm - h) / 10;
			ii--, i++;
		}
		//re = re + h;
		//cout << re;
		int er = re - 1;

		while (er > 1)
		{
			if (re % er == 0)
			{
				k = 1; break;
			}
			er--;
		}
		if (k == 0)
		{
			out[num] = m;
			num++;
		}
		m++;
	}
	if (num == 0)
	{
		cout << "No" << endl;
	}
	else
	{
		num--;
		int num1 = 0;
		while (num1 <= num)
		{
			cout << out[num1];
			num1++;
			if (num1 != num + 1)
			{
				cout << ",";
			}
		}
	}
	return 0;
}