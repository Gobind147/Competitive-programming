#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>> T;
	while(T--)
	{
	    long long int count=0;
	    long long int n;
	    cin >> n;
	    int arr[n];
	    for(long long int i=0;i<n;i++)
	    {
	        cin>> arr[i];
	    }
	    for(long long int j=0;j<n;j++)
	    {
	        if(j>=1 && arr[j-1]>arr[j])
	        {
	            swap(arr[j-1],arr[j]);
	            if(j>=2 && arr[j-2]<arr[j-1])
	            {
	                count = count + 1;
	            }
	            else if(j>=2 && arr[j-2]>arr[j-1])
	            {
	                 count = count + 2;
	            }
	            else
	            {
	                count = count + 1;
	            }
	        }
	    }
	    if(count>=2)
	    {
	        cout << "NO" <<endl;
	    }
	    else
	    {
	        cout << "YES" << endl;
	    }
	    
	}
	
	return 0;
}
