#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map <string,int> m;
    for(int i = 0 ; i < clothes.size();i++){
           m[clothes[i][1]]++;
    }
    for(auto itr:m){
        answer *= itr.second+1;
    }
    return answer-1;
}
