#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int n, m;
char arr[101][101];
int ww=0, bb=0;
bool visited[101][101];

int dx[4] = {0,1,-1,0};
int dy[4] = {-1,0,0,1};

int bfs(int a,int b) {
	queue <pair<int,int>> q;
	q.push({ a, b });
	visited[a][b] = true;
	int cnt = 1;

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nextX = dx[i] + x;
			int nextY = dy[i] + y;
			char c = arr[x][y];
			if (nextX < 0 || nextX >= m || nextY < 0 || nextY >= n) 
				continue;

			if (!visited[nextX][nextY] && c == arr[nextX][nextY]) {
				visited[nextX][nextY] = true;
				q.push({nextX ,nextY});
				cnt++;
			}
		}
	}
	return cnt*cnt;
}

int main() {

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			visited[i][j] = false;
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j]) {
				if (arr[i][j] == 'W') {
					int sum = bfs(i, j);
					ww += sum;
				}
				else {
					int sum = bfs(i, j);
					bb += sum;
				}
			}
		}
	}

	cout << ww << " " << bb;

	return 0;
}
