#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int on, off;
	int count = 0;
	int max = -1;
	while (1) {
		cin >> off >> on;

		if (on == 0)
			break;

		count = count - off + on;
		if (max < count) {
			max = count;
		}
	}
	
	cout << max;
	return 0;
}
