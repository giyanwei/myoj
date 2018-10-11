#include<iostream>

using namespace std;

int main()
{
	int in1, in2, a, b, c;
	cin >> in1 >> in2;
	if (in1 > 0 && in2 > 0)
	{
		if (in1 > in2)
		{
			a = in2, b = in1;
		}
		else
		{
			a = in1, b = in2;
		}
		while (a > 0)
		{
			if (b % a == 0)
			{
				break;
			}
			c = b;
			b = a;
			a = c % a;
			
		}
		cout << a << endl;
	}
	return 0;
}