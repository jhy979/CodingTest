#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 15000001
using namespace std;
int dp[MAX];
int T[MAX];
int P[MAX];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> T[i] >> P[i];
	}
	fill(dp, dp + MAX, 0);

	for (int i = 0; i < n; i++) {
		dp[i + T[i]] = max(dp[i + T[i]], P[i] + dp[i]);
		dp[i + 1] = max(dp[i + 1], dp[i]);
	}

	cout << dp[n];
	return 0;
}
