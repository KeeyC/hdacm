#include<iostream>//2021 0804
#include<cmath>A
#include<string>
using namespace std;
 int Sixteen_to_ten(char *A) {
	int len = strlen(A);
	long int num = 0;
	for (int i = 0;i < len;i++) {
		if (A[i] >= '0' && A[i] <= '9') {
			num += (A[i] - '0') * pow(16, len - i - 1);
		}
		if (A[i] >= 'A' && A[i] <= 'F') {
			num += (A[i] - 'A'+10) * pow(16, len - i - 1);
		}
		if (A[i] >= 'a' && A[i] <= 'f') {
			num += (A[i] - 'a'+10) * pow(16, len - i - 1);
		}

	}
	return num;
}
int main() {
	char A[10];
	char B[10];
	while (cin >> A >> B) {
		int num1 = Sixteen_to_ten(A);
		int num2 = Sixteen_to_ten(B);
		cout << num1 + num2 << endl;
	}
	

}