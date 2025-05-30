#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string s1, s2;
    if(s.size() % 2 == 1)
    {
        s.erase(s.size() / 2, 1);
    }
    s1 = s.substr(0,s.size() / 2);
    s2 = s.substr(s.size() / 2, s.size());

    reverse(s2.begin(), s2.end());

    if(s1 == s2)    cout << 1;
    else            cout << 0;
}
