#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <cctype>
#include <map>
typedef long long LL;
using namespace std;

int arr[26];

int main()
{
	string s;
	cin >> s;

	for(int i = 0; s[i]; i++)
	{
		arr[toupper(s[i]) - 65] += 1;
	}

	int mx = -1;
	int c = 0;
	for(int i = 0; i < 26; i++)
	{
		if(arr[i] > mx)	
		{
			mx = arr[i];
			c = i;
		}
	}

	int cnt = 0;
	for(int i = 0; i < 26; i++)
	{
		if(arr[i] == mx)	cnt++;
	}

	if(cnt == 1)	cout << char(c+65);
	else			cout << '?';
}
