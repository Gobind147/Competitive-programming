#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        long long num=0;
        long long count =0;
        vector<int>org;
        vector<int>sor;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            org.push_back(a);
            count++;
        }
        sor=org;
        sort(sor.begin(),sor.end());
        int i=0;
        int j=0;
        vector<int>rem;
        while(i<n && j<n)
        {
            if(org[i]==sor[j])
            {
                i++;
                j++;
                num++;
            }
            else
            {
                rem.push_back(org[i]);
                i++;
            }
        }
        vector<int>sortm=rem;
        sort(sortm.begin(),sortm.end());
        if(sortm!=rem)
        {
            cout<<"NO"<<endl;
        }
        else
        cout<<"YES"<<endl;
    }
    return 0;
}

