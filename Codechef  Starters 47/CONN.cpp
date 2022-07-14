#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    if(n==1||n==3||n==5)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}
