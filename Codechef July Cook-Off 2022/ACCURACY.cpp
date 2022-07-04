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
        cin>>x;
        long long count=0;
        if(x%3==0)
        {
            cout<< "0" << endl;
        }
        else
        {
        count = x/3 +1;
        long long k = (count*3)-x;
        
        cout << k << endl;
        }
    }
    return 0;
}
