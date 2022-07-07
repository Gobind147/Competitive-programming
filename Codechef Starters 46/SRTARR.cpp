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
        cin>>n;
        string s;
        cin>>s;
        int count =0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='1'&&s[i+1]=='0')
            {
                count++;
            }
        }
        cout<< count<< endl;
    }
    return 0;
}
