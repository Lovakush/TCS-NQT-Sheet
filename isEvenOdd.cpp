#include<bits/stdc++.h> 
using namespace std; 

class Solution{   
public:
    string oddEven(int N){

        // Using the bitwise operator

        // Even Number: The last bit of even number is always 0.
        // Odd Number: Last bit of the odd number is always 1.
        if((N&1)==0)
        return "even";
        return "odd";
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.oddEven(N) << endl;
    }
    return 0; 
} 