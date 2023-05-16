#include<iostream>
using namespace std;
/*
Định nghĩa dãy fibonancy
f(0) = 0, f(1) = 1;
f(n) = f(n - 1) + f(n-2)

vd nhập n = 5
dãy Fibonancy: 0 1 1 2 3 5
cách làm f0 = 0, f1 = 1
giả dụ sau số f1 sẽ là f và các vế sau đó
với hai giá trị f0 và f1 sẽ tương ứng với vòng lặp i = 1, i = 2
với i = 3 thì f = 0 + 1 = 1 vậy có f = 1, f0 = 0, f1= 1
vậy làm soa để tính các giá trị sau f bắt đầu từ i = 4

dãy Fibonancy với n = 5: 

f0 f1 f2 f3 f4 f5
0  1  1  2  3  5
	  f = f0 + f1
để tính giá trị f3
công thức f = f0 + f1
vậy ta sẽ gán f0 = f1
f1 = f
để tính dc giá trị f3
ví dụ f2 = f = 1
vậy f0 = f = 1, f1 = f = 1
-> f3 = f = f0 + f1 = 2
-> các vòng lặp về sau thực hiện tương tự



*/
int main() {
	int n; cin >> n;
	int f0 = 0, f1 = 1, f;
	cout << f0 << " " << f1 << " ";
	for (int i = 3; i <= n; ++i) {
		f = f0 + f1;
		cout << f << " ";
		f0 = f1;
		f1 = f;
	}
	return 0;
}
