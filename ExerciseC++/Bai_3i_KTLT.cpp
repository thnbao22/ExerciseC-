	#include<iostream>
#include<cmath>
using namespace std;
// S = sqrt(1 + sqrt(2 + sqrt(3 + ... sqrt(n)))
int main() {
	int n; cout << "Nhap so nguyen duong n: "; cin >> n;
	double sum = 0.0;
	for (int i = n; i > 0; --i) {
		sum = sqrt(i + sum);
	}
	cout << sum;
	return 0;
}