#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
	string line, charstr[16] = { "¡õ¡õ¡õ¡õ", "¡õ¡õ¡õ¡ö", "¡õ¡õ¡ö¡õ", "¡õ¡õ¡ö¡ö",
						  "¡õ¡ö¡õ¡õ","¡õ¡ö¡õ¡ö", "¡õ¡ö¡ö¡õ", "¡õ¡ö¡ö¡ö",
						  "¡ö¡õ¡õ¡õ","¡ö¡õ¡õ¡ö", "¡ö¡õ¡ö¡õ", "¡ö¡õ¡ö¡ö",
						  "¡ö¡ö¡õ¡õ","¡ö¡ö¡õ¡ö", "¡ö¡ö¡ö¡õ", "¡ö¡ö¡ö¡ö" };
	//stringstream ss;
	int m = 1, x, i = 0;
	while (cin >> hex >> x)
	{
		/*if (m != 1 && i == 0)
		{
			cout << endl;
		}*/
		if (i == 0)
		{
			cout << "Case " << m++ << ":" << endl;
		}
		cout << charstr[x / 16] << charstr[x % 16];
		if ((i + 1) % 2 == 0 && i != 31)
		{
			cout << endl;
		}
		if (i == 31)
		{
			i = -1;
		}
		i++;
	}
	return 0;
}