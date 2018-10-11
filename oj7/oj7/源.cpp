#include<iostream>
#include<stack>

using namespace std;

int main()
{
	stack<int> s;
	int in, pos, shang;
	char alph;
	int i = 0;
	while (cin >> in >> pos)
	{
		shang = in;
		i++;
		cout << "Case " << i << ": " << flush;
		while (in)
		{
			s.push(in % pos);
			in /= pos;
		}
		while (!s.empty())
		{
			switch (s.top())
			{
			case 10: cout << "A"; break;
			case 11: cout << "B"; break;
			case 12: cout << "C"; break;
			case 13: cout << "D"; break;
			case 14: cout << "E"; break;
			case 15: cout << "F"; break;
			case 16: cout << "G"; break;
			case 17: cout << "H"; break;
			case 18: cout << "I"; break;
			case 19: cout << "J"; break;
			case 20: cout << "K"; break;
			case 21: cout << "L"; break;
			case 22: cout << "M"; break;
			case 23: cout << "N"; break;
			case 24: cout << "O"; break;
			case 25: cout << "P"; break;
			case 26: cout << "Q"; break;
			case 27: cout << "R"; break;
			case 28: cout << "S"; break;
			case 29: cout << "T"; break;
			case 30: cout << "U"; break;
			case 31: cout << "V"; break;
			case 32: cout << "W"; break;
			case 33: cout << "X"; break;
			case 34: cout << "Y"; break;
			case 35: cout << "Z"; break;
			default: cout << s.top(); break;
			}
			s.pop();
		}
		cout << endl;
		
	}
	return 0;
}