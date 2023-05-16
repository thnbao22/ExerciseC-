#include<iostream>
using namespace std;
int min4(int, int, int, int);
int main() {
	int a, b, c, d; cin >> a >> b >> c >> d;
	cout << min4(a, b, c, d);
	return 0;
	
}
int min4(int a, int b, int c, int d) {
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	if (d < min) min = d;
	return min;

}