#include <iostream>
using namespace std;
int main() {
    int size, n=0;
    int count = 0;
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> n;
        while (1) {
            // 탈출 조건을 웬만해서 앞에 적읍시다!
            if (n == 0) {
                break;
            }

            if (n % 2 == 1) {
                cout << count << " ";
            }
            n = n / 2;
            count++;
        }
        cout << "\n";
        count = 0;
    }
}
