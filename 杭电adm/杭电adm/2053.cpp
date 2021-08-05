#include<iostream>
using namespace std;
void change(int n) {
	int ex = n;
	int c = 0;
	for (int i = 1;i <= n;i++) {
		ex = ex %i;
		if (ex ==0) c++;
		ex = n;
	}
	if (c % 2 == 0) cout << 0;
	else cout << 1;
	cout << endl;
}
int main()
{
	int n;
	while (cin >> n) {
		change(n);
	}
}