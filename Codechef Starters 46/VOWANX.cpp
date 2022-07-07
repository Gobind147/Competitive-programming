#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 
bool check(char c) 
{ 
    if (c == 'a' || c == 'e'|| c == 'i'|| c == 'o'|| c == 'u') 
        return true; 
 
    return false; 
} 
 
int main() 
{ 
    
 
    ll t; 
    cin >> t; 
    
    while (t--) 
    { 
        ll n; cin >> n;
        string s; cin >> s;
        char ans[n];
        for(int i=0;i<n;i++)
        ans[i]=s[i];
        ll j = n - 1; 
        long long count1=0;
        long long hm=0;
 
    while (j >= 0 && !check(s[j])) 
    { 
         
        j--; 
    } 
     
    j--; 
    ll st = 0,d=j,dir=0,ind=j; 
    long long arr1[n];
    while (ind >= 0) 
    { 
        string temp; 
 
        while (ind >= 0) 
        { 
            if (check(s[ind])) 
            { 
 
                temp.push_back(s[ind]); 
                ind--; 
                break; 
            } 
            else 
                temp.push_back(s[ind]); 
 
            ind--; 
            count1++;
        } 
 
        if (dir%2==1) 
        { 
            for (auto it : temp) 
            { 
                ans[d--] = it; 
            } 
        } 
        else 
        { 
            for (auto it : temp) 
            { 
                ans[st++] = it; 
                hm++;
                 
            } 
        } 
        dir++; 
    } 
    for(auto i:ans) 
        cout<<i; 
 
    cout<<endl; 
    } 
 
 
}
