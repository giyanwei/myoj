#include<iostream>

using namespace std;

int main()
{
	const int a = 3;
	int b = 4;
	const int *p = &b;
	b = 5;
	cout << *p;
	return 0;
}