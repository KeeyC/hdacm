#include<iostream>
using namespace std;

void exchange(int num, int system = 2)
{
	int i = 0;//纪录二进制位数
	int ex;
	ex = num;
	if (num == 0) cout << 0;
	while (num) {
		i++;
		num = num / 2;
	}
	num = ex;
	int* a = new int[i];
	for (int j = 0;j < i;j++) {
		a[j] = num % 2;
		num = num / 2;
	}
	for (int j = i - 1;j >= 0;j--) cout << a[j];
	cout << endl;
}
int main() {
	int num;
	while (cin >> num) exchange(num);
}