#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	long long T;
    cin >> T;
    while(T--)
    {       
        int X;
        int Y;
        cin >> X >>Y;
        long long count1 = X/10 + min(1,X%10);
        long long count2 = Y/10 + min(1,Y%10);
        cout << abs(count2-count1) << endl;
    }
    return 0;
}
