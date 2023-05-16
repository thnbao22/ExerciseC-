#include<iostream>
#include<cmath>
using namespace std;
/*
* S = 2018x^n + x^2/3 + x^3/3^2 + ... + x^n / 3^n-1 
* S1 = 2018x^n
* S2 = x^2/3 + x^3/3^2 + ... + x^n / 3^n-1 


*/
double Tong_S1(double x, double n) {
	if (n == 0) return 2018;
	else return 2018 * pow(x, n);
}

double Tong_S2(double x, double n) {
	if (n == 2) return pow(x, 2) / 3 ;
	else return (pow(x, n) / pow(3, n - 1)) + Tong_S2(x, n - 1);
}

double Tong_S(double x, double n) {
	return Tong_S1(x, n) + Tong_S2(x, n);
}
int main() {
	double x, n; cin >> x >> n;
	cout << static_cast<long double>(Tong_S(x, n));
	return 0;
}