#include <iostream>
using namespace std;
int prime[100001];

int main() {
	int m, n;
	cin >> m >> n;
	prime[0] = 1;
	prime[1] = 1;
	int sum = 0;
	int min = 1e9;
	for (int i = 2; i < 100001; i++) {
		if (prime[i] == 1) continue;
		for (int j = i + i; j < 100001; j += i) {
			prime[j] = 1;
		}
	}

	for (int i = m; i <= n; i++)
		(prime[i] == 0) ? (sum += i), (min = min > i ? i : min) : 0;

	(sum == 0) ? (cout << -1) : (cout << sum << endl << min);
	return 0;
}
