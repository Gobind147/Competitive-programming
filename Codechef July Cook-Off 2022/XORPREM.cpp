#include<bits/stdc++.h>
using namespace std;
int main(){
    
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long count =0;
        if(n<=3){
            cout<<-1<<endl;
            continue;
            count++;
        }
        long long k=0;
        for(int i=n;i>=5;i--)
        cout<<i<<" ";
        k++;
        cout<<1<<" "<<2<<" "<<4<<" "<<3<<endl;
    }
}
