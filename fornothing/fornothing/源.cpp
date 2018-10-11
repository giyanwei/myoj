#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int a, b, temp;
	while (cin >> a >> b)
	{
		b = pow(b, b);
		if (a > b)
		{
			temp = a;
			a = b;
			b = temp;
		}
		while (b / a != 0)
		{
			b = a;
			a = b % a;
		}
		cout << a << endl;
	}
	return 0;
}