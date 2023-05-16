#include<iostream>
#include<string>
using namespace std;

int main() {
	int place; cin >> place;
	char c; cin >> c;
	while (place--) {
		string s; cin >> s;
		int flag = 0;
		for (int i = 0; i < s.length(); ++i) {
			if (s[i] == c) {
				flag = 1;
			}
		}
		if (flag == 0) {
			cout << s << endl;
		}
	}
	return 0;
}