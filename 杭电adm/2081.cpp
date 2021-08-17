#include<iostream>
#include<vector>

int main() {
	int lines;
	std::cin >> lines;
	std::vector<char> S;
	while (lines--) {
		int phonenumber = 11;
		
		while (phonenumber--) {
			char number;
			std::cin >> number;
			S.push_back(number);
		}
		std::cout << 6;
		for (int i = 6;i < 11;i++) {
			std::cout << S[i];
		}
		std::cout << std::endl;
		S.clear();
	}
}