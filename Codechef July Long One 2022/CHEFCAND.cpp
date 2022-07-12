#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	long long T;
    cin >> T;
    while(T--)
    {       
        long long n;
        long long x;
        cin>>n>>x;
        if(x>=n)
        {
            cout<<"0"<<endl;
        }
        else
        {
            int count = n-x;
            if(count%4==0)
            {
                cout<<count/4<<endl;
            }
            else
            cout<<count/4+1<<endl;
        }
    }
    return 0;
}
