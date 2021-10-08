#include <string>
#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

vector <int> map[20001];
int visited[20001];
vector <pair<int,int>> arr;

void bfs(int n){
    queue <pair<int,int>> q;
    q.push({1,1});
    visited[1]=1;
    while(!q.empty()){
        int start = q.front().first;
        int second = q.front().second;
        arr.push_back({second,start});
        q.pop();
        for(auto itr : map[start]){
            if(!visited[itr]){
                visited[itr]=1;
                q.push({itr,second+1});
            }
        }
    }
}

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    for(int i = 0 ; i < edge.size();i++){
        int u = edge[i][0];
        int v = edge[i][1];
        map[u].push_back(v);
        map[v].push_back(u);
    }
    
    bfs(n);
    
    sort(arr.begin(),arr.end(),greater<pair<int,int>>());
    
    int mcount = arr[0].first;
    for(int i = 0 ; i <arr.size();i++){
        if(mcount == arr[i].first)
            answer++;
        else
            break;
    }
    return answer;
}
