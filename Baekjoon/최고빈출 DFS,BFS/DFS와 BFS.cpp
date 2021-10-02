#include <iostream>
#include <queue>

using namespace std;
int v, e, start;
bool visited[1001];
int graph[1001][1001];
void dfs(int ss) {
	visited[ss] = true;
	cout << ss << " ";
	for (int i = 1; i <= 1000; i++) {
			if (!visited[i] && graph[ss][i]) {
				visited[i] = true;
				dfs(i);
			}
	}
}
void bfs() {
	queue <int> q;
	q.push(start);
	visited[start] = true;
	while (!q.empty()) {
		int front = q.front();
		q.pop();
		cout << front << " ";
		for (int i = 1; i <= 1000; i++) {
			if (!visited[i] && graph[front][i]) {
				visited[i] = true;
				q.push(i);
			}
		}
	}
}
int main() {
	cin >> v >> e >> start;
	fill(&graph[0][0], &graph[1000][1000], 0);
	fill(&visited[0], &visited[1000], false);
	for (int i = 0; i < e; i++) {
		int vs, ve;
		cin >> vs >> ve;
		graph[vs][ve] = 1;
		graph[ve][vs] = 1;
	}

	dfs(start);

	fill(visited, visited+1001, false);

	cout << endl;

	bfs();

	return 0;
}
