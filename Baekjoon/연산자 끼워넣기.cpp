#include <iostream>
#include <vector>
using namespace std;

int prime[100001];
int Min = 1e9;
int Max = -1e9;
int a, b, c, d;

void dfs(int add,int sub, int mul, int div, vector<int> arr,int count,int sum) {
	if (count == arr.size()) {
		Min = Min > sum ? sum : Min;
		Max = Max < sum ? sum : Max;
		return;
	}
	if (add < a) {
		dfs(add + 1, sub, mul, div, arr, count + 1, sum + arr[count]);
	}
	if (sub < b) {
		dfs(add, sub + 1, mul, div, arr, count + 1, sum - arr[count]);
	}
	if (mul < c) {
		dfs(add, sub, mul + 1, div, arr, count + 1, sum * arr[count]);
	}
	if (div < d) {
		dfs(add, sub, mul, div + 1, arr, count + 1, sum / arr[count]);
	}
}

int main() {
	int size = 0;
	vector<int> arr;

	cin >> size;
	for (int i = 0; i < size; i++) {
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}
	cin >> a >> b >> c >> d;

	dfs(0, 0, 0, 0, arr, 1, arr[0]);
	cout << Max << endl << Min;
	return 0;
}
