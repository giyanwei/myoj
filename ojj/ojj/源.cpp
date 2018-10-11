#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	double d1, c, d2, di[7], p[7], d[7], cost = 0, cleft = 0, dz = 0;//cost为总付出油价
	int n, i, i1 = 0, i2 = 1, m;
	cin >> d1 >> c >> d2 >> p[0] >> n;
	m = n;
	i = 1;//输入数据
	double cd2 = c * d2;
	if (n == 0)
	{
		if (cd2 < d1)
		{
			cout << "No Solution" << endl;
		}
		else
		{
			cost = p[0] * d1 / d2;
			cost *= 100;
			cost = round(cost);
			cost /= 100;
			cout << setprecision(2) << fixed << cost << endl;
		}
		return 0;
	}
	while (cin >> di[i1] >> p[i])
	{
		i++, i1++;
	}
	p[n + 1] = 0;
	di[n] = d1;
	//让数组d[]存放各个站点之间的距离,而di[]则存放除起始站外各个站点到起始站的距离
	d[0] = di[0];
	while (i2 < n)
	{
		d[i2] = di[i2] - di[i2 - 1];
		i2++;
	}
	d[n] = d1 - di[i2 - 1];
	//判断是否无解，若无解，终止主函数
	for (i2 = 0; i2 <= n; i2++)
	{
		if (d[i2] > cd2)
		{
			cout << "No Solution" << endl;
			return 0;
		}
	}
	int stop = 0, cmax = 0;//stop为汽车开过的站数,cmax为前站加满油最大可开几站
	i = 0;
	while (stop <= n)//用循环来计算车开过的站数并在到达终点站时停止循环
	{
		if (p[i] < p[i + 1])//判断前站与后站的油价谁贵，若后站贵，执行下列语句
		{
			if (cd2 >= d[i] + d[i + 1])//判断前站加满油可否开至后站的下一站，若可，执行下列语句
			{
				double cd = cd2;
				int itwin = i;
				while (cd > 0 && itwin <= 6 && cmax <= (n + 1 - i))//算cmax
				{
					cd = cd - d[itwin];
					itwin++, cmax++;
				}
				//cmax--;
				itwin = i;
				int judge = i;
				while (cmax > 0)//判断可开出的站中是否有比前站便宜的站
				{
					itwin++, cmax--;
					if (p[i] > p[itwin])
					{
						stop = itwin;
						dz = 0;
						while (i < stop)
						{
							dz += d[i]; //算出此时花费的油价
							i++;//将i加至stop的大小
						}
						cost = cost + p[judge] * (dz - cleft * d2) / d2;
						cleft = 0;// cout << cost << i;
						break;
					}
				}
				if (i == judge)//前站最便宜
				{
					stop = i + cmax;
					dz = 0;
					while (i < stop)
					{
						dz = dz + d[i];
						i++;
					}
					cost = cost + p[judge] * (c - cleft);//加满油箱
					cleft = c - dz / d2;//算开至目的地后的剩余油量
				}
				continue;
			}
			else//前站加满油不可开至后站的下一站
			{
				stop += 1;
				cost = cost + p[i] * (c - cleft);
				cleft = c - d[i] / d2;
				i = stop;
				continue;
			}
		}
		else//前站比后站贵
		{
			stop += 1;
			cost = cost + p[i] * (d[i] / d2 - cleft);
			cleft = 0;
			i = stop;
			continue;
		}
	}
	cost *= 100;
	cost = round(cost);
	cost /= 100;
	cout << setprecision(2) << fixed << cost << endl;
	return 0;
}