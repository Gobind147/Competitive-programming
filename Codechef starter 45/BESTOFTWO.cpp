#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	
	long long T;
    cin >> T;
    while(T--)
    {       
        long long X;
        long long Y;
        cin >> X >>Y;
        if(X>=Y)
        {
            cout << X << endl;
        }
        else
            cout << Y << endl;
    }
    return 0;
}
