#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		vector<int> arr;
		for (int j = 0; j < 10; j++) {
			int temp;
			cin >> temp;
			arr.push_back(temp);
		}
		sort(arr.begin(), arr.end(), greater<int>());
		cout << arr[2] << endl;
	}
	return 0;
}
