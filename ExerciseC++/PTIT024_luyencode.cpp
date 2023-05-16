#include<iostream>
#include<string>
#include<cmath>
using namespace std;

bool isPrime(int n) {
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) 
			return 0;
			break;
	}
	return 1;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s; cin >> s;
	int n = (int)s.length();
	for (int i = 0; i < n; ++i) {
		if (isPrime(i) == true) {
			cout << '*';
		}
		else {
			cout << s[i];
		}
	}
	
	return 0;
}