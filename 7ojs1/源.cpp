#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	int i, len, num = 0;
	getline(cin, str);
	len = str.length();
	for (i = 0; i < len; i++)
	{
		if (str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9'
			|| str[i] == '0')
		{
			num++;
		}
	}
	cout << num;
	return 0;
}