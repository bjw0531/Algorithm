#include <iostream>
using namespace std;

long long N,K,sum;

int main()
{
    cin >> N >> K;
    for(int i = 1; i <= K; i++)    sum += i;
    N -= sum;
    
    if(0 > N)
    {
        cout << -1;
    }
    else
    {
        if(N % K == 0)    cout << K-1;
        else if(N % K != 0)              cout << K;
    }
    
    
}