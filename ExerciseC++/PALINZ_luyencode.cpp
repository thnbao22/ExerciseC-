#include<iostream>
#include<string>
using namespace std;

bool xau_doi_xung(string s) {
	int ln = (int)s.length();
	if (ln == 1) return 1;
	else {
		for (int i = 0; i < ln / 2; ++i) {
			if (s[i] != s[ln - i - 1])
				return false;
		}
		return true;
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// vd s = "00001"
	// l = 3, r = 4 thi se cat ra doan tu vi tri thu 3 va vi tri  thu 4
	string s; cin >> s;
	int l, r, m; cin >> m;
	while (m--) {
		cin >> l >> r;
		string xau_con = s.substr(l - 1, r - l + 1);
		if (xau_doi_xung(xau_con)) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}