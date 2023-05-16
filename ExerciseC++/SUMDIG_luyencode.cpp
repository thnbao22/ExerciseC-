#include<iostream>
#include<string>
using namespace std;

int main() {
	int test; cin >> test;
	while (test--) {
		string a;
		cin >> a;
		long long res = 0;
		for (int i = 0; i < a.length(); ++i) {
			res += static_cast<int>(a[i] - 48);
		}
		cout << res << endl;
	}
	return 0;
}