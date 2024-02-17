#include <bits/stdc++.h>

using namespace std;

using ll = long long;

bool check(int mid) {
	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	// 找左端点
	int l = 0, r = n - 1;
	while (l < r) {
		int mid = (l + r) / 2;
		if (check(mid)) r = mid;
		else l = mid + 1;
	}
	
	// 找右端点
	int l = 0, r = n - 1;
	while (l < r) {
		int mid = (l + r + 1) / 2;
		if (check(mid)) l = mid;
		else r = mid - 1;
	}
	
	
	return 0;
}
