#include <bits/stdc++.h>

using namespace std;

using ll = long long;

vector<int> add(vector<int> a, vector<int> b) {
	vector<int> c;
	int t = 0;
	for (int i = 0; i < a.size() || i < b.size(); i++) {
		if (i < a.size()) {
			t += a[i];
		}
		if (i < b.size()) {
			t += b[i];
		}
		c.push_back(t % 10);
		t /= 10;
	}
	if (t) {
		c.push_back(t);
	}
	return c;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string s1, s2;
	cin >> s1 >> s2;
	
	vector<int> a, b;
	for (int i = s1.size() - 1; i >= 0; i--) {
		a.push_back(s1[i] - '0');
	}
	for (int i = s2.size() - 1; i >= 0; i--) {
		b.push_back(s2[i] - '0');
	}
	
	vector<int> c = add(a, b);
	
	for (int i = c.size() - 1; i >= 0; i--) {
		cout << c[i];
	}
	cout << "\n";
	
	return 0;
}
