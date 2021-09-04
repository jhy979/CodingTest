#include <iostream>
#include <vector>
using namespace std;

/*
아이디어 : 왼쪽에서 오른쪽으로 가며 시작 블록보다 큰 블록이 있으면 거기까지는 물이 찰 것이고,
다시 그 곳을 시작 블록으로 하여 오른쪽으로 이동하며 빗물이 고이는 곳 확인,
같은 절차를 오른쪽에서 왼쪽으로도 확인하여 빗물이 고이는 곳을 체크한다.
- test case는 모두 통과를 하였으나, hidden case에 대해서는 통과하지 못했다..
*/

int main() {
	// 입력
	int h=0, w=0;
	cin >> h >> w;

	vector<int> arr;
	for (int i = 0; i < w; i++) {
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	// 선언
	int start = arr[0];
	int end = arr[1];
	int tempSum = 0;
	int result = 0;

	//왼->오
	for(int i = 1 ; i <w;i++){
		end = arr[i];
		if (start > end) {
			tempSum += start - end;
		}
		else if (start <= end) {
			result += tempSum;
			tempSum = 0;
			start = end;
		}
	}

	//오->왼
	tempSum = 0;
	start = arr[w - 1];
	for (int i = w-2; i >= 1; i--) {
		end = arr[i];
		if (start > end) {
			tempSum += start - end;
		}
		else if (start <= end) {
			result += tempSum;
			tempSum = 0;
			start = end;
		}
	}

	cout << result;
	return 0;
}
