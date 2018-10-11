#include<iostream>
#include<cmath>

using namespace std;

void solver(double a, double b, double c, double &x1, double &x2)
{
	double temp;
	double d = b * b - 4 * a * c;
	x1 = (-b + sqrt(d)) / (2 * a);
	x2 = (-b - sqrt(d)) / (2 * a);
	if (x1 > x2)
	{
		temp = x1;
		x1 = x2;
		x2 = temp;
	}
	return;
}


 int main()
{
	 double a, b, c, x1, x2, d;
	 int i = 0;
	 while (cin >> a >> b >> c)
	 {
		 i++;
		 cout << "Case " << i << ": ";
		 d = b * b - 4 * a * c;
		 if (d < 0)
		 {
			 cout << "无实数根" << endl;
		 }
		 else
		 {
			 solver(a, b, c, x1, x2);
			 if (d > 0)
			 {
				 cout << x1 << ", " << x2 << endl;
			 }
			 else
			 {
				 cout << x1 << endl;
			 }
		 }
	 }
	 return 0;
}