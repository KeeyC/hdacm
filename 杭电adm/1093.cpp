#include<iostream>
using namespace std;
int main() {
	int lines;
	while (cin >> lines) {
		while (lines--) {
			int nums;
			cin >> nums;
			int sum = 0, fig;
			while (nums--) {
				cin >> fig;
				sum += fig;
			}
			cout << sum << endl;
		}
	}
}