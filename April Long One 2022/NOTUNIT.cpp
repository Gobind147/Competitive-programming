#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ll ts;
	cin >> ts;
	for(int je =0; je < ts; je++)
	{
	    int h,i;
	    cin>>h>>i;
	    if(h%2==0)
	    {
	         if(i-h>=2)
	         {
	             cout << h << ' ' << h+2 << endl;
	         }
	         else
	         {
	             cout << -1 << endl;
	         }
	    }
	    else
	    {
	        if(i-h>=3)
	        {
	            if(h%3==0)
	            {
	                cout << h << ' '<< h+3 << endl;
	            }
	            else
	            {
	                cout << h+1 << ' ' << h+3 << endl;
	            }
	        }
	        else
	        {
	            cout << -1 << endl;
	        }
	    }
	}
	return 0;
}
