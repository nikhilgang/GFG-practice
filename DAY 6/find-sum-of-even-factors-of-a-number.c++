https://practice.geeksforgeeks.org/problems/find-sum-of-even-factors-of-a-number/0



int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    for(int i=2;i<=n;i=i+2)
	    {
	        if(n%i==0)
	        {
	            sum=sum+i;
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}

