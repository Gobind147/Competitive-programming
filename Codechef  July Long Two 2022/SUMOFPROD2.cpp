#include<bits/stdc++.h>
#define smmod 998244353
#include<vector>
using namespace std;
constexpr long long no = 1e6 + 11;
#define bt long long
bt f[no], ifs[no], fis[no];
bt C(bt x, bt y) 
{
    if (x < 0 || y > x) 
    return 0;
    return f[x] * fis[y] % smmod * fis[x - y] % smmod;
    
}

int main() {
    f[0] = ifs[0] = ifs[1] = fis[0] = fis[1] = 1;
    for (bt i = 1; i <= 1e6; ++i) f[i] = f[i - 1] * i % smmod;
    for (bt i = 2; i <= 1e6; ++i) ifs[i] = smmod - smmod / i * ifs[smmod % i] % smmod;
    for (bt i = 2; i <= 1e6; ++i) fis[i] = fis[i - 1] * ifs[i] % smmod;
    bt T;
    cin >> T;
    while(T--)
    {
    bt n,x,c0=0,c1=0,t=0;
    cin >> n;
    long long arr[n];
    long long count=0;
    long long num=0;
    for(bt i=1; i<=n; ++i) {
        cin >> x;
        c0+=x==0;
        c1+=x==1;
        num++;
        }
        count++;
        for(bt i=0; i<=c1; ++i)
        t=(t+i*C(c1+c0-i,c0))%smmod;
        cout << (((t*(c0+1)-C(c1+c0-2,c0-1))%smmod+smmod)%smmod+C(c1+c0-2,c0-1))*f[c1]%smmod*f[c0]%smmod << endl;
    }
    return 0;
    
}
