#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool comp(string a, string b){
    return a+b > b+a;
}
string solution(vector<int> numbers) {
    vector <string> arr;
    string answer = "";
    
    for(int i = 0 ; i< numbers.size();i++){
        arr.push_back(to_string(numbers[i]));
    }

    sort(arr.begin(),arr.end(),comp);
    
    for(int i = 0 ; i< arr.size();i++){
        answer+=arr[i];
    }
    
    if(arr[0]=="0")
        return "0";
    return answer;
}
