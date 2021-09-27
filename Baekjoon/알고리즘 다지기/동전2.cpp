#include <vector>
#include <algorithm>
#include <iostream>
#define MAX 1e9

using namespace std;

int n, k;
int dp[10001];
int main() {

	cin >> n >> k;
	fill_n(dp, 10001, MAX);
	dp[0] = 0;
	int temp = 0;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		for (int j = 1; j <= k; j++) {
			if (j - temp >= 0) {
				dp[j] = min(dp[j], dp[j - temp] + 1);
			}
		}
	}
	if (dp[k] == MAX)
		cout << -1;
	else
		cout << dp[k];
	return 0;
}
