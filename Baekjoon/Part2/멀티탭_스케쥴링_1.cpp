#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
/*
콘센트를 뽑는 방법을 앞으로 가장 적게 사용될 콘센트 뽑는다는 아이디어로
코딩을 작성했으나 27%까지 통과하고 테스트케이스 실패
*/
vector<int>arr;
map<int, int> m;

int main() {

	int n, k;
	cin >> n >> k;
	int count = 0;
	//입력 받기
	for (int i = 0; i < k; i++) {
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	//map 생성
	for (int i = 0; i < arr.size(); i++) {
		m[arr[i]]++;
	}

	vector<int>can;

	for (int i = 0; i < arr.size(); i++) {
		//배열 안에 이미 있다면 (이미 콘센트를꽂았다면)
		if (find(can.begin(), can.end(), arr[i]) != can.end()) {
			continue;
		}
		else if (can.size() < n) {
			// arr[i] 삽입
			can.push_back(arr[i]);
			// map에서 개수 빼주기
			m[arr[i]]--;
		}
		else {
			// can 안의 원소 들 중 가장 적게 사용되는 친구를 빼고
			int idx = 0;
			int Min = m[can[0]];
			for (int j = 1; j < n; j++) {
				if (m[can[j]] < Min) {
					Min = m[can[j]];
					idx = j;
				}
			}
			// arr[i]를 넣어줍시다.
			can[idx] = arr[i];
			m[arr[i]]--;
			// 뽑는 count ++;
			count++;
		}
	}

	cout << count;

	return 0;
}
