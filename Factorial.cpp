#include<bits/stdc++.h> 
using namespace std;

class Solution{
public:
    long long int factorial(int N){

        //  Method --1 Using Iteration
        long long fact=1;
        while(N)
        {
            fact*=N;
            N--;
        }
        return fact;

        // Method -- 2 Using Recursion

        if(N==0)
            return 1;
        return N*factorial(N-1);

    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.factorial(N) << endl;
    }
    return 0; 
}