#include <iostream>
#include <algorithm>
using namespace std;
using LL = long long;

LL a,b,c,d;
LL result;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> a;
    for(int i = a; i--;)
    {
        cin >> b >> c;
        cout << b+c << '\n';
    }
}
