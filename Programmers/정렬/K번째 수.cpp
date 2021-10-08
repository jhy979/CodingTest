#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int I,J,K;
    for(int i = 0 ; i <commands.size();i++){
        I = commands[i][0];
        J = commands[i][1];
        K = commands[i][2];
        vector <int> arr;
        for(int j = I-1;j<=J-1;j++){
            arr.push_back(array[j]);
        }
        sort(arr.begin(),arr.end());
        answer.push_back(arr[K-1]);
    }
    return answer;
}
