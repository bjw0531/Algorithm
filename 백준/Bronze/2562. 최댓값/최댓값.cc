#include <iostream>
using namespace std;

int main()
{
    int num[9];
    int max = -1;
    int maxidx;

    for(int i = 0,a; i < 9; i++)
    {
        cin >> a;
        if(a > max)
        {
            max = a;
            maxidx = i;
        }
    }
    cout << max << endl;
    cout << maxidx + 1 << endl;
}