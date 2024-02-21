#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	
	for (int i = 0; i < 2 * n + 1; i++) {
		if (i % 2) {
			cout << "0";
		} else {
			cout << "1";
		}
	}
	cout << "\n";
	
	return 0;
}
