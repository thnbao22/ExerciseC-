#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	double fahrenheit; 
	cout << "Nhap do F muon doi sang do C: ";
	cin >> fahrenheit;
	double celsius = (5.0 / 9) * (fahrenheit - 32);
	cout << setprecision(2) << fixed << celsius;

	return 0;
}