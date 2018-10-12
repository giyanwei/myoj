#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	int m = 1, i, len, word = 0, il = 0, ip = 0, n;
	cin >> n;
	getline(cin, str);
	int lenword[10000], posword[10000];
	while (getline(cin, str))
	{
		len = str.length();
		for (i = 0; i < len; i++)
		{
			if (str[i] != ' ')
			{
				posword[ip++] = i;
				word++;
				break;
			}
		}
		while (i < len)
		{
			if (str[i] == ' ')
			{
				lenword[il++] = i - posword[ip - 1];
				while (i < len)
				{
					if (str[i] != ' ')
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
		//cout << "Case " << m++ << ": ";
		if (str[posword[0]] == 'R' && str[posword[1]] == 'S' ||
			str[posword[0]] == 'S' && str[posword[1]] == 'P' ||
			str[posword[0]] == 'P' && str[posword[1]] == 'R')
		{
			cout << "Player1" << endl;
		}
		if (str[posword[0]] == 'S' && str[posword[1]] == 'R' ||
			str[posword[0]] == 'P' && str[posword[1]] == 'S' ||
			str[posword[0]] == 'R' && str[posword[1]] == 'P')
		{
			cout << "Player2" << endl;
		}
		if (str[posword[0]] == str[posword[1]])
		{
			cout << "Tie" << endl;
		}
		word = il = ip = 0;
	}
	return 0;
}