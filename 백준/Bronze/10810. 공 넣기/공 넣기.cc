#include <iostream>
#include <algorithm>
using namespace std;
using LL = long long;

LL a,b,c,d,e;
LL result;
int arr[1000005];
int M=-1,m=987654321;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b;
    for(int i = 1; i <= b; i++)
    {
        cin >> c >> d >> e;
        for(int j = c; j <= d; j++) arr[j] = e;
    }
    for(int i = 1; i <= a; i++) cout << arr[i] << ' ';
}
