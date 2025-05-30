#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;



int main()
{
	string s;
	int cnt = 0;
	getline(cin, s);

	if (s[0] != ' ')	cnt++;
	for (int i = 1; s[i]; i++)
	{
		if (s[i] != ' ' && s[i - 1] == ' ')	cnt++;
	}
	cout << cnt;
}