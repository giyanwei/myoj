#include<iostream>
#include<algorithm>

using namespace std;

int in1[101], in2[101], out[201];

int main()
{
	int num = 0, i1 = 0, i2 = 0, i3 = 0,h;
		while ((cin >> in1[0]) && in1[0] != EOF || (cin >> in2[0]) && in2[0] != EOF)
		{
			while (cin >> in1[++i1])
			{
				if (cin.get() == '\n')
				{
					break;
				}
			}
			while (cin >> in2[++i2])
			{
				if (cin.get() == '\n')
				{
					break;
				}
			}
			cout << "Case " << ++num << ": ";
			while (i1 > -1)
			{
				out[i3++] = in1[i1--];
			}
			while (i2 > -1)
			{
				out[++i3] = in2[i2--];
			}
			sort(out, out + i3 + 1);
			for (int num1 = 0; num1 <= i3; num1++)
			{
				cout << out[num1];
				if (num1 != i3)
				{
					cout << " ";
				}
			}
			cout << endl;
			i3 = i2 = i1 = 0;
		}
		return 0;
}