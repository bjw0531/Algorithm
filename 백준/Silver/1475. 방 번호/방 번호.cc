#include <bits/stdc++.h>
#define long long ll
using namespace std;

int nums[10];

int main()
{
    string s;
    cin >> s;

    for(char c:s)
    {
        if(c == '9')
        {
            nums[6]++;
            continue;
        }
        nums[c - '0']++;
    }
    if(nums[6] % 2 == 0)    nums[6] /= 2;
    else                    nums[6] = nums[6] / 2 + 1;

    cout << *max_element(nums, nums+10);
}
