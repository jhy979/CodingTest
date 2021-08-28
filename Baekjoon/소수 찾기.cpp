#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int prime[100001];

int main() {
	int n = 0;
	int count = 0;
	prime[0] = 1;
	prime[1] = 1;
	for (int i = 2; i < 100001; i++) {
		if (prime[i] == 1)
			continue;
		for (int j = i+i; j < 100001; j += i) {
			prime[j] = 1;
		}
	}

	cin >> n;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if (prime[temp]==0)
			count++;
	}
	cout << count;

	return 0;
}
