#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int N = 1E5 + 10;

int n;
int a[N];

void merge_sort(int l, int r) {
	if (l >= r) {
		return;
	}
	
	int mid = (l + r) / 2;
	merge_sort(l, mid), merge_sort(mid + 1, r);
	
	int res[r - l + 1], k = 0;
	int i = l, j = mid + 1;
	while (i <= mid && j <= r) {
		if (a[i] <= a[j]) res[k++] = a[i++];
		else res[k++] = a[j++];
	}
	
	while (i <= mid) {
		res[k++] = a[i++];
	}
	while (j <= r) {
		res[k++] = a[j++];
	}
	
	for (int i = l, j = 0; i <= r; i++, j++) {
		a[i] = res[j];
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	merge_sort(0, n - 1);
	
	for (int i = 0; i < n; i++) {
		cout << a[i] << " \n"[i == n - 1];
	}
	
	return 0;
}
