#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long count=0;
        long long num=0;
        string s;
        cin>>s;
        string fir="";
        string sec="";
        string third="";
        for(int i=0;i<n;i++){
            if(i%2==1)
            {
                fir=fir+s[i];
                count++;
                }
                else
                {
                    sec=sec+s[i];
                    num++;
                    }
                    }
                    sort(sec.begin(),sec.end());
                    sort(fir.begin(),fir.end());
                    if(fir==sec)
                    cout<<"YES"<<endl;
                    else
                    
                    cout<<"NO"<<endl;
                    }
                    return 0;
    
}
