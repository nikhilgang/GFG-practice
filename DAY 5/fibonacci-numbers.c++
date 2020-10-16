https://practice.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers/0



#include <iostream>
using namespace std;


int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long int n,first=1,second=1,res=0;
	    cin>>n;
	    for(int i=1;i<=n;i++)
	    {
	        if(i==1)
	            cout<<first<<" ";
	        else if(i==2)
	            cout<<second<<" ";
	        else
	        {
	            res=first+second;
	            cout<<res<<" ";
	            first=second;
	            second=res;
	        }
	            
	    }
	    cout<<endl;
	}
	
	return 0;
}
