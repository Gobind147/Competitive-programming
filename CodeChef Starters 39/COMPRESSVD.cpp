#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    int count =0;
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i]==arr[i-1])
	        {
	            count = count + 1;
	        }
	        
	    }
	    cout << n-count << endl;
	}
	return 0;
}
