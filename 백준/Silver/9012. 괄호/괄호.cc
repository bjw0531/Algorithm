#include <iostream>
#include <string>
using namespace std;

string solve(string& str)
{
    int opened = 0;

    for(auto ch : str)
    {
        if(ch == '(')
            opened++;
        else if(ch == ')')
            opened--;
        if(opened < 0)
            return "NO";
    }
    if(opened == 0)
        return "YES";
    return "NO";
}

int main()
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++)
    {
        string str;
        cin >> str;
        cout << solve(str) << endl;
    }
}
