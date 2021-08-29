#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int check(int num) {
	int sum = 0;
	for (int i = 1;; i++) {
		sum += i;
		if (num <= sum) {
			return i;
		}
	}
}

int main() {
	int start, end;
	int sum = 0;
	cin >> start >> end;
	for (int i = start;i<=end; i++) {
		sum += check(i);
	}
	cout << sum;
	return 0;
}
