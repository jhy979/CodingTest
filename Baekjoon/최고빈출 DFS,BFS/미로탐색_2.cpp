#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
	
using namespace std;
int n, m;
int map[101][101];
bool visited[101][101];
int path[101][101];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int mdist = 1e9;
int sum = 1;
void bfs(int a, int b) {
	queue <pair<int, int>> q;
	q.push(make_pair(a,b));
	visited[a][b] = true;
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nextX = dx[i] + x;
			int nextY = dy[i] + y;
			if (nextX < 0 || nextX >= n || nextY < 0 || nextY >= m)
				continue;
			if (!visited[nextX][nextY] && map[nextX][nextY] == 1) {
				path[nextX][nextY] = path[x][y] + 1;
				visited[nextX][nextY] = true;
				q.push({ nextX, nextY });
			}
		}
	}
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &map[i][j]);
			visited[i][j] = false;
		}
	}

	bfs(0, 0);
	/*for (int i = 0; i< n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%2d ",path[i][j]);
		}
		cout << endl;
	}*/
	cout << path[n-1][m-1]+1;
	return 0;
}
