#include <iostream>
#include <string>
using namespace std;

int count[10];

int main()
{
    int num = 1;
    for(int i = 3; i--;)
    {
        int tmp;
        cin >> tmp;
        num *= tmp;
    }
    string str = to_string(num);
    for(int i = 0; str[i]; i++)
    {
        count[str[i] - '0']++;
    }
    
    for(int i = 0; i <= 9; i++)    cout << count[i] << endl;
}