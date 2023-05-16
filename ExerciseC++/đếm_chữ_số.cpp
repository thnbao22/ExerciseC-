#include<iostream>
#include<string>
using namespace std;
// viết chương trình đọc số chữ số của số nguyên n nhập từ bàn phím
// giới hạn: |n| <= 10^1000
int main() {
	string n;
	cin >> n;
	int count = 0;
	for (int i = 0; i < n.length(); ++i) {
		count++;
	}
	cout << count;

	return 0;
}