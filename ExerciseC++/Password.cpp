#include<iostream>

#include<string>
using namespace std;

// '0' to '9': 48 to 57
// 'a' to 'z': 97 to 122
// "A" to "Z": 65 to 90
bool Count_character(string s) {
	int count = 0;
	for (int i = 0; i < s.length(); ++i) {
		count++;
	}
	if (count < 8) {
		return false;
	}
	else {
		return true;
	}
}

bool Alphabet_Number(string s) {
	bool chucaivachuso = true;
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] >= 65 && s[i] <= 90) {
			chucaivachuso = false;
			break;
		}
		else {
			chucaivachuso = true;
		}
	}
	return chucaivachuso;
}

bool Count_Number(string s) {
	int count_num = 0;
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] >= 48 && s[i] <= 57) {
			count_num++;
		}
	}
	if (count_num < 2) return false;
	else return true;
}
int main() {
	string s;
	do {
		cout << "\nNhap mat khau cua ban: ";
		cin >> s;
		if (Count_character(s) == false || Count_Number(s) == false || Alphabet_Number(s) == false) {
			cout << "\nMat khau ban nhap khong hop le.";
			cout << "\nVui long nhap lai.";
		}
		else {
			cout << "Mat khau hop le.";
		}
	} while (Count_character(s) == false || Count_Number(s) == false || Alphabet_Number(s) == false);
	return 0;
}