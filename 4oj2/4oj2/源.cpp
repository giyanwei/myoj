#include<iostream>
#include<algorithm>

using namespace std;

bool comp(int a, int b)
{
	return a > b;
}

int in[65536];

int main()
{
	int i, num = 1;
	int out[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };//原始数组
	while (cin >> in[0] && in[0] != EOF)
	{
		i = 1;
		while (cin >> in[i])//将每一行的各个数输入一个数组
		{
			if (cin.get() == '\n')
			{
				break;
			}
			i++; //cout << in[i - 1] << i;
		}
		cout << "Case " << num++ << ": ";
		for (int ii = 0; ii <= i; ii++)//将in数组的各个元素与out数组中最小的数比较
		{
			sort(out, out + 10, comp); //cout << out[9];//降序排序
			if (in[ii] > out[9])//若输入的数大于out最小值，将out最小值替换为输入的数
			{
				out[9] = in[ii];
			}//cout << in[ii]; cout << out[0];
		}
		sort(out, out + 10, comp);
		for (int iii = 0; iii <= 9; iii++)
		{
			if (iii != 9)
			{
				cout << out[iii] << ", " << flush;
			}
			else
			{
				cout << out[iii] << endl;
			}
		}
	}
	return 0;
}