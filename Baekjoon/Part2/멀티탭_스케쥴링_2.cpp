#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
/*
가장 나중에 쓸 콘센트를 뽑아주자는 방식

구글링해서 얻은 모든 반례를 통과했는데도 실패.. 이유가 무엇일까
*/
int main() {
	int n, k;
	cin >> n >> k;
	vector <int> arr;
	for (int i = 0; i < k; i++) {
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}
	map <int, bool> consent;
	int result = 0;

	for (int i = 0; i < k; i++) {
		// 이미 꽂혀있는 경우 skip arr[i]가 consent에 있나없나
		if (!consent.empty() && consent.find(arr[i]) != consent.end()) {
			continue;
		}
		// 꽂혀있지 않은 경우
		else if (consent.find(arr[i]) == consent.end()) {
			//  자리 있으면 꽂기
			if (consent.size() < n) {
				consent[arr[i]] = true;
			}
			// 자리 없으면 뽑고 꽂기
			else if (consent.size() == n) {
				int count = 0;

				// 마지막에 도달했을 때
				if (i == k - 1) {
					if (consent.find(arr[i]) == consent.end()) {
						cout << result + 1;
					}
					else {
						cout << result;
					}
					return 0;
				} 

				// 가장 늦게 사용하는 애를 뽑자
				for (int j = i + 1; j < k; j++) {
					// 이 친구는 금방 쓰일 예정
					if (consent.find(arr[j]) != consent.end()) {
						consent[arr[j]] = false;
						count++;
					}

					if (count == n - 1 || j == k - 1) {
						for (auto iter = consent.begin(); iter != consent.end(); iter++) {
							if (iter->second == true) {
								// 콘센트 교체
								consent.erase(iter);
								consent[arr[i]] = true;
								result++;
								break;
							}
						}
						break;
					}

				}
			}

			for (auto iter = consent.begin(); iter != consent.end(); iter++) {
				consent[iter->first] = true;
			}
		}
		/*cout << arr[i] << " ";
		cout << "콘센트 상황 : ";
		for (auto m = consent.begin(); m != consent.end(); m++) {
			cout << m->first << " ";
		}
		cout << endl;*/
	}
	cout << result;

	return 0;
}
