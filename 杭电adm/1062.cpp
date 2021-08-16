#include<iostream>//Presentation Error
#include<cstring>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
	int lines;
	//cin >> lines;
	while (cin >> lines) {
		string a;
		string b;
		cin.ignore();
		while (lines--) {
			int ex = 0;
			int i = 0;
			getline(cin, a);
			int j = 0;
			b = a;
			while (i < a.length())
			{
				if (a[i] == ' ')
				{
					ex = i;
					for (;j < ex;j++)
					{
						b[j] = a[i - 1];
						i--;
					}
					i = ex;
					i++;
					j++;
				}
				else
					i++;
				if (i == a.length() - 1) {
					while (j < a.length()) {
						b[j++] = a[i--];
					}
					i = j;
				}
			}
			cout << b << endl;
		}
	}
}