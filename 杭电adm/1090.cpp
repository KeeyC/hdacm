#include<iostream>
using namespace std;
int main() {
	int lines;
	cin >> lines;
	int m, n;
	while (lines) {
		cin >> m >> n;
		cout << m + n << endl;
		lines--;
	}
}