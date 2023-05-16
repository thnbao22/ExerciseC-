#include<iostream>
#include<string>
using namespace std;

int main() {
	string s, t; cin >> s >> t;
	int k; cin >> k;
	string temp("");
	for (int i = 1; i <= k; ++i) {
		temp += s;
	}
	if (temp == t) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}

	return 0;
}