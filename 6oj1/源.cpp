#include<iostream>
#include<sstream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
	string str;
	int linenum, linelen, m = 1, judge, n;
	while (cin >> linenum)
	{
		n = linenum;
		getline(cin, str);
		while (n > 0)
		{
			getline(cin, str);
			judge = 0;
			linelen = str.length();
			cout << "Case " << m++ << ": ";
			for (int i = 0, comp1 = 0, comp2 = linelen - 1; i < linelen / 2; i++, comp1++, comp2--)
			{
				if (str[comp1] != str[comp2])
				{
					judge = 1;
					cout << "No" << endl;
					break;
				}
			}
			if (judge == 0)
			{
				cout << "Yes" << endl;
			}
			str = "";
			n--;
		}
	}
	return 0;
}