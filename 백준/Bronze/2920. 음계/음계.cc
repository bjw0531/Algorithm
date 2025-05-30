#include <iostream>
using namespace std;


int arr[8];

int main()
{
    bool asc = true,
         desc = true;

    for(int i = 0; i < 8; i++)  cin >> arr[i];

    for(int i = 0; i < 8; i++)
    {
        if(arr[i] != i+1)   asc = false;
        if(arr[i] != 8-i)   desc = false;
    }
    if(asc == true)  cout << "ascending";
    else if(desc == true)    cout << "descending";
    else    cout << "mixed";

}
