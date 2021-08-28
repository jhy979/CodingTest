#include <iostream>
#include <vector>

using namespace std;

int GCD(int a, int b) {
	while (1) {
		if (a == b)
			return a;
		else
			a > b ? a = a - b : b = b - a;
	}
}

int LCM(int a, int b) {
	int gcd = GCD(a, b);
	return (a / gcd) * (b / gcd) * gcd;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << GCD(a, b) << "\n" << LCM(a, b);
}
