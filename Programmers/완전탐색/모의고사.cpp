#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool comp(pair<int,int>a,pair<int,int>b){
    if (a.second > b.second)
        return true;
    else if(a.second== b.second){
        return a.first<b.first;
    }
}
vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {2,1,2,3,2,4,2,5};
    int arr3[] = {3,3,1,1,2,2,4,4,5,5};
    int sum1=0;
    int sum2=0;
    int sum3=0;
    for(int i = 0 ; i <answers.size();i++){
        if(answers[i] == arr1[i%5]){
            sum1++;
        }
        if(answers[i] == arr2[i%8]){
            sum2++;
        }
        if(answers[i] == arr3[i%8]){
            sum3++;
        }
    }
    vector<pair<int,int>> v;
    v.push_back({1,sum1});
    v.push_back({2,sum2});
    v.push_back({3,sum3});
    sort(v.begin(),v.end(),comp);
    
    answer.push_back(v[0].first);
    if(v[0].second==v[1].second)
        answer.push_back(v[1].first);
    if(v[0].second==v[1].second && v[1].second==v[2].second)
        answer.push_back(v[2].first);
    
    return answer;
}
