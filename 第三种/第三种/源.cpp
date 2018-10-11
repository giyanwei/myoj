#include<iostream>

using namespace std;

int main()
{
	int in1, in2, a, b;
	cin >> in1 >> in2;
	if (in1 > 0 && in2 > 0)
	{
		if (in1 > in2)
		{
			a = in2;
		}
		else
		{
			a = in1;
		}
		while (a > 0)
		{
			if (in1 % a == 0 && in2 % a == 0)
			{
				cout << a << endl;
				break;
			}
			a--;
		}
	}
	return 0;
}