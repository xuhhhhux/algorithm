#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int h, w, n;
	cin >> h >> w >> n;
	
	string t;
	cin >> t;
	
	vector<string> s(h);
	for (int i = 0; i < h; i++) {
		cin >> s[i];
	}
	
	int ans = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (s[i][j] == '.') {
				int x = i, y = j;
				bool ok = true;
				for (auto c : t) {
					if (c == 'L') y--;
					if (c == 'R') y++;
					if (c == 'U') x--;
					if (c == 'D') x++;
					if (x < 0 || x >= h || y < 0 || y >= w) {
						ok = false;
						break;
					}
					if (s[x][y] == '#') {
						ok = false;
						break;
					}
				}
				ans += ok;
			}
		}
	}
	cout << ans << "\n";
	
	return 0;
}
