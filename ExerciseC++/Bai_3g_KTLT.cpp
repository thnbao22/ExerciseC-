#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
//tính S = sqrt(1^2 + 2^2 + ... + n^2) 
int main() {
	int n; cout << "Nhap so nguyen duong n: "; cin >> n;
	double sum = 0;
	for (double i = 1; i <= n; ++i) {
		sum += pow(i, 2);
	}
	cout << "S = " << fixed << setprecision(2) << sqrt(sum);
	return 0;
}