#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        float n;
        float x;
        cin>> n >>x;
        int count = ceil(n/6);
        cout << count*x << endl;
    }
    return 0;
}
