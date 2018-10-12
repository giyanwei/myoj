#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	int i, len, j;
	while (getline(cin, str))
	{
		j = 0;
		len = str.length();
		if (str[0] <= 57 && str[0] >= 48)
		{
			cout << "no" << endl;
			
		}
		else
		{
			for (i = 0; i < len; i++)
			{
				if (str[i] < 48 || str[i] > 57 && str[i] < 97 && str[i] != 95 || str[i] > 122)
				{
					j = 1;
					cout << "no" << endl;
					break;
				}
				
			}
			if (j == 0)
			{
				cout << "yes" << endl;
			}
		}
		
	}
	return 0;
}