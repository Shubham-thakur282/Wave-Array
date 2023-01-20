
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>a){
        
        // Your code here
        if(n%2==0)
        {    
            for(int i=0;i<n;i+=2)
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
            for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        }
        else
        {
            for(int i=0;i<n-1;i+=2)
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp; 
            }
            for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    cin>>t; //Input testcases
    while(t--) //While testcases exist
    {
        cin>>n; //input size of array
        vector<int> a(n); //declare vector of size n
        for(int i=0;i<n;i++)
            cin>>a[i]; //input elements of array
        Solution ob;
        ob.convertToWave(n, a);    
        cout<<endl;
    }
}