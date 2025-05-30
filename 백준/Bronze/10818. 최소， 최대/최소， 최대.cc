#include <iostream>
#include <algorithm>
using namespace std;
using LL = long long;

LL a,b,c,d;
LL result;
int arr[1000005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> a;
    for(int i = 1; i <= a; i++)
    {
        cin >> b;
        arr[i] = b;
    }
    cout << *min_element(arr+1,arr+1+a) << ' ' << *max_element(arr+1,arr+1+a);
}
