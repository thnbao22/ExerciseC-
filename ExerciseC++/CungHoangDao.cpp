#include<iostream>
using namespace std;

int main() {
	int day, month;
	cout << "Nhap ngay va thang de kiem tra cung Hoang Dao: ";
	cin >> day >> month;
	switch (month) {
	case (1):
		if (day > 0 && day <= 19) {
			cout << "Ma Ket" << endl;
		}
		else if (day >= 20 && day <= 31) {
			cout << "Bao Binh" << "\n";
		}
		else {
			cout << "Invalid Date" << "\n";
		}
		break;
	case (2):
		if (day > 0 && day <= 18) {
			cout << "Bao Binh" << "\n";
		}
		else if (day >= 19 && day <= 28) {
			cout << "Song Ngu" << "\n";
		}
		else {
			cout << "Invalid date" << "\n";
		}
		break;
	case (3):
		if (day > 0 && day <= 20) {
			cout << "Song Ngu" << "\n";
		}
		else if (day >= 21 && day <= 31) {
			cout << "Kim Ngua" << "\n";
		}
		break;
	case (4):
		if (day > 0 && day <= 20) {
			cout << "Bach Duong" << "\n";
		}
		else if (day >= 21 && day <= 30) {
			cout << "Kim Nguu" << "\n";
		}
		else {
			cout << "Invalid date" << "\n";
		}
		break;
	case (5):
		if (day > 0 && day <= 20) {
			cout << "Kim Nguu" << "\n";
		}
		else if (day >= 21 && day <= 30) {
			cout << "Song Tu" << "\n";
		}
		else {
			cout << "Invalid date" << "\n";
		}
		break;
	case (6):
		if (day > 0 && day <= 21) {
			cout << "Song Tu" << "\n";
		}
		else if (day >= 22 && day <= 30) {
			cout << "Cu Giai" << "\n";
		}
		else {
			cout << "Invalid date" << "\n";
		}
		break;
	case (7):
		if (day > 0 && day <= 22) {
			cout << "Cu Giai" << "\n";
		}
		else if (day >= 23 && day <= 31) {
			cout << "Su Tu" << "\n";
		}
		else {
			cout << "Invalid date" << "\n";
		}
		break;
	case (8):
		if (day > 0 && day <= 22) {
			cout << "Su Tu" << "\n";
		}
		else if (day >= 23 && day <= 31) {
			cout << "Xu Nu" << "\n";
		}
		else {
			cout << "Invalid date" << "\n";
		}
		break;
	case (9):
		if (day > 0 && day <= 22) {
			cout << "Xu Nu" << "\n";
		}
		else if (day >= 23 && day <= 30) {
			cout << "Thien Binh" << "\n";
		}
		else {
			cout << "Invalid date" << "\n";
		}
		break;
	case (10):
		if (day > 0 && day <= 22) {
			cout << "Thien Binh" << "\n";
		}
		else if (day >= 23 && day <= 31) {
			cout << "Bo Cap" << "\n";
		}
		else {
			cout << "Invalid date" << "\n";
		}
		break;
	case (11):
		if (day > 0 && day <= 22) {
			cout << "Bo Cap" << "\n";
		}
		else if (day >= 23 && day <= 30) {
			cout << "Nhan Ma" << "\n";
		}
		else {
			cout << "Invalid date" << "\n";
		}
		break;
	case (12):
		if (day > 0 && day <= 22) {
			cout << "Nhan Ma" << "\n";
		}
		else if (day >= 23 && day <= 31) {
			cout << "Ma Ket" << "\n";
		}
		else {
			cout << "Invalid date" << "\n";
		}
		break;
	default:

		break;
	}
	return 0;
}