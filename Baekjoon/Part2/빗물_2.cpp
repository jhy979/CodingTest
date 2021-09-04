#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
정답
*/

int main() {
	// 입력
	int h=0, w=0;
	cin >> h >> w;
	vector<int> arr(w);
	for (int i = 0; i < w; i++)
		cin >> arr[i];
    
	int result = 0;
	for (int i = 1; i < w - 1; i++) {
		int left=-1e9, right=-1e9;
		for (int j = 0; j < i; j++)
			left = max(left, arr[j]);
		for (int j = i + 1; j < w; j++)
			right = max(right, arr[j]);
		result += max(0, min(left, right) - arr[i]);
	}
	cout << result;
	return 0;
}
