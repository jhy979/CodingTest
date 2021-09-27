#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n;
int arr[25][25];
int cnt;
vector <int> res;
void dfs(int i,int j) {
	cnt++;
	arr[i][j] = -1;
	//위
	if (i-1>=0 && arr[i-1][j]==1) {
		dfs(i - 1, j);
	}
	//아래
	if (i + 1 < n && arr[i+1][j] == 1) {
		dfs(i + 1, j);
	}
	//왼쪽
	if (j - 1 >= 0 && arr[i][j-1] == 1) {
		dfs(i, j-1);
	}
	//오른쪽
	if (j + 1 < n && arr[i][j+1] == 1) {
		dfs(i, j+1);
	}
	
}

int main() {

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%1d", &arr[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == 1) {
				cnt = 0;
				dfs(i, j);
				res.push_back(cnt);
			}
				
		}
	}

	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}*/

	cout << res.size() << endl;
	sort(res.begin(), res.end(), less<int>());
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << endl;
	}

	return 0;
}
