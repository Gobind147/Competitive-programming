#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	long long T;
    cin >> T;
    while(T--)
    {       
        long long a;
        long long b;
        long long c;
        cin>>a>>b>>c;
        if(a>=10&&b>=10&&c>=10&&(a+b+c)>=100)
        {
            cout<<"PASS"<<endl;
        }
        else
        {
            cout<<"FAIL"<<endl;
        }
    }
    return 0;
}
