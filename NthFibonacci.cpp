// Given a positive integer n, find the nth fibonacci number. Since the answer can be very large, return the answer modulo 1000000007.

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long int nthFibonacci(long long int n){

        // Method --1 Using Recursion 

       /* if(n<=1)
            return n;
        else
        return nthFibonacci(n-1)+nthFibonacci(n-2);

        */
        
        //Method --2 Using Array 
        long long int fib[n+1];
        fib[0] = 0;
        fib[1] =1;
        for(long long int i=2;i<=n;i++)
        {
            fib[i] = (fib[i-1]+fib[i-2])%1000000007;
            cout<<fib[i]<<" ";
        }
        return fib[n];

       // Method --3  Space optimized
       /* Intuition: For calculating the ith term we only need the last and second last term i.e (i-1)th and (i-2)th term, so we don’t need to maintain the whole array.

        Approach:

        Take two variables last and secondLast for storing (i-1)th and (i-2)th term.
        Now iterate from 2 to n and calculate ith term. ith term is last + secondLast term.
        Then update secondLast term to last term and last term to ith term as we iterate.
        */
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
