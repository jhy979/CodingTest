#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int wSum=0;
    int lSum=0;
    int count=0;
    queue <int> waitq;
    queue <int> timeq;
    for(int i = 0 ; i <truck_weights.size();i++){
        waitq.push(truck_weights[i]);
    }
    while(!waitq.empty()){
        answer++;
        // bridge_legnth대 제한 
        if(lSum+1 <= bridge_length && wSum+waitq.front() <= weight){
            lSum++;
            wSum+=waitq.front();
            waitq.pop();
            timeq.push(1);
        }
        else {
            timeq.push(0);
        }
        // 빠져나옴
        if(timeq.size()==bridge_length){
            if(timeq.front()==1){
                lSum--;
                wSum-= truck_weights[count++];
            }
            timeq.pop();
        }
    }
    return answer+bridge_length;
}
