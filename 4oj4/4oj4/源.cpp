#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int year, month, day, num = 1, monnum;
	while (cin >> year >> month >> day)
	{
		cout << "Case " << num++ << ": ";
		//输出格式控制
		cout << setfill('0') << std::right << setw(2) << month << '/' << setw(2) << day << '/' << setfill(' ') << year << ", ";
		//用switch计算每个月的一号是当年的第几天
		switch (month)
		{
		case 1:monnum = 1; break;
		case 2:monnum = 32; break;
		case 3:monnum = 60; break;
		case 4:monnum = 91; break;
		case 5:monnum = 121; break;
		case 6:monnum = 152; break;
		case 7:monnum = 182; break;
		case 8:monnum = 213; break;
		case 9:monnum = 244; break;
		case 10:monnum = 274; break;
		case 11:monnum = 305; break;
		case 12:monnum = 335; break;
		}
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			if (month > 2)
			{
				monnum += 1;
			}
		}
		monnum += day - 1;
		cout << monnum << endl;
	}
	return 0;
}