#include<iostream>

using namespace std;

int icon1[10000], icon2[10000];

int main()
{
	int m, n, same = 0, all, i;
	double pos = 0;
	cin >> m >> n;
	all = m * n;
	i = 0;
	while (i < all)
	{
		cin >> icon1[i];
		i++;
	}
	i = 0;
	while (i < all)
	{
		cin >> icon2[i];
		i++;
	}
	for (int ii = 0; ii < all; ii++)
	{
		if (icon1[ii] == icon2[ii])
		{
			same++;
		}
	}
	pos = 100 * double(same) / double(all);
	pos = pos * 100;
	pos = round(pos);
	pos /= 100;
	cout << pos << endl;
	return 0;
}