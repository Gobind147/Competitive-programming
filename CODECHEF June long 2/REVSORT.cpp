#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>> t;
    while(t--)
    {
        long long n;
        long long x;
        cin>> n>>x;
        long long arr[n];
        int arr1[n];
        long long count=1;
        long long count1 =0;
        for(int i=0;i<n;i++)
        {
            cin>> arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i+1]<arr[i])
            {
                if((arr[i]+arr[i+1])>x)
                {
                    count=0;
                    count1++;
                    break;
                }
                else
                {
                    int temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
        }
        if(count!=0)
        {
            cout<<"YES" <<endl;
        }else{
            cout<<"NO" <<endl;
        }
 }
 return 0;
}
