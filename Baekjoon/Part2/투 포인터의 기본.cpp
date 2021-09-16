#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, s;
	cin >> n >> s;
	vector<int> arr(n);
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int start = 0, end = 0;
	int sum = 0, len = 1e9;

	while (start <= end) {
		if (sum >= s) {
			len = min(len, end - start);
			sum -= arr[start++];
		}
		else if (end == n)
			break;
		else
			sum += arr[end++];
	}

	if (len == 1e9)
		cout << 0;
	else
		cout << len;
	return 0;
}
