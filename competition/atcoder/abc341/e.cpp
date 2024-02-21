#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int N = 5E5 + 10;

int m;
int tr[N];

void add(int x, int c) {
	for (int i = x; i <= m; i += i & -i) {
		tr[i] += c;
	}
}

int sum(int x) {
	int res = 0;
	for (int i = x; i; i -= i & -i) {
		res += tr[i];
	}
	return res;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, q;
	cin >> n >> q;
	m = n;
	
	string s;
	cin >> s;
	
	for (int i = 0; i < n - 1; i++) {
		if (s[i] != s[i + 1]) {
			add(i + 1, 1);
		}
	}
	
	while (q--) {
		int op, l, r;
		cin >> op >> l >> r;
		if (op == 1) {
			if (l != 1) {
				if (sum(l - 1) - sum(l - 2) == 1) {
					add(l - 1, -1);
				} else {
					add(l - 1, 1);
				}
			}
			if (sum(r) - sum(r - 1) == 1) {
				add(r, -1);
			} else {
				add(r, 1);
			}
		} else {
			cout << (sum(r - 1) - sum(l - 1) == r - l ? "Yes\n" : "No\n");
		}
	}
	
	return 0;
}
