#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
    cin >> n;
    int arr[n];
    int num=0;
    long long count =0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        num+=arr[i];
        count++;
    }
    if(num%2==0)
        cout << "YES"<< endl;
    else
        cout << "NO"<< endl;
    }
}
