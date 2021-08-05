#include<iostream>
using namespace std;
int main()
{
	int nums,fig,sum=0; 
	while (cin >> nums) {
		sum = 0;
		while (nums--) {
			cin >> fig;
			sum += fig;
		}
		cout << sum << endl;
	}

}