#include <iostream>
#include <map>
#include <vector>

using namespace std;

map<string,string> mp;
vector<string> v;
int N,M;

void input()
{
    cin >> N >> M;
    for(int i = 0; i < N; i++)
    {
        string a,b;
        cin >> a >> b;
        mp[a] = b;
    }
    for(int i = 0; i < M; i++)
    {
        string a;
        cin >> a;
        v.push_back(mp[a]);
    }
    for(auto i:v)   cout << i << endl;
}


int main()
{
    input();
}
