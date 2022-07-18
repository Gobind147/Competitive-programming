#include <bits/stdc++.h>
using namespace std;
int main() {
  long long t;
  cin>>t;
  while(t--)
  {
long long n;
cin>>n;
string a,b;
cin>>a>>b;
long long count=0;
long long num=0;
int arr[n];
size_t found=a.find('1');
if(n==2&&a=="00"&&b=="11")
{
    cout<<"NO"<<endl;
    count++;
}
else
{
    bool kl=false;
    for(int i=1;i<n;i++)
    {
        if(b[i]==b[i-1])
        {
            kl=true;
            break;
        }
    }
    if(kl)
    {
        if(a==b)
        {
            cout<<"YES"<<endl;
            num++;
        }
        else if(found==string::npos)
        {
            cout<<"NO"<<endl;
        }
        else
        cout<<"YES"<<endl;
    }
    else
    {
        if(a!=b)
        {
            cout<<"NO"<<endl;
        }
        else
        cout<<"YES"<<endl;
    }
}
  }
  return 0;
}
