#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>
#define int long long
using namespace std;

int32_t main()
{
    int c, d, k;
    cin >> d >> k;

    // f(a+1, b, n) + n - 1 = f(a, b+1, n)


    for(int A = 1; A <= 100000; A++)
    {
        for(int B = 1; B <= 100000; B++)
        {
            int a = A, b = B;
            for(int i = 0; i < d-2; i++)
            {
                c = a + b;
                a = b;
                b = c;
            }
            if(c == k)
            {
                cout << A << '\n' << B;
                return 0;
            }

        }
    }

}
