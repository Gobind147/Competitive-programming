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
        cin >> n;
        
        string s ;
        char c1='A',c2='T', c3='C', c4='G';
        
            cin >>s;
       
        for(int i=0;i<n;i++)
        {
            if(s[i]==c1)
            {
                s[i]=c2;
            }
            else if(s[i]==c2)
            {
                s[i]=c1;
            }
            else if(s[i]==c3)
            {
                s[i]=c4;
            }
            else if (s[i]==c4)
            {
                s[i]=c3;
            }
        }
        cout << s<< endl;
    }
    return 0;
}
