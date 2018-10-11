#include<iostream>
#include<math.h>
#include<cmath>

using namespace std;

void rec(double a, double b, double c, double &ci, double &s)
{
	ci = a + b + c;
	double m = ci / 2;
	s = sqrt(m * (m - a) * (m - b) * (m -c));
	return;
}


int main()
{
	double a, b, c, ci, s, n;
	int i = 0;
	while (cin >> a >> b >> c)
	{
		i++;
		cout << "Case " << i << ": ";
		n = (a + b + c) / 2;
		if (n > a && n > b && n > c)
		{
			rec(a, b, c, ci, s);
			cout << ci << ", " << s << endl;
		}
		else
		{
			cout << "不能构成三角形" << endl;
		}
	}
	return 0;
}