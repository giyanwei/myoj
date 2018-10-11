#include<iostream>
#include<algorithm>

using namespace std;
int kid[65536];

int main()
{
	int n, m, num = 1;
	while (cin >> n >> m)
	{
		cout << "Case " << num++ << ": " << n << ", " << m << ", ";
		for (int ikid = 0; ikid < n; ikid++)
		{
			kid[ikid] = ikid + 1;
		}//cout << kid[0];
		int point = -1;
		int nn = n;
		while (n > 1)
		{
			for (int all = 1; all <= m; all++)
			{
				point++;
				if (point > n - 1)
				{
					point = 0;
				}
			}
			kid[point] = 2147483647; //cout << point;
			sort(kid, kid + n);// cout << kid[0];
			point--;
			n--;
		}
		cout << kid[0] << endl;
	}
	return 0;
}