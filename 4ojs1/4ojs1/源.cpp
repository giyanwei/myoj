#include<iostream>

using namespace std;

int fb(int n)
{
	if (n == 1 || n == 0)
	{
		return 1;
	}
	else
	{
		return fb(n - 2) + fb(n - 1);
	}
}

int main()
{
	int N;
	while (cin >> N)
	{
		cout << fb(N) << endl;
		
	}
	return 0;
}