// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
#include <algorithm>
#define INF 987654321
using namespace std;

struct Data
{
    int R,G,B;
};

Data accum_cost[1005];
Data cost[1005];
int N;

int dp(int N)
{
    accum_cost[1].R = cost[1].R;
    accum_cost[1].G = cost[1].G;
    accum_cost[1].B = cost[1].B;
    
    for(int i = 1; i <= N; i++)
    {
        accum_cost[i].R = min(accum_cost[i-1].G, accum_cost[i-1].B) + cost[i].R;
        accum_cost[i].G = min(accum_cost[i-1].R, accum_cost[i-1].B) + cost[i].G;
        accum_cost[i].B = min(accum_cost[i-1].G, accum_cost[i-1].R) + cost[i].B;
    }
    return min({accum_cost[N].R, accum_cost[N].G, accum_cost[N].B});
}

int main() {
    cin >> N;
    for(int i = 1,R,G,B; i <= N; i++)
    {
        cin >> R >> G >> B;
        cost[i].R = R;
        cost[i].G = G;
        cost[i].B = B;
    }
    cout << dp(N);
}