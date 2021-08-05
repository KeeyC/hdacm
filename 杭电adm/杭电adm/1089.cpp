#include<iostream>
using namespace std;
void add(int m, int n) {
	n = n + m;
	cout << n << endl;
}
int main() {
	int m, n;
	while (cin >> m >> n) add(m, n);
}