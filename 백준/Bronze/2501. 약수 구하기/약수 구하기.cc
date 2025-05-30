#include <iostream>
#include <queue>
#include <vector>
#include <set>
using namespace std;

set<int> s;
int N,K;

void solve()
{
    for(int i = 1; i < N; i++)
    {
        if(N % i == 0)
        {
            s.insert(i);
            s.insert(N / i);
        }
    }
}

int main()
{
    cin >> N >> K;
    solve();

    if(K > s.size())
    {
        cout << 0;
        return 0;
    }

    auto i = s.begin();
    advance(i, K-1);
    cout << *i;
}
