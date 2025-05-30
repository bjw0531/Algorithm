#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
using LL = long long;

vector<int> v;
int a,b,c,d;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b;
    for(int i = 0; i <= a; i++) v.push_back(i);

    for(int i = 0; i < b; i++)
    {
        cin >> c >> d;
        reverse(v.begin()+c, v.begin()+d+1);
    }
    for(int i = 1; i <= a; i++) cout << v[i] << ' ';

}
