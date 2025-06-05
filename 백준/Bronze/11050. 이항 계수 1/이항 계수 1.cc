#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n <= 1)
        return 1;
    return factorial(n-1) * n;
}

int main()
{
    int n, k;
    cin >> n >> k;

    cout << factorial(n) / (factorial(n-k) * factorial(k));

}
