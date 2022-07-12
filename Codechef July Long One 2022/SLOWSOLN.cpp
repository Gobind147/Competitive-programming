#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--){
    long long max1,max2,sumN,a;
    long long b=0;
    long long h=0;
    cin>>max1>>max2>>sumN;
    long long num=0;
    a=(sumN/max2);
    if(max1>a)
    {
        if(sumN-(a*max2)>0)
        {
            b=(sumN-(a*max2));
            num++;
        }
        cout<<a*(max2*max2)+(b*b)<<endl;
    }
    else
    {
        cout<<max1*(max2* max2)<<endl;
        h++;
    }
    }
    return 0;
}
