#include<iostream>
using namespace std;
/*
* độ dài của 1 cạnh trong tam giác lúc nào cũng nhỏ hơn tổng 2 cạnh và lớn hơn hiệu 2 cạnh
* Tam giác cân là tam giác có 2 cạnh bằng nhau
* Tam giác đều là tam giác có 3 cạnh bằng nhau
*/
int main() {
	int a, b, c;
	cout << "Nhap 3 canh cua tam giac: "; cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "Day la tam giac deu.";
        }
        else if (a == b || a == c || b == c) {
            cout << "Day la tam giac can.";
        }
        else {
            if (a > b && a > c) {
                if (a * a == b * b + c * c) {
                    cout << "Day la tam giac vuong.";
                }
                else {
                    cout << "Day la tam giac thuong.";
                }
            }
            else if (b > a && b > c) {
                if (b * b == a * a + c * c) {
                    cout << "Day la tam giac vuong.";
                }
                else {
                    cout << "Day la tam giac thuong.";
                }
            }
            else if (c > a && c > b) {
                if (c * c == a * a + b * b) {
                    cout << "Day la tam giac vuong.";
                }
                else {
                    cout << "Day la tam giac thuong.";
                }
            }
            else {
                cout << "Day la tam giac thuong.";
            }
        }
    }
    else {
        cout << "Day khong phai la cac canh cua mot tam giac.";
    }

    return 0;
}