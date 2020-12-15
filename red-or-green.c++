https://practice.geeksforgeeks.org/problems/red-or-green/0



#include <iostream>
using namespace std;


int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    string s;
	    cin>>s;
	    int g=0,r=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='G')
	            g++;
	        else
	            r++;
	    }
	    cout<<min(g,r)<<endl;
	}
	return 0;
}
