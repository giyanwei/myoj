#include<iostream>

using namespace std;

int main()
{
	const char ch[37] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char out[50];
	int ii;
	int in, pos;
	int i = 0;
	int m = 0;
	while (cin >> in >> pos)
	{
		m++;
		cout << "Case " << m << ": ";
		ii = 0;
		while (in)
		{
			i = in % pos;
			in /= pos;
			out[ii] = ch[i];
			ii++;
		}
		ii--;

		while (i > -1)
		{
			cout << out[ii];
			ii--;
		}
		cout << endl;
	}
	return 0;
}