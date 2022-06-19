#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	long long T;
    cin >> T;
    while(T--)
    {       
        int N;
        cin >>N;
        string k0 = "";
        string e2 = "";
        string l4 = "01";
        string f3 = "10";
        string e1 = "010";
        long long count =0;
        if (N == 3)
        {
            cout << e1 << endl;
        }
        else
        {
            for (int i = 1; i <= (N - 4); i++)
            e2.push_back('0');
            cout << f3 << e2 << l4 << endl;
        }
    }
    return 0;
}
