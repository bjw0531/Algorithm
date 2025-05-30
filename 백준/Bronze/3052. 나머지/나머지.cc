#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
using LL = long long;

LL a,b,c,d,e;
LL result;
int arr[1000005];
set<int> s;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    for(int i = 1; i <= 10; i++)
    {
        cin >> a;
        s.insert(a%42);
    }
    cout << s.size();
}
