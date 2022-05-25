#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    char a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    int count = 0;
	    for(int j=0;j<n/2;j++)
	    {
	        if(a[j]!=a[n-1-j])
	        {
	            count = count + 1;
	        }
	    }
	    count = (count +1)/2;
	    cout << count << endl;
	    
	}
	return 0;
}
