#include <string>
#include <vector>
#include <iostream>
using namespace std;
bool visited[201];
void dfs(int i, vector<vector<int>> computers){
    visited[i] =true;
    for(int j = 0 ; j <computers[i].size();j++){
        if(!visited[j] && i!=j && computers[i][j])
            dfs(j,computers);
    }
}
int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for(int i = 0 ; i <computers.size();i++){
        if(!visited[i]){
            dfs(i,computers);
            answer++;
        }
    }
    return answer;
}
