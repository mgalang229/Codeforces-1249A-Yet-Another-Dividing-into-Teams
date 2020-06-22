#include <bits/stdc++.h>

#define ll long long

using namespace std;

void decode() {
	int a[100], n;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	bool ok = true;
	sort(a, a + n);
	for(int i = n - 1; i >= 0; --i) {
		if(i == 0) break;
		else if(a[i] - a[i-1] <= 1) {
			ok = false;
		}
	}
	if(!ok) cout << 2;
	else cout << 1;
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
