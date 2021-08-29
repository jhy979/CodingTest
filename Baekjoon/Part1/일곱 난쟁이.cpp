#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int temp;
    vector <int> small;
    int sum = 0;
    for(int i = 0 ; i < 9;i++){
        cin >> temp;
        sum+=temp;
        small.push_back(temp);
    }
    for(int i = 0 ; i < 8;i++){
        for(int j = i+1 ; j <9;j++){
            if(sum - small[i] - small[j] ==100){
                small[i]=200;
                small[j]=200;
                sort(small.begin(),small.end(),less<int>());
            }
        }
    }
    for(int i = 0 ; i <7;i++){
        cout <<small[i]<<endl;
    }

	return 0;
}
