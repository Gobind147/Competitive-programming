#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t--)
	{
	    long long k;
	    cin >> k;
	    if(k%4==1)
	    {
	        cout<< k << endl;
	    }
	    else if(k%4 ==0)
	    {
	        cout << k + 3 << endl;
	    }
	    else if(k%4==3 || k%4==2)
	    {
	         cout << "3" << endl;   
	    }
	}
	return 0;
}
