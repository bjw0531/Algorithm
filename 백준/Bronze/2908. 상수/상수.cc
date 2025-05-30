#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>
using namespace std;




int main()
{
	string a, b;
	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	int x = 0, y = 0;
	for (int i = 0, k = 100; i < 3; i++, k /= 10)
	{
		x += (a[i] - '0') * k;
		y += (b[i] - '0') * k;
	}
	
	if (x >= y)	cout << x;
	else		cout << y;
	
}