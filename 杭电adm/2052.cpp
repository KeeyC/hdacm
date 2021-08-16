#include<iostream>
using namespace std;
//Presentation Error
void printrectangle(int w, int h) {
	cout << "+";
	for (int i = 1;i <= w;i++) cout << "-";
	cout << "+";
	cout << endl;
	for (int j = 1;j <= h;j++) {
		cout << "|"; for (int i = 1;i <= w;i++) cout << " ";  cout << "|";
		cout << endl;
	}
	cout << "+";
	for (int i = 1;i <= w;i++) cout << "-";
	cout << "+";
	cout << endl;
}
int main() {
	int n, m;
	while (cin >> n >> m)printrectangle(n, m);
}