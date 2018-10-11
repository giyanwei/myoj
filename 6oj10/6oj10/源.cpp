#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	int m = 1, i, len, word = 0, il = 0, ip = 0;
	int lenword[10000], posword[10000];
	while (getline(cin, str))
	{
		len = str.length();
		for (i = 0; i < len; i++)
		{
			if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6'
				 || str[i] == '7' || str[i] == '8' || str[i] == '9')
			{
				posword[ip++] = i;
				word++;
				break;
			}
		}
		while (i < len)
		{
			if (str[i] != '0' && str[i] != '1' && str[i] != '2' && str[i] != '3' && str[i] != '4' && str[i] != '5'&& str[i] != '6'
				&& str[i] != '7' && str[i] != '8' && str[i] != '9')
			{
				lenword[il++] = i - posword[ip - 1];
				while (i < len)
				{
					if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6'
						|| str[i] == '7' || str[i] == '8' || str[i] == '9')
					{
						posword[ip++] = i;
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
		cout << "Case " << m++ << ": " << "(" << word << ")";
		if (word != 0)
		{
			cout << " ";
		}
		i = 0;
		while (word > 0)
		{
			cout << str.substr(posword[i], lenword[i]);
			if (word != 1)
			{
				cout << " ";
			}
			word--, i++;
		}
		cout << endl;
		word = il = ip = 0;
	}
	return 0;
}