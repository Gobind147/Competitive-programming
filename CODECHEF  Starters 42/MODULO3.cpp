#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--)
	{
	    long long a,b;
	    cin >> a >> b;
	    if(a%3==0 || b%3==0)
	    {
	        cout << "0" << endl;
	        continue;
	    }
	    long long count =0;
	    while(a%3!=0 && b%3!=0)
	    {
	        long long c = abs(a-b);
	        if(b>=a)
	        {
	            b=c;
	        }
	        else
	        {
	            a=c;
	        }
	        count++;
	    }
	    cout << count << endl;
	}
	return 0;
}
	    
