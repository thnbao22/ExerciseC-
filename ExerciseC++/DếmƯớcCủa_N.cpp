#include<iostream>
using namespace std;

int main() {
	int n, count = 0; cin >> n;
	cout << "Cac uoc cua n : ";
	for (int i = 1; i <= n; ++i) {
		if (n % i == 0) {
			cout << i << " ";
			count++;
		}
	}
	cout << "\nSo uoc cua n: " << count;
	return 0;
}