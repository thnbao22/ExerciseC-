#include<iostream>
#include<string>
using namespace std;
/*
* Cho xâu kí tự s chỉ gồm các chữ cái latin và chữ số.
* Ta gọi một số trong xâu s là một dãy các kí tự số liên tiếp
---> Hãy đếm số lượng số xuất hiện trong xâu s.
*/
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s; cin >> s;
	int count = 0;
	if (s[0] >= '0' && s[0] <= '9') count++;
	for (int i = 0; i < s.length(); ++i) {
		if (((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) && (s[i + 1] >= '0' && s[i + 1] <= '9')) {
			count++;
		}
	}
	cout << count;
	return 0;
}