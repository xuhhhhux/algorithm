#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int N = 1E6 + 10;

int n;
int p[N], sz[N];

int find(int x) {
	return p[x] == x ? x : p[x] = find(p[x]);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		p[i] = i;
		sz[i] = 1;
	}
	
	return 0;
}
