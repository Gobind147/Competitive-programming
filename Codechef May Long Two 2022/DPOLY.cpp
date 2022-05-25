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
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    int count=0;
	    for(int i=n-1;i>-1;i--)
	    {
	        if(arr[i]!=0)
	        {
	            count = i;
	            break;
	        }
	    }
	    cout << count << endl;
	    
	}
	return 0;
}
