#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int s;
		cin >> s;
		int ans = 0;
		int pw = 1000 * 1000 * 1000;
		while (s > 0) {
			while (s < pw) {
				pw /= 10;
			}			
			ans += pw;
			s -= pw - pw / 10;
		}
		cout << ans << '\n';
	}
	return 0;
}
