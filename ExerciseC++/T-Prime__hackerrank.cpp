#include<iostream>
using namespace std;

/*
* Cho số tự nhiên N. Nhiệm vụ của bạn là hãy liệt kê tất cả các số có đúng ba ước số không vượt quá n. 
Ví dụ n=100, ta có các số 4, 9, 25, 49
*/
bool Dem_Uoc(int n) {
	int count = 0;
	for (int i = 1; i <= n; ++i) {
		if (n % i == 0) {
			count++;
		}
	}
	if (count == 3) return true;
	else return false;
}
int main() {
	int n; cin >> n;
	for (int i = 1; i <= n; ++i) {
		if (Dem_Uoc(i) == 1) {
			cout << i << " ";
		}
	}
	return 0;
}