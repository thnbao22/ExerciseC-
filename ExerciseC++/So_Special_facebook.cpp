#include<iostream>
#include<cmath>
using namespace std;
/*
* Một số nguyên dương được gọi là đặc biệt 
 nếu tổng bình phương các chữ số của nó 
(trong dạng biểu diễn thập phân) là một số nguyên tố. 
Ví dụ: 12 là số đặc biệt vì 1*1 + 2*2 = 5 là số nguyên tố
Yêu cầu: TÌm số đặc biệt nhỏ nhất lớn hơn dữ liệu nhập vào
*/
bool Prime(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			return false;
			break;
		}
	}
	return true;
} 

bool Special_Num(int n) {
	int sum = 0;
	while (n) {
		int x = n % 10;
		sum += pow(x, 2);
		n /= 10;
	}

	if (Prime(sum) == 1) return 1;
	else return 0;
}

int nearest_Special_Num(int n) {
	n++;
	if (Special_Num(n) == 1) {
		return n;
	}
	else {
		return nearest_Special_Num(n + 1);
	}
}
int main() {
	int n; cin >> n;
	cout << nearest_Special_Num(n);
	return 0;
}