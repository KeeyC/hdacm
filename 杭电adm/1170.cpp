#include<iostream>
#include<stack>
#include<string>
#include<iomanip>
void reSum(const char C, double A, double  B) {
	double sum;
	switch (C)
	{
	case '+':sum = A + B;std::cout << sum << std::endl; break;
	case '*':sum = A * B;std::cout << sum << std::endl; break;
	case '-':sum = A - B;std::cout << sum << std::endl; break;
	case '/':if (int(A) % int(B) == 0) sum = A / B;
			else
		sum = A / B;
		std::cout << std::setprecision(2) << std::fixed <<sum  << std::endl;break;

	}
}
int main() {
	int n;
	while (std::cin >> n) {
		while (n--) {
			double  A, B,sum;
			char C;
			std::cin >> C;
			std::cin >> A >> B;
			reSum(C, A, B);
			}
		

		}
	}
