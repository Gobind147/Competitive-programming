#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>> T;
	while(T-->0)
	{
	    int N;
	    cin>> N;
	    int arr[N];
	    int count1=0;
	    int count2=0;
	    for(int i=0;i<N;i++)
	    {
	        cin>> arr[i];
	    }
	    for(int j=0;j<N;j++)
	    {
	        if(arr[j]==-1)
	        {
	            count1=count1+1;
	        }
	        else
	        {
	            count2=count2+1;
	        }
	    }
	    if(abs(count2-count1)>2)
	    {
	        cout<<"NO"<<endl;
	    }
	    else if(abs(count2-count1)<2)
	    {
	        cout<<"YES"<<endl;
	    }
	    else if(abs(count2-count1)==2 && count1%2 )
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
	    
	    
	    
	    
	    
	    
	    
	    
