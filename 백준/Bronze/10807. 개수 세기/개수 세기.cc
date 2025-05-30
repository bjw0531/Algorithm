#include <iostream>
#include <algorithm>
using namespace std;
using LL = long long;

LL a,b,c,d;
LL result;
int arr[100000];

int main()
{
    cin >> a;
    for(int i = 1; i <= a; i++)
    {
        cin >> b;
        arr[i] = b;
    }
    cin >> c;
    cout << count(arr+1,arr+1+a,c);
}
