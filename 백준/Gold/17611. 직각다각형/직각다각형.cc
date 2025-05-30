#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

int N;
vector<pair<int,int>> coord;
multimap<int,int> mx,my;

int main()
{
    cin >> N;
    for(int i = 0,x,y; i < N; i++)
    {
        cin >> x >> y;
        coord.push_back({x,y});
    }
    coord.push_back(coord.front());

    for(int i = 0,first,second; i < N; i++)
    {
        if(coord[i].first == coord[i+1].first)
        {
            first = min(coord[i].second, coord[i+1].second);
            second = max(coord[i].second, coord[i+1].second);
            my.insert({first,1});
            my.insert({second,-1});
        }
        else if(coord[i].second == coord[i+1].second)
        {
            first = min(coord[i].first, coord[i+1].first);
            second = max(coord[i].first, coord[i+1].first);
            mx.insert({first,1});
            mx.insert({second,-1});
        }
    }

    int xmax = 0;
    int cnt = 0;
    for(auto i = mx.begin(); i != mx.end(); i++)
    {
        auto j = i; j++;
        cnt += i->second;
        if(j->first != i->first)  xmax = max(xmax, cnt);
    }

    int ymax = 0;
    cnt = 0;
    for(auto i = my.begin(); i != my.end(); i++)
    {
        auto j = i; j++;
        cnt += i->second;
        if(j->first != i->first)  ymax = max(ymax, cnt);
    }
    cout << max(ymax,xmax);
}
