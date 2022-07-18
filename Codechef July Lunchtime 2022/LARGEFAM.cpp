#include <bits/stdc++.h>

using namespace std;


int main(){
    
    long long t;
    cin >> t;
    while(t--){
        long long kk=1,n;
int arr[n];
if(kk!=1)
{long long jj=0;}
else{
    cin >> n;
    }
    vector <long long> x;
    long long num=0;
    long long count=0;
    long long zk = 0;
    long long num1=0;
    for(long long i = 0; i < n; i++){
        long long y;
        cin >> y;
        if(y == 0) {zk++;
        count++;}
        else x.push_back(y);
    }

    sort(x.begin(),x.end());
    for(long long i = 0; i < zk; i++) x.push_back(0);

    long long o = 0, p = 1;
    for(long long i = 0; i < n; i++){
        int f = 1;
        for(long long k = 0; k < x[i]; k++){
            if(p < n) p++;
            else{
                f = 0;
                num++;
                break;
            }
        }
        o += f;
    }
    cout << o << endl;
    }
    return 0;
}
