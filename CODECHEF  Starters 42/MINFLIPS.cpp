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
	    for(int i=0; i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    int count1 = 0;
	    int count2 = 0;
	    for(int i=0; i<n;i++)
	    {
	        if(arr[i]==1)
	        {
	            count1++;
	        }
	        else
	        count2++;
	    }
	    if(n%2!=0)
	    {
	        cout << "-1" << endl;
	    }
	    else
	    {
	        cout << abs(n/2-min(count2,count1)) << endl;
	    }
	}
	return 0;
}
