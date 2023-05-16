#include<iostream>
#include<cmath>
using namespace std;
int UCLN(int a, int b) {
	for (int i = min(a, b); i > 0; --i) {
		if (a % i == 0 && b % i == 0) {
			return i;
		}
	}
}
int main() {
	int a, b, tich; cin >> a >> b;
	tich = a * b;
	cout << "UCLN cua a va b: " << UCLN(a, b) << endl;
	cout << "BCNN cua a va b: " << tich / UCLN(a, b);
	
	return 0;
}