#include<iostream>
using namespace std;
int main() {
	int nums;
	while (cin >> nums) {
		if (nums == 0)break;
		int sum = 0;
		int fig;
		while (nums--) {
			cin >> fig;
			sum = sum + fig;
		}
		cout << sum << endl;
	}
}