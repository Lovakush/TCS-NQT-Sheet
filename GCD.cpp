//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    int gcd(int A, int B)

    // Method -- 1 Brute forcae
    {
        // int ans;
        // for(int i=1;i<=min(A,B);i++)
        // {
        //     if(A%i==0 && B%i==0)
        //         ans = i;
        // }
        // return ans;

        // Method --2 Using Euclidean’s theorem.
        // gcd(a,b) = gcd(b,a%b)

        if (B == 0)
            return A;
        gcd(B, A % B);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.gcd(A, B) << "\n";
    }
    return 0;
}