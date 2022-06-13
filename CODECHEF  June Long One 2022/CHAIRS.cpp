#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x;
        int y;
        cin>> x>> y;
        if(x>=y)
        {
        cout << x-y << endl;
        }
        else
        cout<< "0" << endl;
    }
    return 0;
}
