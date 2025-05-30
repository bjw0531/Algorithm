#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
    
    for(;;)
    {
        string str;
        cin >> str;
        if(str == "0")  break;
        
        if(str.size() % 2 == 1) str.erase(str.size()/2,1);
        
        string strleft = str.substr(0,str.size()/2);
        string strright = str.substr(str.size()/2,str.size()/2);
        reverse(strright.begin(), strright.end());
        
        if(strleft == strright) cout << "yes" << endl;
        else                    cout << "no" << endl;
    }
    
    
}