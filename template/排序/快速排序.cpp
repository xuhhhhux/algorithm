#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int N = 1E5 + 10;

int n;
int a[N];

void quick_sort(int l, int r) {
	if (l >= r) {
		return;
	}
	
	int mid = a[(l + r) / 2];
	int i = l - 1, j = r + 1;
	while (i < j) {
		while (a[++i] < mid);
		while (a[--j] > mid);
		if (i < j) {
			swap(a[i], a[j]);
		}
	}
	
	quick_sort(l, j);
	quick_sort(j + 1, r);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	quick_sort(0, n - 1);
	
	for (int i = 0; i < n; i++) {
		cout << a[i] << " \n"[i == n - 1];
	}
	
	return 0;
}