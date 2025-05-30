// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int dp[100000];
int N;

int Dp(int N)
{
    dp[1] = 1;
    dp[2] = 2;
    if(N == 1)  return 1;
    if(N == 2)  return 2;
    
    for(int i = 3; i <= N; i++)
    {
        dp[i] = (dp[i-1] + dp[i-2]) % 10007;
    }
    return dp[N];
    
}

int main() {
    cin >> N;
    cout << Dp(N);
}