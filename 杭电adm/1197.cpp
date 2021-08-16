#include<iostream>
#include<vector>
int jinzhi(int num, int x) {
	int temp = 0;
	int sum = 0;
	std::vector<int> v;
	while (num) {
		temp = num % x;
		v.push_back(temp);
		num = num / x;
	}
	for (auto it = v.begin();it != v.end();it++) {
		sum += *it;
	}
	return sum;
}
int main() {
	int num = 1000;
	bool T;
	while (num < 10000) {
		int x = jinzhi(num, 10);
		int y = jinzhi(num, 12);
		int z = jinzhi(num, 16);
		if (x == y && x == z) std::cout << num << std::endl;
		num++;
	}
}