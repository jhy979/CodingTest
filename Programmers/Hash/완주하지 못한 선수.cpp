#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map <string,int> m;
    for(int i = 0 ; i <participant.size();i++){
        m[participant[i]]++;
    }
    for(int i = 0 ; i <completion.size();i++){
        m[completion[i]]--;
    }
    
    for(auto itr : m){
        // answer.push_back(itr.first);
        if(itr.second > 0 )
            answer = itr.first;
    }
    return answer;
}
