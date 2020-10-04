https://practice.geeksforgeeks.org/problems/finding-number/0/



using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int x;
	    cin>>x;
	    int flag=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==x)
	        {
	            flag=1;
	            cout<<i;
	            break;
	        }
	    }
	    if(flag==0)
	        cout<<-1;
	   cout<<endl;
	}
	return 0;
}
