https://practice.geeksforgeeks.org/problems/find-unique-element/0

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    int h[10000]={0};
	    
	    for(int i=0;i<n;i++)
	    {
	        h[a[i]]++;
	    }
	    for(int i=1;i<=10000;i++)
	    {
	        if(h[i]!=k && h[i]!=0)
	        {
	            cout<<i;
	            break;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}


