#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n, len, m = 1;
	string str;
	while (cin >> n)
	{
		for (getline(cin, str); n > 0; n--)
		{
			getline(cin, str);
			len = str.length();
			cout << "Case " << m++ << ": ";
			for (int i = len - 1; i > -1; i--)
			{
				cout << str[i];
			}
			cout << endl;
		}
	}
	return 0;
}