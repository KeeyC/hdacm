#include<iostream>
#include <string>
using namespace std;
int main() {
	string m;
	int sum = 0;
	while (getline( cin,m)) {
		if (m=="#") break;
		for (int i = 0;i < m.size();i++) {
			if (m[i] == ' ') sum += 0;
			else
				sum += (i + 1) * (m[i] - 64);
		}
		cout << sum << endl;
		sum = 0;
		}
	return 0;
}