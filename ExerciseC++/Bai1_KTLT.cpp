#include<iostream>
#include<cmath>
using namespace std;

int main() {
	double x, y, z, a, b, c, d;
	double distance; // distance = d(M,(P))
	cout << "Nhap lan luot x y z cua diem A tren map phang: ";
	cin >> x >> y >> z;
	cout << "Nhap phuong trinh ax + by + cz + d = 0: ";
	cin >> a >> b >> c >> d;
	cout << "diem A(" << x << ", " << y << ", " << z << ")" << endl;
	cout << "Map phang P: " <<  a << "x + " << b << "y + " << c << "z + " << d << " = 0" << endl;
	distance = abs(a * x + b * y + z * c + d) / sqrt(a*a + b*b + c*c);
	cout << "Khoang cach tu diem A(" << x << ", " << y << ", " << z << ") toi mat phang " << a << "x + " << b << "y + " << c << "z + " << d << " la d(A, (P)) = " << distance;

	return 0;

}