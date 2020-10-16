https://practice.geeksforgeeks.org/problems/the-modified-string-1587115621/1/




int modified (string a){
    // Your code here
    int n = a.length();
    int count = 0;
    for(int i=0;i<n-2;i++)
    { 
       if(a[i]==a[i+1] && a[i]==a[i+2])
       {
           count++;
           i++;
        }
    }
    return count;
    
}
