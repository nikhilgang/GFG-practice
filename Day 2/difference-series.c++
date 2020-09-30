https://practice.geeksforgeeks.org/problems/difference-series/0


int fun(int n)
{
    if(n==1)
     return 3;
    else
    {
     int b=fun(n-1);
     return b+7+4*(n-2);
    }
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int num=fun(n);
	    cout<<num<<endl;
	}
	return 0;
}
