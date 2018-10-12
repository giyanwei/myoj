#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	while (getline(cin, str))
	{
		if (str[0] % 2 != 0)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}