#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main() {
	int M, N;
	while (cin >> M >> N) {
		if (M == -1 && N == -1) break;//terminal condition
		vector<int> A;
		for (int i = 0;i < M;i++) A.push_back(0);
		int j = 0;
		while(A[j]!=1) {
			A[j] = 1;
			j += N;
			if (j >= M)j = j - M;
		}
		bool T = true;
		for (int k = 0;k < M;k++) {
			if (A[k] == 0) T = false;
		}
		if (T) cout << "Yes" << endl;
		else
			cout << "POOR Haha" << endl;
	}
	
}
