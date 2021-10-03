//DFS
//DFS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int map[101][101];
int visited[101][101];
int n, m;
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int mSum = -1e9;
int sum=0;

void dfs(int a, int b) {
	visited[a][b] = 1;
	sum++;
	for (int i = 0; i < 4; i++) {
		int nX = dx[i] + a;
		int nY = dy[i] + b;
		if (nX <= 0 || nX > n || nY <= 0 || nY > m) {
			continue;
		}
		if (visited[nX][nY]==0 && map[nX][nY]==1) {
			dfs(nX, nY);
		}
	}
}
int main() {

	cin >> n >> m;
	int count = 0;
	cin >> count;

	for (int i = 0; i < count; i++) {
		int temp1, temp2;
		cin >> temp1 >> temp2;
		map[temp1][temp2] = 1;
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (visited[i][j]==0 && map[i][j]==1) {
				sum = 0;
				dfs(i, j);
				mSum = max(sum, mSum);
			}
		}
	}

	cout << mSum;
	return 0;
}



//BFS
//BFS


#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int map[101][101];
int visited[101][101];
int n, m;
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int mSum = -1e9;
int sum=0;

void bfs(int a, int b) {
	queue <pair<int,int>> q;
	q.push({ a,b });
	visited[a][b] = 1;
	sum = 1;
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nX = dx[i] + x;
			int nY = dy[i] + y;
			if (nX <= 0 || nX > n || nY <= 0 || nY > m) {
				continue;
			}
			if (visited[nX][nY]==0 && map[nX][nY]==1) {
				visited[nX][nY] = 1;
				q.push({nX,nY});
				sum++;
			}
		}
	}
}
int main() {

	cin >> n >> m;
	int count = 0;
	cin >> count;

	for (int i = 0; i < count; i++) {
		int temp1, temp2;
		cin >> temp1 >> temp2;
		map[temp1][temp2] = 1;
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (visited[i][j]==0 && map[i][j]==1) {
				sum = 0;
				bfs(i, j);
				mSum = max(sum, mSum);
			}
		}
	}

	cout << mSum;
	return 0;
}
