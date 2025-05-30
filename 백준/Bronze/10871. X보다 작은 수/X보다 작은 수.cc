#include <iostream>
#include <algorithm>
using namespace std;
using LL = long long;

LL a,b,c,d;
LL result;
int arr[100000];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> a >> b;
    for(int i = 1; i <= a; i++)
    {
        cin >> c;
        if(c < b)   cout << c << ' ';
    }
}
