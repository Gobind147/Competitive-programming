#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int arr[n];
        long long arr1[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if(arr[0]==1)
        {
            cout<<"CHEF"<<endl;
            continue;
        }
        long long res=0;
        long long count=0;
        for(int i=0;i<n;i++)
        {
            res +=arr[i]-2;
            count++;
        }
        if(res%2!=0)
        {
            cout<<"CHEF"<<endl;
        }
        else
        {
            cout<<"CHEFINA"<<endl;
        }
    }
    return 0;
    
    }
