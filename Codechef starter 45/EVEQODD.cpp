#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {

long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
vector<long long> vec(2*n);
long long oo=0;
long long eo=0;
long long count=0;
long long num =0;
for(long long i=0;i<2*n;i++){
    cin>>vec[i];
    if(vec[i]%2){
        oo++;
    }else{
        eo++;
    }
}
if(oo==eo){
    cout<<0<<endl;
   continue;
}
if(oo>eo){
    long long extra=abs(oo-(n));
    cout<<extra<<endl;
}else{
    vector<long long> ct;
    for(long long i=0;i<2*n;i++){
        if(vec[i]%2==0){
            long long val=0;
            while(vec[i]%2==0){
                val++;
                vec[i]/=2;
                num++;
            }
            ct.push_back(val);
        }
    }
    sort(ct.begin(),ct.end());
    long long ans=0;
    long long extra=abs((n)-eo);
    for(long long i=0;i<ct.size();i++){
        if(extra>0){
            ans+=ct[i];
            extra--;
            count++;
        }else{
            break;
        }
        
    }
    cout<<ans<<endl;
    
}
}
return 0;
}
