#include<iostream>

using namespace std;

int later[25];

int main()
{
	int iout;
	int n, num = 1, ifa = 0, ila = 0, line;
	while (cin >> n)
	{
		line = 3;
		cout << "Case " << num++ << ":" << endl;
		cout << "1" << endl;
		int former[25] = { 1, 1 };
		cout << "1 1" << endl;
		while (line <= n + 1)
		{
			ifa = ila = 0;
			cout << "1 ";
			while (ila < line - 2)
			{
				later[ila++] = former[ifa] + former[ifa + 1];
				ifa++;
			}
			iout = 0;
			while (iout <= ila - 1)
			{
				cout << later[iout++] << " ";
			}
			cout << '1' << endl;
			ifa = 1, ila = 0;
			former[0] = 1;
			while (ifa <= line - 2)
			{
				former[ifa++] = later[ila++];
			}
			former[line - 1] = 1;
			line++;
		}
	}
	return 0;
}
