#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define INF 1e9
using namespace std;

int n, m;
vector <pair<int, int>> Bus[100001];
int start;
int dest;
int dist[100001];

void dijkstra() {
	priority_queue<pair<int, int>> pq;
	pq.push(make_pair(0, start));
	dist[start] = 0;
	while (!pq.empty()) {
		int cost = -pq.top().first;
		int cur = pq.top().second;
		pq.pop();
		if (dist[cur] < cost) {
			continue;
		}
		for (int i = 0; i < Bus[cur].size(); i++) {
			int next = Bus[cur][i].first;
			int ncost = cost + Bus[cur][i].second;
			if (dist[next] > ncost) {
				dist[next] = ncost;
				pq.push(make_pair(-ncost, next));
			}
		}
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int s, e, c;
		cin >> s >> e >> c;
		Bus[s].push_back(make_pair(e, c));
	}
	fill_n(dist, 100001, INF);
	cin >> start >> dest;
	dijkstra();

	cout << dist[dest];
	return 0;
}
