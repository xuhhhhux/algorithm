#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int N = 1E6 + 10;

int pr[N], cnt;
bool ok[N];

void get_primes(int n) {
	for (int i = 2; i <= n; i++) {
		if (!ok[i]) {
			pr[cnt++] = i;
		}
		for (int j = 0; pr[j] * i <= n; j++) {
			ok[i * pr[j]] = true;
			if (i % pr[j] == 0) {
				break;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	get_primes(N - 1);
	
	return 0;
}
