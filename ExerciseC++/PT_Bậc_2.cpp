#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
/* pt : ax^2 + bx + c = 0
 neu a = 0 -> bx + c = 0 -> x = -b/a (pt co mot nghiem duy nhat)
  a = 0 b = 0 c = 0 thi pt vo so nghiem
  a!=0 b!=0 c = 0 thi phuong trinh co nghiem kep
*/
int main() {
	int a, b, c, delta; cin >> a >> b >> c;
	delta = b * b - 4 * a * c;
	if (delta > 0) {
		cout << "Phuong trinh co 2 nghiem phan biet: " << endl;
		cout << "x1 = " << setprecision(2) << fixed << (float)(-b + sqrt(delta)) / (2 * a);
		cout << "x2 = " << setprecision(2) << fixed << (float)(-b - sqrt(delta)) / (2 * a);
	}
	else if (delta == 0) {
		cout << "Phuong trinh co nghiem kep " << endl;
		cout << "x1 = x2 = " << setprecision(2) << fixed << (float)-b / (2 * a);
		}
	else {
		cout << "Phuong trinh vo nghiem";
	}
	return 0;
}