#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(2 * n);
		vector<int> counter(n + 1, 0);
		for (int i = 0; i < 2 * n; i++) {
			cin >> a[i];
			counter[a[i]]++;
		}
		// basically, we need to find the number with zero occurrence before the element with 1 occurrence
		bool checker = true;
		for (int i = 0; i < n + 1; i++) {
			if (counter[i] == 0) { // missing element (this would be the MEX)
				break;
			}
			if (counter[i] == 1) { // if there is an element with only 1 occurrence, then it is impossible
				checker = false;
				break;
			}
		}
		cout << (checker ? "YES" : "NO") << '\n';
  }	
	return 0;
}
