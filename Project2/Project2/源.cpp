#include<iostream>

using namespace std;

int main()
{
	int hen, shu, m, n, space,h;
	char in;
	cin >> shu >> hen >> in >> m;
	n = hen;
	while (n > 0)
	{
		cout << in << flush;
		n--;
	}
	cout << endl;
	shu--;
	n = shu;
	while (m == 0 && n > 1)
	{
		space = hen - 2;
		cout << in;
		while (space > 0)
		{
			cout << " ";
			space--;
		}
		cout << in << endl;
		n--;
	}
	n = shu;
	
	while (n > 1 && m == 1)
	{
		h = hen;
		while (h > 0)
		{
			cout << in;
			h--;
		}
		cout << endl;
		n--;
	}
	n = hen;
	while (n > 0)
	{
		cout << in;
		n--;
	}
	cout << endl;
	return 0;
}
