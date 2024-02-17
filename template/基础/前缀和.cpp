#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int N = 1E6 + 10;

int n, m;
int a[N];
ll s[N];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		s[i] = s[i - 1] + a[i];
	}
	
	cin >> m;
	
	while (m--) {
		int l, r;
		cin >> l >> r;
		cout << s[r] - s[l - 1] << "\n";
	}
	
	
	return 0;
}
