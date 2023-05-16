#include<iostream>
#include<string>
using namespace std;

int main() {
	int n; cin >> n;
	string s = to_string(n);
	string v = s;
	reverse(v.begin(), v.end());
	if (s != v) {
		cout << "Khong la so thuan nghich";
	}
	else {
		cout << "la so thuan nghich";
	}
	return 0;
}