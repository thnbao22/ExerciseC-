#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;
// prototype functions
// khai báo các nguyên mẫu hàm
string D2B(int);
string D2O(int);
string B2D(int);
string O2D(int);
bool check_Nhi_phan(int);
int main() {
	char c; 
	do {
		cout << "\n===============BAI 11 - CHUONG 3===============" << endl;
		cout << "|a. Doi so thap phan sang nhi phan.             |" << endl;
		cout << "|b. Doi so thap phan sang bat phan.             |" << endl;
		cout << "|c. Doi so nhi phan sang bat phan.              |" << endl;
		cout << "|d. Doi so thap phan sang nhi phan.             |" << endl;
		cout << "=================================================" << endl;
		cout << "Nhap ki tu a, b, c, d tuong ung voi bai toan ban muon thuc hien: ";
		cin >> c;
		if (c > 'd' || (c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')) {
			cout << "\nBan nhap ki tu khac a, b, c, d." << endl;
			cout << "Vui long nhap lai.";
		}
		int n;
		switch (c)
		{
		case 'a' : 
			cout << "\nBan chon doi so thap phan sang nhi phan." << endl;
			cin >> n;
			cout << "Ket qua chuyen doi so nhi phan cu " << n << " la " << D2B(n);
			break;
		case 'b' :
			cout << "\nBan chon doi so thap phan sang bat phan." << endl;
			cin >> n;
			cout << "Ket qua chuyen doi so bat phan cu " << n << " la " << D2O(n);
			break;
		case 'c' :
			cout << "\n Ban chon doi nhi phan sang so thap phan." << endl;
			do {
				cin >> n;
				if (check_Nhi_phan(n) == false) {
					cout << "So ban nhap khong phai la nhi phan." << endl;
					cout << "Vui long nhap lai." << endl;	}
			} while (check_Nhi_phan(n) == false);
			cout << "So thap phan duoc doi tu so nhi phan " << n << " la " << B2D(n) << endl;
			break;
		case 'd' :
			cout << "Ban chon doi so bat phan qua thap phan." << endl;
			cin >> n;
			cout << "So thap phan doi tu so bat phan ban nhap: " << O2D(n);
			break;
		default:
			break;
		}
	} while ( c < 'd');
	return 0;
}
// hàm check nhị phân 
bool check_Nhi_phan(int n) {
	// giả định số nhập vào là nhị phân 
	while (n > 0) {
		int binary_digit = n % 10; // lấy từng chữ số kiểm tra
		if (binary_digit > 1) {
			// kiểm tra nếu chữ số khác 0 hoặc khác 1 thì không là chữ số nhị phân
			return false;
			break;
		}
		n /= 10;
	}
	return true;
}
string D2B(int decimal_number) {
	string binary_number = ""; // tạo một string rỗng để lưu trữ các số nhị phân
	while (decimal_number != 0) {
		binary_number += to_string(decimal_number % 2); // gán vào string phần dư phép chia của số thập phân với 2
		decimal_number /= 2;
	}
	reverse(binary_number.begin(), binary_number.end()); // đảo ngược chuỗi lại
	return binary_number;
}
string D2O(int decimal_number) {
	string octal_number = ""; // string rỗng lưu các số bát phân
	while (decimal_number != 0) {
		octal_number += to_string(decimal_number % 8); // gán vào string phần dư phép chia của số thập phân với 8
		decimal_number /= 8;
	}
	reverse(octal_number.begin(), octal_number.end()); // đảo ngược lại
	return octal_number;
}
string B2D(int binary_number) {
	int decimal_number = 0, i = 0;
	while (binary_number != 0) {
		double x = binary_number % 10; // lấy từng chữ số trong dãy nhị phân
		decimal_number += static_cast<int>(x * pow(2, i)); 
		// để từ nhị phân sang số thập phân
		// thì phải lấy từng chữ số từ phái sang trái 
		// nhân lần lượt với 2^0 đến 2^n-1 với n là số lượng chữ số của dãy nhị phân 
		binary_number /= 10;
		i++;
	}
	return to_string(decimal_number);
}

string O2D(int octal_number) {
	int decimal_number = 0, i = 0;
	while (octal_number != 0) {
		double x = octal_number % 10;
		decimal_number += static_cast<int>( x * pow(8, i));
		// để từ bát phân sang số thập phân
		// thì phải lấy từng chữ số từ phái sang trái 
		// nhân lần lượt với 8^0 đến 8^n-1 với n là số lượng chữ số của dãy bát phân 
		octal_number /= 10;
		i++;
	}
	return to_string(decimal_number);
}