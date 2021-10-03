//DFS
//DFS

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int vertex, edge;
vector<int> map[101];
int visited[101];
int sum = 0;

void dfs(int x) {
	visited[x] = 1;
	for (int i = 0; i < map[x].size(); i++) {
		if (visited[map[x][i]] == 0) {
			sum++;
			dfs(map[x][i]);
		}
	}
}
int main() {
	cin >> vertex >> edge;
	for (int i = 0; i < edge; i++) {
		int u, v;
		cin >> u >> v;
		map[u].push_back(v);
		map[v].push_back(u);
	}
	visited[1] = true;
	dfs(1);

	cout << sum;
	return 0;
}

//BFS
//BFS
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int vertex, edge;
vector<int> map[101];
int visited[101];
int sum = 0;

void bfs(int x) {
	queue <int> q;
	q.push(x);
	visited[x] = 1;
	while (!q.empty()) {
		int currentX = q.front();
		q.pop();

		for (int i = 0; i < map[currentX].size(); i++) {
			if (visited[map[currentX][i]] == 0) {
				visited[map[currentX][i]] = 1;
				sum++;
				q.push(map[currentX][i]);
			}
		}
	}
}
int main() {
	cin >> vertex >> edge;
	for (int i = 0; i < edge; i++) {
		int u, v;
		cin >> u >> v;
		map[u].push_back(v);
		map[v].push_back(u);
	}
	visited[1] = true;
	bfs(1);

	cout << sum;
	return 0;
}
