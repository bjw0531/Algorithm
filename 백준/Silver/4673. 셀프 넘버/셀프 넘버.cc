#include <iostream>
using namespace std;

int arr[10005];

int main()
{
	for(int self = 1; self <= 10000; self++)
	{
		int tmp1 = self, tmp2 = self;
		while(tmp1 != 0)
		{
			tmp2 += tmp1 % 10;
			tmp1 /= 10;
		}
		arr[tmp2] = 1;
	}
	for(int i = 1; i <= 10000; i++)
	{
		if(arr[i] == 0) cout << i << endl;
	}
}
