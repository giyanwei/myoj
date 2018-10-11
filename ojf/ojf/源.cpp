#include<iostream>
#include<algorithm>
#include<stdio.h>

using namespace std;

int in[65536];

int comp(const void *a, const void *b)
{
	int *pa = (int*)a;
	int *pb = (int*)b;
	return (*pa) - (*pb);
}

int main()
{
	int m = 0;
	int i = 0, h;
	while (in[i] != EOF)
	{
		i = 0;
		m++;
		while (cin >> in[i])
		{
			if (cin.get() == '\n')
			{
				break;
			}
			i++;
		}
		i++;
		qsort(in, i, sizeof(int), comp);
		cout << "Case " << m << ": ";
		h = 0;
		while (h < i)
		{
			cout << in[h];
			if (h != i - 1)
			{
				cout << " ";
			}
			h++;
		}
		cout << endl;
	}
	return 0;
}