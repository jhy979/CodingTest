#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int n;
int map[17][17];
int sum = 0;

bool condition(int x,int y) {
	if (x < 0 || x >= n || y < 0 || y >= n)
		return false;
	if (map[x][y] == 1)
		return false;
	return true;
}

bool condition_D(int x, int y) {
	if (x+1 < 0 || x + 1 >= n || y + 1 < 0 || y + 1 >= n)
		return false;
	if (map[x+1][y] == 1|| map[x][y+1] == 1|| map[x+1][y+1] == 1)
		return false;
	return true;
}

void dfs(int x, int y, string s) {
	//종료조건
	if (x == n - 1 && y == n - 1) {
		sum++;
		return;
	}
	// 가로로 놓여진 경우
	if (s == "G") {
		if (condition(x, y + 1)) {
			dfs(x, y + 1,"G");
		}
		if (condition_D(x, y)) {
			dfs(x + 1, y + 1, "D");
		}
	}
	//세로로 놓여진 경우
	if (s == "S") {
		if (condition(x + 1, y)) {
			dfs(x + 1, y, "S");
		}
		if (condition_D(x, y)) {
			dfs(x + 1, y + 1, "D");
		}
	}
	//대각선으로 놓여진 경우
	if (s == "D") {
		if (condition(x, y + 1)) {
			dfs(x, y + 1, "G");
		}
		if (condition_D(x, y)) {
			dfs(x + 1, y + 1, "D");
		}
		if (condition(x + 1, y)) {
			dfs(x + 1, y, "S");
		}
	}
}
int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}
	dfs(0, 1,"G");

	cout << sum;
	return 0;
}
