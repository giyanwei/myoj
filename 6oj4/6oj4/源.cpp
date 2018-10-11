#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int m = 1;
	string str, bbb;
	//str = "放 bbl上海ss爱r中国abc";
	while (getline(cin, str))
	{
		bbb.resize(str.size()); //
		for (int i = str.size() - 1, j = 0, c = 0; i >= 0; i--) {
			if (str[i] < 0) {
				bbb[j + (++c % 2)] = str[i]; //c%2双字节计数器
				j += c % 2 ? 0 : 2;              //双字节完成步长2
			}
			else bbb[j++] = str[i];
		}
		cout << "Case " << m++ << ": \"";
		cout << bbb << "\"" << endl;
	}
	return 0;
}