#include"MyLibrary.h"
using namespace std;
// số gần nguyên tố là số nguyên dương chỉ có 2 ước là số nguyên tố
bool is_near_Prime(int n) {
	int count = 0;
	for (int i = 1; i <= n; ++i) {
		if (n % i == 0 && isPrime(i) == true) {
			count++;
		}
	}
	if (count == 2) return true;
	else return false;

}

int main() {
	int n; cin >> n;
	if (is_near_Prime(n) == true) {
		cout << n << " la so nguyen to gan";
	}
	else {
		cout << n << " khong la so nguyen to gan";
	}
	
	return 0;
}