https://practice.geeksforgeeks.org/problems/pangram-checking-1587115620/1


#include<bits/stdc++.h>
using namespace std;


bool checkPangram (string &str)
{
    // your code here
    int h[26]={0};
    for(int i=0;i<str.length();i++)
    {
       if(str[i]>='A' && str[i]<='Z')
       {
           str[i]=str[i]+32;
       }
    }
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a' && str[i]<='z')
            h[str[i]-'a']++;
    }
    int flag=0;
    for(int i=0;i<26;i++)
    {
        if(h[i]==0)
        {
        flag=1;
        break;
        }
    }
    if(flag==1)
        return 0;
    else
        return 1;
}


int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string str;
        getline(cin, str);
        
        if (checkPangram(str) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}
