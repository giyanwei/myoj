#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int section, position;

	cout << setfill('0');
	while (true)
	{
		cout << "\n ÇëÊäÈëÄÚÂë£º";
		cin >> section;
		if (section < 1 || section > 87)
		{
			break;
		}
		for (position = 1; position <= 94; position++)
		{
			cout << setw(2) << section << setw(2) << position << " " << char(160 + section) << char(160 + position) << " ";
		}
		cout << endl;
	}
	cout << setfill(' ');
	return 0;
}