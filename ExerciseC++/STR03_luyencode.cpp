#include<iostream>
#include<string>
using namespace std;

int main() {
	string str; getline(cin, str);
	for (int i = 0; i < str.length(); ++i) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += 32;
		}
	}
	int test; cin >> test;
	while (test--) {
		char x; cin >> x;
		if (x >= 'A' && x <= 'Z') {
			x += 32;
		}
		int count = 0;
		for (int i = 0; i < str.length(); ++i) {
			if (x == str[i]) {
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
	 
}