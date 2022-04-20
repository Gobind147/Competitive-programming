#include<bits/stdc++.h>
using namespace std;


int main() 
    {
        int T;
        cin>>T;
        while(T--)
        {
            long double M,L;
            cin>>M>>L;
            vector<double> P(M);
            for(int c=0;c<M;c++)
            {
            cin>>P[c];
            }
            sort(P.begin(),P.end());
            if(P[0]==1)
            {
            if(L>M)
            {
                cout<<L<<endl;
            }
            else
            {
                cout<<M<<endl;
            }
            }
            else if(ceil((L)/P[0])>M)
            {
            cout<<ceil((L)/P[0])<<endl;
            }
            else
            {
            cout<<M<<endl;
            }
        }
    return 0;
}
