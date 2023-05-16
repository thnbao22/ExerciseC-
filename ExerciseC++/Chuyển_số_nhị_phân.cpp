#include <iostream>
#include <string>
#include <algorithm>
#include<vector>
using namespace std;
/*
* để chuyển 1 số nguyên dương về hệ nhị phân:
 Trong khi n > 0 thì ta lấy n chia cho 2 
 và lưu số dư của phép chia đó lại.
 Cứ làm vậy đến khi nào n = 0 thì dừng lại.
*/ 
/*
int D2B(int decimal_number) {
	string s = "";
	while (decimal_number != 0) {
		s += to_string(decimal_number % 2);
		decimal_number /= 2;
	}
	reverse(s.begin(), s.end());
	return stoi(s);	
}
*/

int main() {
	int decimal_number; cin >> decimal_number;
	//cout << D2B(decimal_number);
	vector<int>binary_number;	
	while (decimal_number != 0) {
		binary_number.push_back(decimal_number % 2);
		decimal_number /= 2;
	}
	for (auto i = binary_number.rbegin(); i != binary_number.rend(); ++i) {
		cout << *i;
	
	return 0;
}
