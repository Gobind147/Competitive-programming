#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	long long T;
    cin >> T;
    while(T--)
    {       
        long long P;
        long long Q;
        cin >> P >> Q;
        long long k = max(P,Q);
        cout << 7-k << endl;
    }
    return 0;
}
