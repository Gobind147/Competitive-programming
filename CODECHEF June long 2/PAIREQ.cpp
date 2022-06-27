#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	long long T;
    cin >> T;
    long long count;
    while(T--)
    {       
        int n;
        cin >>n;
        int count1=0;
        int arr[1111]={0};
        
        for(int i=0;i<n;i++)
        {
            int k;
            cin >>k;
            arr[k]++;
            count1++;
        }
        sort(arr,arr+1111);
        int count3 =n-arr[1110];
        cout << count3<< endl;
    }
    return 0;
}
       
