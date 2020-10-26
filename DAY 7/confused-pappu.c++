https://practice.geeksforgeeks.org/problems/confused-pappu/0



#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i=1,newno=0,rem=0;
	    cin>>n;
	    int n1=n;
	    
	    while(n!=0)
	    {
	        rem=n%10;
	        if(rem==6)
	        {
	            rem=rem+3;
	        }
	        newno=newno+rem*i;
	        i=i*10;
	        n=n/10;
	    }
	    cout<<newno-n1;
	    cout<<endl;
	}
	return 0;
}
