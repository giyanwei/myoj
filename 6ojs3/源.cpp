#include<iostream>
#include<string>

using namespace std;
int ch(char a)
{
	switch (a)
	{
	case '1':return 1;
	case '2':return 2;
	case '3':return 3;
	case '4':return 4;
	case '5':return 5;
	case '6':return 6;
	case '7':return 7;
	case '8':return 8;
	case '9':return 9;
	case '0':return 0;
	}
}

int main()
{
	string str;
	int i, x[10], j;
	while (getline(cin, str))
	{
		j = 0;
		x[0] = ch(str[0]);
		x[1] = ch(str[2]);
		x[2] = ch(str[3]);
		x[3] = ch(str[4]);
		x[4] = ch(str[6]);
		x[5] = ch(str[7]);
		x[6] = ch(str[8]);
		x[7] = ch(str[9]);
		x[8] = ch(str[10]);
		for (i = 0; i <= 8; i++)
		{
			j += x[i] * (i + 1);
		}
		j %= 11;
		if (j == 10)
		{
			if (str[12] == 'X')
			cout << "Right" << endl;
			else
			{
				for (i = 0; i <= 11; i++)
				{
					cout << str[i];
				}
				cout << 'X' << endl;
			}
		}
		else
		{
			x[9] = ch(str[12]);
			if (x[9] == j)
			{
				cout << "Right" << endl;
			}
			else
			{
				for (i = 0; i <= 11; i++)
				{
					cout << str[i];
				}
				cout << j << endl;
			}
		}

	}
	return 0;
}