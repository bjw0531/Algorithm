#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a,s;
	cin >> a;
	cin >> s;
	int sum=0;

	for(int it = 0; s[it]; it++)
	{
		int tmp = s[it] - '0';
		sum += tmp;
	}
	cout << sum;
}