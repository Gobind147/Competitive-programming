#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
     cin>>T;
     while(T>0)
     {
         long N,X,Y,Z;
         cin>>N>>X>>Y;
         int L = Y / 3;
        int Xl, L1;

        if (X >= L) {
            Xl = X - L;
            L1 = L;
            Z++;
        } else {
            Xl = 0;
            L1 = X;
        }

        int L2 = Xl / 2;

        if (L2 + L1 >= N) {
            cout << "YES" << endl;
        } else 
            cout << "NO" << endl;
         T--;
     }
}
