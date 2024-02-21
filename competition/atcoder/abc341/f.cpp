#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, m;
	cin >> n >> m;
	
	vector<vector<int>> e(n);
	while (m--) {
		int u, v;
		cin >> u >> v;
		u--, v--;
		e[u].push_back(v);
		e[v].push_back(u);
	}
	
	vector<int> w(n), a(n);
	for (int i = 0; i < n; i++) {
		cin >> w[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	vector<int> c(n);
	iota(c.begin(), c.end(), 0);
	sort(c.begin(), c.end(), [&](int x, int y) {
		return w[x] < w[y];
	});
	
	vector<int> g(n);
	for (int i = 0; i < n; i++) {
		int u = c[i];
		vector<int> f(w[u]);
		for (auto v : e[u]) {
			if (w[v] >= w[u]) {
				continue;
			}
			for (int j = w[u] - 1; j >= w[v]; j--) {
				f[j] = max(f[j], f[j - w[v]] + g[v]);
			}
		}
		g[u] = max(g[u], f[w[u] - 1] + 1);
	}
	
	ll ans = 0;
	for (int i = 0; i < n; i++) {
		ans += 1ll * a[i] * g[i];
	}
	cout << ans << "\n";
	
	return 0;
}
