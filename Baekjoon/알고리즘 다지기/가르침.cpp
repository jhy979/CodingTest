#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int n,k;
vector <string> arr;
int a[26];
int MAX = -1e9;

void dfs(int idx, int cnt) {

	if (cnt == k) {
		int sum = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i].size()==0) {
				sum++;
				continue;
			}
			for (int j = 0; j < arr[i].size(); j++) {
				int check = arr[i][j] - 'a';
				if (a[check] == 0) {
					break;
				}
				else if (a[check] == 1 && j == arr[i].size() - 1) {
					sum++;
				}
			}
		}
		MAX = max(MAX, sum);
		return ;
	}

	for (int c = idx; c < 26; c++) {
		if (a[c] == 1)
			continue;
		a[c] = 1;
		dfs(c, cnt + 1);
		a[c] = 0;
	}
	
}

int main() {
	cin >> n >> k;
	string temp;
	getchar();
	for (int i = 0; i < n; i++) {
		cin >> temp;
		temp.erase(temp.begin(), temp.begin() + 4);
		temp.erase(temp.end()-4, temp.end());
		arr.push_back(temp);
	}
	fill_n(a, 26, 0);
	
	a['a'-'a'] = 1;
	a['c'-'a'] = 1;
	a['n'-'a'] = 1;
	a['i'-'a'] = 1;
	a['t'-'a'] = 1;

	if (k == 26) {
		cout << n;
	}
	else if (k < 5) {
		cout << 0;
	}
	else {
		dfs(0,5);
		cout << MAX;
	}
	return 0;
}
