#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define int int64_t

int32_t main()
{
    int n, m;
    int arr[1000];
    int mx = -1;
    
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < n; k++)
            {
                if(i == j)  continue;
                if(j == k)  continue;
                if(k == i)  continue;
                int total = arr[i] + arr[j] + arr[k];
                if(total > mx && total <= m)
                {
                    mx = total;
                }
            }
        }
    }
    
    cout << mx;
}