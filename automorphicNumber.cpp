#include <bits/stdc++.h>
using namespace std;


// A number is called Automorphic number if and only if its square ends in the same digits as the number itself.
class Solution
{
public:
    string is_AutomorphicNumber(int n)
    {
        int square = n*n;
        while (n)
        {
            if (n % 10 != square % 10)
                return "Not Automorphic";
            n /= 10;
            square /= 10;
        }
        return "Automorphic";
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        Solution ob;
        string ans = ob.is_AutomorphicNumber(n);
        cout << ans << "\n";
    }
    return 0;
}