https://practice.geeksforgeeks.org/problems/power-of-2/0


#include<cmath>
using namespace std;

//#include <stdio.h>

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    double x;
	    cin>>n;
	    if(n==0)
	        cout<<"NO";
	    else
	    {
	    x=log2(n);
	    if(x==floor(x))
	        cout<<"YES";
	    else
	        cout<<"NO";
	       //cout<<x<<" "<<ceil(x);
	    }
	   
	   cout<<endl;
	}
	return 0;
}
