#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> fibo;
	fibo.push_back(0);
	fibo.push_back(1);

	int n = 0;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		fibo.push_back(fibo[i - 1] + fibo[i - 2]);
	}
	cout << fibo[n];
	return 0;
}
