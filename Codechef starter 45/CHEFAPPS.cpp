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
        long long S;
        long long Z;
        long long Y;
        cin >> S >> X >>Y>> Z;
        if(S>=X+Y+Z)
        {
            cout << "0"<<endl; 
        }
        else if(S>=Y+Z || S>=X+Z)
        {
            cout << "1" <<endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }
    return 0;
}
