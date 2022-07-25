#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        int arr[n];
        long long num=0;
        long long count=0;
        long long res=0;
        if(a%b==0)
        {
            cout<<-1<<endl;
        }
        else 
        {
           if(n%a==0)
           {
               int te=n/a;
               if(n%b==0)
               {
                   te++;
                   num++;
               }
               cout<<te*a<<endl;
           }
           else if(n%a!=0)
           {
               int te=n/a;
               te++;
               if((te*a)%b==0)
               {
                   te++;
                   res++;
               }
               cout<<te*a<<endl;
               count++;
           }
           }
        }
                return 0;
    
}
