#include <iostream>
#include <algorithm>
using namespace std;
using LL = long long;

LL a,b,c,d;
LL result;

int main()
{
    cin >> a >> b;
    for(int i = b; i--;)
    {
        cin >> c >> d;
        a -= c*d;
    }
    if(a == 0)  cout << "Yes";
    else        cout << "No";
}
