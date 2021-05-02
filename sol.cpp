#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long s;
		cin >> s;
		// view the image in this repository for better understanding
		// if 's' is divisible by 9, then subtract the answer by 1
		// otherwise, keep the original answer
		cout << (s % 9 == 0 ? 10 * s / 9 - 1 : 10 * s / 9) << '\n';
	}
	return 0;
}
