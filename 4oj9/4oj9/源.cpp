#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>

using namespace std;



int main()
{
	double array[1000];
	string line;
	stringstream ss;
	int num = 1, lnum = 0, i = 0, column = 0, x;
	double sum = 0;
	while (getline(cin, line))
	{
		ss.str("");
		ss.str(line);
		for (column = sum = 0; ss >> x; column++)
		{
			sum += x;
		}
		for (lnum = 1; getline(cin, line); lnum++)
		{
			if (line.empty())
			{
				break;
			}
			ss.str("");
			ss.str(line);
			while (ss >> x)
			{
				sum += x;
			}
		}
		cout << "Case " << num++ << ": " << lnum << ", " << column << ", " << sum << endl;
 	}
	return 0;
}