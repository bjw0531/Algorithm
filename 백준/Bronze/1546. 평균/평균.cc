#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
using LL = long long;

vector<double> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    double score,M,sum;

    cin >> N;
    for(int i = N; i--;)
    {
        cin >> score;
        v.push_back(score);
    }

    M = *max_element(v.begin(), v.end());


    for(int i = 0; i < N; i++)
    {
        v[i] = v[i] / M * 100;
        sum += v[i];
    }

    cout << sum / v.size();

}
