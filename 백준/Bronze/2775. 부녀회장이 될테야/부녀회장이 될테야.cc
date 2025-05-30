#include <iostream>
#include <vector>
using namespace std;

int resident[16][10000];

int f(int a, int b)
{
    if(a == 0)  return resident[a][b] = b;
    if(b == 1)  return resident[a][b] = 1;
    else        return resident[a][b] = f(a,b-1) + f(a-1,b);
}

int solve(int a, int b)
{
    return f(a,b);
}

int main()
{
    int Case;
    cin >> Case;
    vector<int> v;

    for(int i = 0,a,b; i < Case; i++)
    {
        cin >> a >> b;
        v.push_back(solve(a,b));
    }
    for(auto i:v)   cout << i << endl;
}
