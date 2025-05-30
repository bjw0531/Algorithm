#include <iostream>
#include <vector>
#include <string>
#define int long long
using namespace std;

int32_t main()
{
    int n;
    int cnt = 0;
    cin >> n;

    string str_n = to_string(n);
    int len = str_n.length();

    while(1)
    {
        n *= 2;
        if(len != to_string(n).length())
        {
            break;
        }
        ++cnt;
    }

    cout << cnt;

}
