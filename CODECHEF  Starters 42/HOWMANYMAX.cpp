#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string str;
        cin>>str;
        if(n==1){
            cout<< "1" << endl;
            continue;
        }
        else if(n==2)
        {
            cout<< "1" << endl;
            continue;
        }
        int count1=0;
        int count2=0;
        for(int i=0;i<n;i++){
            if(str[i-2]==48 && str[i-1]==49){
                count2++;
            }
        }
        if(str[0]==49 ){
            count2++;
        }
        if(str[n-2]==48 ){
            count2++;
        }
        cout<< count2 << endl;
    }
}
