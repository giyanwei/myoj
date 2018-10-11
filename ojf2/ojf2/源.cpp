#include <iostream>
#include <algorithm>

using namespace std;

int s[6553600];

int main() {
	int n = 0, num = 0;
	while ((cin >> s[0]) && s[0] != EOF) {
		if (cin.get() == '\n') {
			cout << "Case " << ++num << ": " << s[0] << endl;
			n = 0;//此时考虑只输入一个数的情况
			continue;
		}
		while (cin >> s[++n]) {//输入多个数的情况
			if (cin.get() == '\n') break;
		}
		cout << "Case " << ++num << ": ";
		sort(s, s + n + 1);//排序
		for (int i = 0; i <= n; ++i) {
			cout << s[i];//输出
			if (i != n) cout << " ";
		}
		cout << endl;
		n = 0;
	}
	return 0;
}