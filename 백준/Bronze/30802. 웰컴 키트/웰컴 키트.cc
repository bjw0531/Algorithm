#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define int int64_t

int32_t main()
{
    int n, t, p; 
    int cloth[6];
    int t_result = 0;
    
    cin >> n;
    
    for(int i = 0; i < 6; i++)
        cin >> cloth[i];
    
    cin >> t >> p;
    
    for(int i = 0, temp; i < 6; i++)
    {
        temp = cloth[i] / t;
        if(cloth[i] % t != 0)   temp++;
        t_result += temp;
    }
    
    cout << t_result << endl;
    cout << n / p << " " << n % p << endl;
    
}