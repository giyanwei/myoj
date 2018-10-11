#include<iostream>
#include<cmath>


using namespace std;

int main()
{
	int year, mon;
	int m = 1;
	int first;
	int monnum, monsum;
	int date, day;
	int i;
	int h;
	while (cin >> year >> mon)
	{
		h = 1, i = 0;
		day = 1, monsum = monnum = 0;
		cout << "Case " << m << ": " << year << "Äê" << mon << "ÔÂ" << endl;
		cout << "Sun Mon Tue Wed Thu Fri Sat" << endl;
		m++;
		first = (year - 1 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7 + 1;
		switch (mon)
		{
		case 1: monsum = 0, monnum = 31; break;
		case 2: monsum = 31, monnum = 28; break;
		case 3: monsum = 59, monnum = 31; break;
		case 4: monsum = 90, monnum = 30; break;
		case 5: monsum = 120, monnum = 31; break;
		case 6: monsum = 151, monnum = 30; break;
		case 7: monsum = 181, monnum = 31; break;
		case 8: monsum = 212, monnum = 31; break;
		case 9: monsum = 243, monnum = 30; break;
		case 10: monsum = 273, monnum = 31; break;
		case 11: monsum = 304, monnum = 30; break;
		case 12: monsum = 334, monnum = 31; break;
		}
		while (mon >= 3)
		{

			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			{
				monsum++;
			}
			break;
		}
		while (mon == 2)
		{
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			{
				monnum++;
			}
			break;
		}
		date = (monsum % 7) + first;

		if (date >= 7)
		{
			date -= 7;
		}
		while (date > 0)
		{

			cout << "    " << flush;
			date--;
			i++;
		}
		while (h <= monnum)
		{


			if (day > 9 && i != 6 && h != monnum)
			{
				cout << " " << day << " " << flush;
				day++, i++;
			}
			else if (day <= 9 && i != 6 && h != monnum)
			{
				cout << "  " << day << " " << flush;
				day++, i++;
			}
			else if (day > 9 && i == 6 || h == monnum)
			{
				cout << " " << day << flush;
				day++, i++;
			}
			else if (day <= 9 && i == 6 || h == monnum)
			{
				cout << "  " << day << flush;
				day++, i++;
			}

			while (i > 6)
			{
				cout << endl;
				i = 0;
			}
			h++;
		}
		cout << endl;
	}
	return 0;
}