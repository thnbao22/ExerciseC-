#include<iostream>
#include<cmath>
using namespace std;

int main() {
	double a, b, c; cout << "Cac he so a, b,c cua phuong trinh ax^2 + bx + c : "; cin >> a >> b >> c;
	double x1_real, x2_real, x1_phuc, x2_phuc, delta = b * b - (4 * a * c);
	if (delta > 0) {
		cout << "Phuong trinh co 2 nghiem thuc: " << endl;
		x1_real = (-b + sqrt(delta)) / (2 * a);
		x2_real = (-b - sqrt(delta)) / (2 * a);
		cout << "\nx1 = " << x1_real;
		cout << "\nx1 = " << x2_real;
	}
	else if (delta == 0) {
		cout << "Phuong trinh co 1 nghiem duy nhat: ";
		cout << "\nx = " << -b / (2 * c);
	}
	else {
		cout << "Phuong trinh co 2 nghiem phuc: ";
		x1_real = -b /( 2 * a);
		x1_phuc = sqrt(abs(delta)) / (2 * a);
		x2_real = -b / (2 * a);
		x2_phuc = -sqrt(abs(delta)) / (2 * a);
		cout << "\nx1 = " << x1_real << " + " << x1_phuc << "i" << endl;
		cout << "\nx2 = " << x2_real << " + " << x2_phuc << "i" << endl;
	}
	return 0;
}