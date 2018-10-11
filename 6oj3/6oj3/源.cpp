#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str, reverse, all;
	int n, len, m = 1, i, ii;
	while (cin >> n)
	{
		for (getline(cin, str); n > 0; n--)
		{
			getline(cin, str);
			len = str.length();
			cout << "Case " << m++ << ": " << "\"" << str;
			if (len % 2 == 0)
			{
				for (i = len - 1; i > -1; i--)
				{
					cout << str[i];
				}
			}
			else
			{
				for (i = len - 2; i > -1; i--)
				{
					cout << str[i];
				}
			}
			cout << "\"" << endl;
		}
	}
	return 0;
}