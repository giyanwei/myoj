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
		cout << "Case " << m++ << ": ";
		while (word > 0)
		{
			while (lenword[word - 1] > 0)
			{
				cout << str[posword[word - 1]];
				posword[word - 1]++;
				lenword[word - 1]--;
			}
			if (word != 1)
			{
				cout << " ";
			}
			word--;
		}
		cout << endl;
		word = il = ip = 0;
	}
	return 0;
}