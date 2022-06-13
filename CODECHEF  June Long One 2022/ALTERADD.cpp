#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long a;
        long long b;
        cin>> a>>b;
        long long count = b-a;
        count = count %3;
        if(count == 2)
        {
            cout<<"NO" << endl;
        }
        
        else
        {
            cout <<"YES" << endl;
        }
    }
    return 0;
}
