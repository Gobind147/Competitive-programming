
//Non Adjacent Flips Problem Code: NONADJFLIP

#include<bits/stdc++.h>
using namespace std;
void ck()
{
int K;
cin>>K;
string s;
cin>>s;
bool fg=false;
for(int j=1;j<K;j++)
{
 if(s[j]!='0' && s[j-1]!='0')
 {
  cout<<2<<endl;
  fg=true;
  return;
 }
}


if(!fg)
{
sort(s.begin(),s.end());
if(s[K-1]!='1')
{
 cout<<0<<'\n';
 return;
}

cout<<1<<endl;
}

else return;
}



int main()
{
 int T;
 cin>>T;
 while(T--)
 ck();
}

