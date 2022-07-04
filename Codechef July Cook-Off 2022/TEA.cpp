#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	long long T;
    cin >> T;
    while(T--)
    {       
        long long x;
        long long y;
        long long z;
        cin>> x>>y>>z;
        long long count =0;
        if(x%y==0)
        
        count = x/y;
        else
        count = x/y+1;
        cout<<count*z<<endl;
    }
    return 0;
}
