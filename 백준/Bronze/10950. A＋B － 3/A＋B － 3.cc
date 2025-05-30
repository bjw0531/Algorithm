#include <iostream>
#include <algorithm>
using namespace std;

int a,b,c;

int main()
{
    cin >> a;
    for(int i = a; i--;)
    {
        cin >> b >> c;
        cout << b+c << endl;
    }
}
