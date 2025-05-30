#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;


    for(int i = 0; i < t; i++)
    {
        int str_cnt;
        cin >> str_cnt;

        unordered_map<string, int> m1;
        for(int j = 0; j < str_cnt; j++)
        {
            string s1;
            cin >> s1;
            m1.insert({s1, j});
        }

        unordered_map<string, int> m2;
        for(int j = 0; j < str_cnt; j++)
        {
            string s2;
            cin >> s2;
            m2.insert({s2, j});
        }

        int arr[10000] = {0, };
        unordered_map<string, int>::iterator it;
        unordered_map<string, int>::iterator it2;
        for(it = m1.begin(); it != m1.end(); it++)
        {
            it2 = m2.find(it->first);
            arr[it->second] = it2->second;
        }

        vector<string> v;
        string a;
        for(int j = 0; j < str_cnt; j++)
        {
            cin >> a;
            v.push_back(a);
        }

        for(int j = 0; j < str_cnt; j++)
        {
            cout << v[arr[j]] << ' ';
        }
        cout << endl;

    }
}
