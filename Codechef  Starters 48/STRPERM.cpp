#include<bits/stdc++.h>
using namespace std;

void solution()
{
    
    long long a,b;
    cin>>a>>b;
    int o[a];
    int arr[b];
    set<pair<int,int>,greater<pair<int,int>>> p,q;
    vector<int> py(a+1,a);
    long long c,d;
    long long num=0;;
    long long count=0;
    for(int i=0;i<b;i++)
    {
        cin>>c>>d;
        if(py[c]>d)
        {
            py[c]=d;
            }
            }
            for(int i=1;i<=a;i++)
            {
                p.insert({py[i],i});
                long long u=-1;
                }
                for(int i=a-1;i>=0;i--)
                {
                    while(!p.empty()&&p.begin()->first==i+1)
                    {
                        int v=p.begin()->second;
                        p.erase(p.begin());
                        q.insert({v,py[v]});
                        }
                        if(q.empty())
                        {
                            cout<<-1<<endl;
                            num++;
                            return;
                            }
                            int v=q.begin()->first;
                            q.erase(q.begin());
                            o[i]=v;
                            }
                            for(int i=0;i<a;i++)
                            {
                                cout<<o[i]<<" ";
                                count++;
                                }
                                cout<<endl;}
                                int main()
                                {
                                    
                                    int t;
                                    cin>>t;
                                    while(t--)
                                    {
                                        solution();
                                        }
                                        return 0;
                                    
                                }
