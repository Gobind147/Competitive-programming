#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>A(n);
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            
        }
        long long min1=A[0];
        long long max2=A[0];
        long long min2=A[0];
        long long max1=A[0];
        long long count1=0;
        long long count2 =0;
        for(int i=1;i<n;i++){
            if( A[i]<max2 && A[i]>min1)
            {
                count1=1;
                break;
                
            }
            min1=min(min1,A[i]);
            max2=max(max2,A[i]);
        }
        if(count1!=1)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
    return 0;
}
