#include<iostream>
#include<string>
using namespace std;

void chuoi_ki_tu(string s) {
	// ki tu dau phai la so hoac ki tu - +
	bool ki_tu_dau_chuoi = true;
	if (s[0] == '-' || s[0] == '+' || (s[0] >= 48 && s[0] <= 57)) {
		ki_tu_dau_chuoi = true;
	}
	else {
		ki_tu_dau_chuoi = false;
	}
	bool so_nguyen = true;
	// vong lap duyet chuoi tu phan tu thu 2
	for (int i = 1; i < s.length(); ++i) {
		if (s[i] >= 48 && s[i] <= 57) {
			so_nguyen = true;
		}
		else {
			so_nguyen = false;
			break;
		}
	}

	if (ki_tu_dau_chuoi == true && so_nguyen == true) {
		cout << "chuoi so nguyen";
	}
	else {
		cout << "khong la chuoi so nguyen";
	}
}
int main() {
	string s;
	getline(cin, s);
	chuoi_ki_tu(s);
	return 0;
}