#include<iostream>
using namespace std;
/*
* Một số được coi là số chẵn đặc biệt nếu nó là số chẵn và tất cả các chữ số đêu là số chẵn
*/
int main() {
	int test; cin >> test;
	while (test--) {
		bool even_num = true;
		long long a;
		cin >> a;
		while (a > 0) {
			int x = a % 10;
			if (x % 2 != 0) {
				even_num = false;
				break;
			}
			a /= 10;
		}
		if (even_num == true && a % 2 == 0) cout << "YES\n";
		else cout << "NO\n";
		
	}
	return 0;
}