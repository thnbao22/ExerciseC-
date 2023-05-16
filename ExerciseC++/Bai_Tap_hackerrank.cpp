#include <iostream>
#include <cmath>
#include <string>
using namespace std;
/*
* Một số được coi là đẹp 
nếu nó là số thuận nghịch và có ít nhất 3 ước số nguyên tố khác nhau.
Viết chương trình in ra các số đẹp như vậy trong một đoạn giữa hai số nguyên cho trước
*/
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false; break;
    }
    return true;
}

bool isBeautiful(int n) {
    string s = to_string(n);
    string v = s;
    reverse(v.begin(), v.end());
    if (s != v) return false;
    int cnt = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i) && n % i == 0) {
            cnt++;
            if (cnt >= 3) return true;
        }
    }
    return false;
}

int main() {
    int a, b;
    cin >> a >> b;
    bool found = false;
    for (int i = a; i <= b; i++) {
        if (isBeautiful(i)) {
            cout << i << " ";
            found = true;
        }
    }
    if (!found) cout << -1 << endl;
    return 0;
}