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
        long long count = P+Q;
        long long count1 = count%4+1;
        if(count1==1 || count1==2)
        {
            cout<< "Alice" << endl;
        }
        else
        {
            cout<< "Bob" << endl;
        }
    }
    return 0;
}
