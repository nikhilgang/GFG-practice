https://practice.geeksforgeeks.org/problems/pattern-jumping/0s


#include <cmath>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int x,flag=0;
	    cin>>x;
	    if(x==1)
	    {
	        flag=1;
	    }
	    else
	    {
	    for(int i=1;i<=14;i++)
	    {
	    
    	    if(log2(x)==i)
    	    {
    	        flag=1;
    	        break;
    	    }
	    }
	    }
	    if(flag==1)
	        cout<<"True";
	    else
	        cout<<"False";
	        
	   cout<<endl;
	}
	return 0;
}
