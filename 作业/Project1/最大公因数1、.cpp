#include<iostream>

using namespace std;

//取小的函数
int min(int a, int b)
{
	
	if (a > b)
	{
		return b;
	}
	else
	{
		return a;
	}
}

int main()
{
	//oj好难
	int in1, in2, shua_oj;
	cin >> in1 >> in2;
	//排除输入的数小于等于0的情况
	if (in1 > 0 && in2 > 0)
	{
		shua_oj = 0;
		//i值小于输入的两个正整数中小的那个书的一半即停止循环，缩短运行时间
		for (int i = 1; i <= min(in1, in2) / 2; i++)
		{
			//得出最大的公约数
			if (in1 % i == 0 && in2 % i == 0)
			{
				shua_oj = i;
			}
		}
		//输出
		cout << "最大公约数是： " << shua_oj << endl;
	}
	return 0;
}