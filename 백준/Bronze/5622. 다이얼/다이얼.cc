#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>
#include <map>
using namespace std;

map<char,int> m;

int main()
{
	int t = 3;
	for(char i = 'A'; i <= 'W'; i += 3,t++)
	{
		m[i] = t;
		m[i+1] = t;
		m[i+2] = t;
		if(i == 'P'||i == 'W')
		{
			m[i+3] = t;
			i++;
		}
	}

	string a;
	int sum = 0;
	cin >> a;
	for(int i = 0; a[i]; i++)	sum += m[a[i]];
	cout << sum;
}