#include<iostream>
using namespace std;

double sum(double n) {
	if (n == 0) return 1.0/2;
	else return (2 * n + 1) / (2 * n + 2) + sum(n - 1);
}
int main() {
	double n; cin >> n;
	cout << sum(n);
	return 0;
}