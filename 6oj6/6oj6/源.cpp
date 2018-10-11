#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str1, str2, comp;
	int m = 1, i = 0, len1, len2, ii, j;
	while (getline(cin, str1))
	{
		getline(cin, str2);
		len2 = str2.length();
		len1 = str1.length();
		j = 0;
		//if (m != 1)
			//cout << endl;
		cout << "Case " << m++ << ": ";
		if (len1 > len2)
		{
			cout << -1 << endl;
			continue;
		}
		for (i = 0; i <= len2 - len1; i++)
		{
			if (str1[0] == str2[i])
			{
				comp = str2.substr(i, len1);
			}
			if (comp == str1)
			{
				j = 1;
				cout << i << endl;
				break;
			}
			else
			{

			}
		}
		if (j == 0)
		{
			cout << -1 << endl;
		}
	}
	return 0;
}
