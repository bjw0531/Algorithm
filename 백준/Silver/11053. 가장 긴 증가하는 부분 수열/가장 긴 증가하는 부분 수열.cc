#include <iostream>
#include <vector>
#include <algorithm>

#define INF 2e9
using namespace std;

vector<int> v;
vector<int> LIS;
int N;

int main()
{
    cin >> N;
    v.reserve(N);
    LIS.resize(N, INF);
    for(int i = 0; i < N; i++)    cin >> v[i];

    LIS[0] = v[0];
    for(int i = 1; i < N; i++)
    {
        *lower_bound(LIS.begin(),LIS.end(), v[i]) = v[i];
    }
    cout << lower_bound(LIS.begin(), LIS.end(), INF) - LIS.begin();
}
