#include<iostream>
using namespace std;

int main() {
	int a[100]{};
	int n; cin >> n;
	int j = 0;
	for (int i = 1; i <= n; ++i) {
		if (n % i == 0) {
			a[j] = i;
			++j;
		}
	}
	int max_odd = a[0];
	for (int i = 0; i < j; ++i) {
		if (a[i] % 2 != 0) {
			if (a[i] > max_odd) {
				max_odd = a[i];
			}
		}
	}
	cout << "Uoc so le lon nhat cua " << n << " la " << max_odd;
	return 0;
}