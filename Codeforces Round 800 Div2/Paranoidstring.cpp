#include <bits/stdc++.h>
using namespace std;
 
int main(){
     long long t;
     cin >> t;
 
 while(t--){
int n;
cin>>n;
    string s;
    cin>>s;
    long long count=0;
    for(long long i=1;i<n;i++)
    {
        if(s[i-1]!=s[i])
        {
            count=count+i;
            
        }
    }
    count=count+n;
    cout<<count<<endl;
    }
    
 
return 0;
}
