#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <map>
typedef long long LL;
using namespace std;

int a,b;

int recursion(const char *s, int l, int r){
	b++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main()
{
	int T;
	cin >> T;
	for(;T--;)
	{
		char arr[1005];
		a = b = 0;
		scanf("%s",arr);
		cout << isPalindrome(arr) << ' ' << b << endl;
		
	}
}
