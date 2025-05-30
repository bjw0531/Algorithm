#include <iostream>
#include <vector>

using namespace std;

int Case[1000001];


int solve(int n)
{
    Case[1] = 1;
    Case[2] = 2;
    Case[3] = 4;

    for(int i = 4; i <= n; i++)
    {
        Case[i] =  Case[i-1]  + Case[i-2] + Case[i-3];
    }
    return Case[n];
}

int main()
{
    vector<int> v;
    int tmp;
    cin >> tmp;

    for(int i = 0,a; i < tmp; i++)
    {
        cin >> a;
        v.push_back(solve(a));
    }
    for(auto i:v)   cout << i << endl;
}
