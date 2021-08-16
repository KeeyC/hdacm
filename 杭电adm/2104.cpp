#include<iostream>
using namespace std;
int main() {
	int M, N;
	while (cin >> M >> N) {
		if (M == -1 && N == -1) break;//terminal condition
		while (N) {
			int temp = N;
			N = M % N;
			M = temp;
		}
		if (M == 1) cout << "YES" << endl;
		else
			cout << "POOR Haha" << endl;
	}
}

	//最开始用数组来完成，发现走不通，会memory limit exceeded,
	// 后来在网上查了后发现需要用公约数来做
	//int M, N; Wrong!!!
	//while (cin >> M >> N) {
	//	if (M == -1 && N == -1) break;//terminal condition
	//	vector<int> A;
	//	for (int i = 0;i < M;i++) A.push_back(0);
	//	int j = 0;
	//	int tongji = 0;
	//	while (A[j] != 1) {
	//		A[j] = 1;
	//		j += N;
	//		if (j >= M)j = j - M;
	//		tongji++;
	//	}
	//	bool T = true;
	//	/*for (int k = 0;k < M;k++) {
	//		if (A[k] == 0) T = false;
	//	}*/
	//	if (tongji == M) T = true;
	//	if (T) cout << "Yes" << endl;
	//	else
	//		cout << "POOR Haha" << endl;
	//}
	//return 0;
//}
