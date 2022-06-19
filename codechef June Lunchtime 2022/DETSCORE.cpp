#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	long long T;
    cin >> T;
    while(T--)
    {       
        long long X;
        long long N;
        cin >> X >>N;
        long long count = X/10;
        cout << count*N << endl;
    }
    return 0;
}
