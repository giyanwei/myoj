#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	int m = 1, i, len, word = 0;
	while (getline(cin, str))
	{
		len = str.length();
		for (i = 0; i < len; i++)
		{
			if (str[i] != ' ')
			{
				word++;
				break;
			}
		}
		while (i < len)
		{
			if (str[i] == ' ')
			{
				while (i < len)
				{
					if (str[i] != ' ')
					{
						word++;
						break;
					}
					i++;
				}
			}
			i++;
		}
		cout << "Case " << m++ << ": " << word << endl;
		word = 0;
	}
	return 0;
}