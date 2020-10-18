https://practice.geeksforgeeks.org/problems/squares-difference/0



#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    unsigned long int a=n*(n+1)/2;
        unsigned long int b=pow(a,2);
        unsigned long int c=n*(n+1)*((2*n)+1)/6;
        cout<<b-c<<endl;
	}
	return 0;
}
