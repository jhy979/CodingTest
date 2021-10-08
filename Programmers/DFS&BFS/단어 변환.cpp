#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
int answer = 0;
bool visited[51];
bool cmp (string s, string d){
    int count = 0;
    for(int i = 0 ; i <s.size();i++){
        if(s[i] == d[i])
            count++;
    }
    if(count == s.size()-1)
        return true;
    else 
        return false;
}

void dfs(string begin, string target, vector<string> words,int count){
    if(begin == target){
        answer = min(answer,count);
        return ;
    }
    for(int i = 0 ; i <words.size();i++){
        if(!visited[i] && cmp(begin,words[i])){
            visited[i]=true;
            answer++;
            dfs(words[i], target, words,count+1);
            visited[i]=false;
        }
    }
}
int solution(string begin, string target, vector<string> words) {
    // target 단어를 포함하지 않으면 answer = 0
    if(find(words.begin(),words.end(),target)==words.end())
        return 0;
    
    dfs(begin, target, words,0);
    
    return answer;
}
