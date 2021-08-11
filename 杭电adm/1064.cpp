#include<iostream>
using namespace std;
int main()
{
	float num, sum=0;
	int k = 0;
	while (1) {
		cin >> num;
		sum += num;
		if (++k == 12) break;
	}
//	float ave = ((sum / 12) * 100 + 0.4) / 100.0;
	float ave = sum / 12;
	cout << "$" << ave << endl;
}