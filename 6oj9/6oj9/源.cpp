#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	int m = 1, i, len, word = 0, il = 0, ip = 0, is = 0;
	int lenword[10000], posword[10000], show[10000];//show判断是否是连词，lenword单词长度， posword单词位置
	while (getline(cin, str))
	{
		len = str.length();
		for (i = 0; i < len; i++)
		{
			if (str[i] != ' ' || str[i] != '-')
			{
				posword[ip++] = i, show[is++] = 0;
				word++;
				break;
			}
		}
		while (i < len)
		{
			if (str[i] == ' ' || str[i] == '-')
			{
				lenword[il++] = i - posword[ip - 1];
				while (i < len)
				{
					if (str[i] != ' ' && str[i] != '-')
					{
						posword[ip++] = i, show[is++] = 0;
						word++;
						break;
					}
					i++;
				}
			}
			i++;
		}
		if (il != ip)
		{
			lenword[il] = i - posword[ip - 1];
		}
		cout << "Case " << m++ << ": ";
		for (i = 0; i < word; i++)
		{
			if (lenword[i] == 1)
			{
				if (str[posword[i]] == 'a' || str[posword[i]] == 'A')
				{
					show[i] = 1;
				}
			}
			if (lenword[i] == 2)
			{
				if (str[posword[i]] == 'a' || str[posword[i]] == 'A')
				{

					if (str[posword[i] + 1] == 'n' || str[posword[i] + 1] == 'N')
					{
						show[i] = 1;
					}
				}
				if (str[posword[i]] == 'o' || str[posword[i]] == 'O')
				{

					if (str[posword[i] + 1] == 'f' || str[posword[i] + 1] == 'F')
					{
						show[i] = 1;
					}
				}
			}
			if (lenword[i] == 3)
			{
				if (str[posword[i]] == 't' || str[posword[i]] == 'T')
				{

					if (str[posword[i] + 1] == 'h' || str[posword[i] + 1] == 'H')
					{

						if (str[posword[i] + 2] == 'e' || str[posword[i] + 2] == 'E')
						{
							show[i] = 1;
						}
					}
				}
				if (str[posword[i]] == 'a' || str[posword[i]] == 'A')
				{

					if (str[posword[i] + 1] == 'n' || str[posword[i] + 1] == 'N')
					{

						if (str[posword[i] + 2] == 'd' || str[posword[i] + 2] == 'D')
						{
							show[i] = 1;
						}
					}
				}
				if (str[posword[i]] == 'f' || str[posword[i]] == 'F')
				{

					if (str[posword[i] + 1] == 'o' || str[posword[i] + 1] == 'O')
					{

						if (str[posword[i] + 2] == 'r' || str[posword[i] + 2] == 'R')
						{
							show[i] = 1;
						}
					}
				}
			}
		}
		for (i = 0; i < word; i++)
		{
			if (show[i] == 0)
			{
				cout << str[posword[i]];
			}
			else
			{
				show[i] = 0;
			}
		}
		cout << endl;
		word = il = ip = is = 0;
	}
	return 0;
}