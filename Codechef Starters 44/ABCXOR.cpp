#include <bits/stdc++.h>
using namespace std;


int main(){
    
    
    int t=1;
    int count;
    cin>>t;
    while(t--){
        long long n,k;
    cin>>n>>k;
    long long r = 1;
    long long f = n;
    int count2 =0;
    while(f--){
        r=r*4;
    }
    r = r - ((1<<n)-1)*3;
    cout<<r-1<<endl;
    }
    return 0;
}
