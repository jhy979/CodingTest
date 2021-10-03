#include <iostream>
#include <algorithm>
#include <vector>
// 왜 dfs로 하면 시간 초과가 날까? 에 대한 고찰이 필요
using namespace std;
int n, m;
int map[101][101];
bool visited[101][101];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int mdist = 1e9;
void dfs(int a,int b,int sum) {
	if (a == n - 1 && b == m - 1) {
		mdist = min(mdist, sum);
	}
	for (int i = 0; i < 4; i++) {
		int nextX = dx[i] + a;
		int nextY = dy[i] + b;
		if (nextX < 0 || nextX >= n || nextY < 0 || nextY >= m)
			continue;
		if (!visited[nextX][nextY] && map[nextX][nextY] == 1) {
			visited[a][b] = true;
			dfs(nextX, nextY, sum + 1);
			visited[a][b] = false;
		}
	}
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf_s("%1d", &map[i][j]);
			visited[i][j] = false;
		}
	}

	dfs(0, 0, 1);
	cout << mdist;
	return 0;
}
