#include <iostream>
#include <vector>
#include <algorithm>
#define INF 1e9
#define MAX 10001
using namespace std;
int v, e;
struct edge {
	int u, v, cost;
	edge(int u, int v, int cost){
		this->u = u;
		this->v = v;
		this->cost = cost;
	}
};
vector<edge> vertex;
int parent[MAX];

int getParent(int a) {
	if (a == parent[a])
		return a;
	else {
		return parent[a] = getParent(parent[a]);
	}
}

void merge(int a, int b) {
	a = getParent(a);
	b = getParent(b);

	parent[a] = b;
}

int comp(edge& a, edge& b) {
	return a.cost < b.cost;
}

int main() {
	cin >> v >> e;
	long long answer = 0;
	for (int i = 0; i < MAX; i++) {
		parent[i] = i;
	}

	for (int i = 0; i < e; i++) {
		int start, end, cost;
		cin >> start >> end >> cost;
		vertex.push_back(edge(start, end, cost));
	}
	sort(vertex.begin(), vertex.end(), comp);

	for (int i = 0; i < vertex.size(); i++) {
		//사이클이 안생긴다면 선택
		if (getParent(vertex[i].u) != getParent(vertex[i].v)) {
			merge(vertex[i].u, vertex[i].v);
			answer += vertex[i].cost;
		}
	}
	cout << answer;
	return 0;
}
