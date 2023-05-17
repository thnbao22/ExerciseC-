#include<iostream>
#include<cmath>
using namespace std;
#define MAXS 1000
int main() {
	int n; cin >> n;
	int arr[MAXS];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; ++i) {
		if (i % 2 != 0) {
			arr[i] += abs(arr[i - 1] - arr[i + 1]);
		}
		cout << arr[i] << " ";
	}
	
	
	return 0;
}