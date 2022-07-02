#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	long long T;
    cin >> T;
    while(T--)
    {       
        long long A;
        long long B;
        long long C;
        long long D;
        cin >> A >>B>> C>> D;
        if(A!=C && B!=D)
        {
            cout << "1" << endl;
        }
        else
        cout <<"2" << endl;
    }
    return 0;
}
