#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	long long T;
    cin >> T;
    while(T--)
    {       
        long long p;
        cin >> p;
        int count1 = p/100;
        int count2 = p-count1*100;
        if(count1+count2>10)
        {
            cout << -1 << endl;
        }
        else
        cout << count1+count2 << endl;
    }
    return 0;
}
        
