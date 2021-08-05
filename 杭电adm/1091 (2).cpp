#include<iostream>
using namespace std;
int main() {
	int m, n;
	while (cin >> m >> n) {
		if (m == 0 && n == 0) break;
		cout << m + n << endl;
	}
}