#include<iostream>

#define MOD 32767

using namespace std;

int pell[65536];

void setpell(int n)
{
	int i;
	pell[1] = 1;
	pell[2] = 2;
	for (i = 3; i <= n; i++)
	{
		pell[i] = (pell[i - 1] * 2 + pell[i - 2]) % MOD;
	}
}

int main(void)
{
	int n, i;
	setpell(65535);
	cin >> n;
	while (n--)
	{
		cin >> i;
		cout << pell[i] << endl;
	}
	return 0;
}