#include <iostream>
using namespace std;
int main() {
    
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin >>n;
        int arr[n];
        long long c =0;
        long long num=0;
        long long ans =0;
        for(int i =0;i<n;i++){
            int p;
            cin>>p;
            if(p==1)c++;
            else{
                ans+=(c*(c+1)/2);
                num++;
                
                c=0;
                }
                }
                ans+=(c*(c+1)/2);
                cout<<ans<<endl;
                }
                return 0;
    
}
