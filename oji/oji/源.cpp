#include<iostream>
#include<cmath>
#include<string>

using namespace std;

char a[65536], b[65536];

int main()
{
	int aa, bb, i = 1;
	unsigned long long answer;
	while (cin >> a >> b)
	{
		aa = atoi(a), bb = atoi(b);
		answer = aa * bb;
		cout << "Case " << i << ": " << aa << "*" << bb << "=" << answer << endl;
		i++;
	}
}