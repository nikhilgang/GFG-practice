https://practice.geeksforgeeks.org/problems/maximize-toys/0



#include <iostream>
#include <algorithm>
using namespace std;

//#include <stdio.h>

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,amount,i;
	    cin>>n>>amount;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(i=0;i<n;i++)
	    {
	        amount=amount-a[i];
	        if(amount<=0)
	        {
	            break;
	        }
	    }
	    
	    cout<<i<<endl;
	}
	return 0;
}
