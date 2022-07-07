#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	long long T;
    cin >> T;
    while(T--)
    {       
        long long n;
        cin>>n;
        unordered_map<int,int>m;
        long long count=0;
        for(int i=0;i<n;i++)
        {
            int x=0;
            cin>>x;
            m[x]++;
            count++;
        }
        bool flag = false;
        int arr[n];
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second%it->first!=0)
            {
                flag=true;
                break;
            }
        }
        if(flag==true)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
