#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

// tinh e^x
//nhap x, n
// e^x ~ 1 + x/1! + x^2/2! + ... + x^n/ n!

// vd : nhap n ,x.  n = 2, x = 3 - > e^x = 6.33 
double Factorial(int n) {
	double giaithua = 1;
	for (int i = 1; i <= n; ++i) {
		giaithua *= i;
	}
	return giaithua;
}
// Exponent: số mũ
double Exponent(int x, int n) {
	double so_mu = 1;

	while (n > 0) {
		so_mu *= x;
		n--;
	}
	return so_mu;
}

double calculate(double x, int n) {
	double res = 1, p = 1;
	for (int i = 1; i <= 1; ++i) {
		p = p * (x / i);
		res += p;
	}
	return res;
}
int main() {
	double n, x;
	cin >> n >> x;
	cout << setprecision(2) << fixed << calculate(x, n);
	return 0;
}