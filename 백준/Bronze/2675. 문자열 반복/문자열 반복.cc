#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;



int main()
{
	int T;
	cin >> T;
	for(;T--;)
	{
		int N;
		string S;
		cin >> N >> S;

		for(int i = 0; S[i]; i++)
		{
			for(int j = N; j--;)	cout << S[i];
		}
		cout << endl;
	}
}