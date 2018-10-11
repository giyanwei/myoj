#include<iostream>

using namespace std;

int a[1000], b[1000];

int main()
{
	int num, ia = 0, ib = 0, n, an = 0;
	cin >> num;
	n = num;
	while (n > 0)
	{
		cin >> a[ia];
		ia++;
		n--;
	}
	ia--;
	n = num;
	while (n > 0)
	{
		cin >> b[ib];
		ib++;
		n--;
	}
	ib--;
	while (ia > -1)
	{
		an = an + a[ia] * b[ib];
		ia--, ib--;
	}
	cout << an;
	return 0;
}