#include <bits/stdc++.h>
using namespace std;
#include <vector>

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k;
        vector<int> a(n),b(n);
        int max1=INT_MIN,min1=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            max1=max(max1,a[i]);
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            min1=min(min1,b[i]);
            k++;
        }
        int sum = max1+min1;
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());
        sort(b.begin(), b.end());
        bool plus = false;
        for(int i=0;i<n;i++)
        {
            if(a[i]+b[i]!=sum)
            {
                cout<<-1<<endl;
                plus=true;
                break;
            }
        }
        if (!plus) {
            for (auto &i : a) {
                cout << i << " ";
            }
            cout << endl;

            for (auto &i : b) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}
