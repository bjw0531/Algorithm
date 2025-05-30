#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for(;T--;)
	{
		string a;
		cin >> a;
		cout << a.front() << a.back() << endl;
	}
}