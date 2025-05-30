#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(int h, int w, int n)
{
    int f = (n-1) % h, b = (n-1) / h;
    int num = (f+1) * 100 + (b+1);
    return num;
}

int main()
{
    int t;
    cin >> t;
    for(int i = 0,a,b,c; i < t; i++)
    {
        cin >> a >> b >> c;
        cout << solve(a,b,c) << endl;
    }
}
