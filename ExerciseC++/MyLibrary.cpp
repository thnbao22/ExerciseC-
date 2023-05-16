#include"MyLibrary.h" // gọi lại thư viện bên file .h
#include<cmath>
// định nghĩa hàm 
bool isPrime(int n) {
	if (n < 2) {
		return false;
	}
	else {
		for (int i = 2; i <= sqrt(n); ++i) {
			if (n % i == 0) {
				return false;
				break;
			}
			else {
				return true;
			}
		}
	}
}