#include<iostream>
#include<string>
#include<map>
/*
ע����Ŀ��ʾҪ��ͬ�ļ�¼���ʣ���ʼһֱwrong answer�������ԭ����������֮����֪
Ҫ��map���������浥�ʣ�becasuse map ������ key ������ͬ����same�������������
*/
int main() {
	std::string ter;
	while (std::getline(std::cin, ter)) {
		int sum = 1;
		int k = 0;
		std::map<std::string, int> map_word;
		{
			if (ter[0] == '#') break;
			if (ter[0] == ' ') {
				sum = 0;
				for (auto it = ter.begin();it != (ter.end() - 1);it++) {
					if (*it == ' ' && *(it + 1) != ' ') sum++;
				}
			}

			else {
				for (auto it = ter.begin();it != (ter.end() - 1);it++) {
					if (*it == ' ' && *(it + 1) != ' ') sum++;
				}
			}
		}
		if (sum == 0) { std::cout << 0 << std::endl; continue; }
		std::string* word = new std::string[sum];
		for (auto it = ter.begin();it != ter.end();it++) {
			if (*it == ' ' && it == ter.begin())continue;
			if (*it != ' ')
				word[k] += *it;
			if (it == ter.end() - 1)break;
			if (*it == ' ' && *(it + 1) != ' ' && !word->empty())
				k++;
		}
		for (int i = 0;i <= k;i++)
			map_word.emplace(word[i], 0);
		std::cout << map_word.size() << std::endl;
	}
}