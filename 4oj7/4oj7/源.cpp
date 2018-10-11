#include<iostream>

using namespace std;

int square[100][100];

int main()
{
	int n, num = 1, iline, icolumn, nature;
	while (cin >> n)
	{
		iline = 0;
		icolumn = (n - 1) / 2;
		nature = 1;
		cout << "Case " << num++ << ":" << endl;
		square[iline][icolumn] = nature;
		while (nature < n * n)
		{
			if (nature % n == 0)
			{
				iline++;
			}
			else
			{
				iline--, icolumn++;
			}
			if (iline > n - 1)
			{
				iline = 0;
			}
			if (iline < 0)
			{
				iline = n - 1;
			}
			if (icolumn > n - 1)
			{
				icolumn = 0;
			}
			nature++;
			square[iline][icolumn] = nature;
		}
		for (int i = 0; i <= n - 1; i++)
		{
			for (int ii = 0; ii <= n - 1; ii++)
			{
				if (ii != n - 1)
				{
					cout << square[i][ii] << " ";
				}
				else
				{
					cout << square[i][ii] << endl;
				}
			}
		}
	}
	return 0;
}