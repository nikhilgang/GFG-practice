https://practice.geeksforgeeks.org/problems/difference-between-highest-and-lowest-occurrence/0/




#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    { 
        cin>>arr[i];
    }
    int h[100001]={0};
    for(int i=0;i<n;i++)
    { 
        h[arr[i]]++;
    }
    int max=0;
    for(int i=1;i<=100000;i++)
    {
        if(h[i]>max)
        max=h[i];
    }
    int min=100000;
    for(int i=1;i<=100000;i++)
    {
    if(h[i]<min && h[i]>0)
        min=h[i];
    }
    cout<<max-min<<endl;
    }
return 0; 
    
}
