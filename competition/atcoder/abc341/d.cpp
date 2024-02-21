#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	ll n, m, k;
	cin >> n >> m >> k;
	
	ll g = n * m / __gcd(n, m);
	
	ll l = 1, r = 1E18;
	while (l < r) {
		ll mid = (l + r) / 2;
		if (mid / n + mid / m - mid / g * 2 >= k) r = mid;
		else l = mid + 1;
	}
	cout << l << "\n";
	
	return 0;
}
