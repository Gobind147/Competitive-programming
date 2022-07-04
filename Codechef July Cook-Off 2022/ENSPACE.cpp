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
        long long y;
        cin >> n>> x>> y;
        if(n>=x+2*y)
        {
            cout<<"yes"<<endl;
        }
        else
        cout<<"no"<<endl;
    }
    return 0;
}
