#include <string>
#include <vector>
#include <iostream>
int answer = 0;

using namespace std;
void dfs(int sum, int count,vector<int> numbers,int target){
    if(count==numbers.size()){
        if(sum == target)
            answer++;
        return ;
    }
    dfs(sum+numbers[count],count+1,numbers,target);
    dfs(sum-numbers[count],count+1,numbers,target);
}
int solution(vector<int> numbers, int target) {
    dfs(0,0,numbers,target);
    return answer;
}
