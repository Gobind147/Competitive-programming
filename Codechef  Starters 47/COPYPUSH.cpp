#include<bits/stdc++.h>
using namespace std;
bool solve( string sts){
    long long num=0;
    if(sts.size() == 0 || sts.size() == 1) return true;
    if(sts.size()%2 != 0){
        return solve(sts.substr(0,sts.size() -1));
        num++;
    }
    long long ans1=0;
    if(sts.substr(0,sts.size()/2) == sts.substr(sts.size()/2,sts.size())){
        return solve(sts.substr(0,sts.size()/2));
        ans1++;
    }
    return false;
}

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int arr[n];
        string sts;
        cin >> sts;
        long long count=0;
        if(n == 0 || n== 1){
            cout << "YES" << endl;
            continue;
            count++;
        }
        bool ott = solve(sts);
        if(ott) 
        cout << "YES" << endl;
        else 
        cout << "NO" << endl;
    }
    return 0;
}
