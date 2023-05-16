#include<iostream> 
#include<iomanip>

using namespace std;
/*
pt: ax + b = 0
a = 0 && b = 0 -> pt vo so nghiem
a != 0 && b != 0 -> pt co nghiem x = -b/a;
a = 0 && b != 0 -> pt vo nghiem
*/

int main() {
	int a, b;
    cin >> a >> b;
    double x;
    if (a == 0 && b == 0) {
        cout << "pt co vo so nghiem";
    }
    else if (b != 0) {
        cout << "pt vo nghiem";
    }
    else {
        x = (double)-b/a;
        cout << setprecision(2) << fixed << x;
    }
	return 0;
}