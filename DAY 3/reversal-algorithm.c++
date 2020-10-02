https://practice.geeksforgeeks.org/problems/reversal-algorithm/0/


using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,d;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    cin>>d;
	    
	    for(int j=0;j<d;j++)
	    {
	        int temp=a[0];
	        for(int i=0;i<n-1;i++)
	        {
	            a[i]=a[i+1];
	        }
	        a[n-1]=temp;
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    
	    cout<<endl;
	}
	return 0;
}
