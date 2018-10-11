#include<iostream>

using namespace std;

int a[1000];

int main()
{
	int x, num = 1, i;
	while (cin >> x && x != EOF)
	{
		i = 0;
		while (cin >> a[i])
		{
			if (cin.get() == '\n')
			{
				break;
			}
			i++;
		}
		cout << "Case " << num++ << ": " << x << ", ";
		int judge = 0;
		for (int ii = 0; ii <= i; ii++)
		{
			if (x == a[ii])
			{
				cout << ii << endl;
				judge = 1;
				break;
			}
		}
		if (judge == 0)
		{
			cout << "-1" << endl;
		}
	}
	return 0;
}