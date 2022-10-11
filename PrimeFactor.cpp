#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPrime(int N)
    {
        for (int j = 2; j * j <= N; j++)
            {
                if (N % j == 0)
                    return false;
            }
            return true;
    }
    vector<int> AllPrimeFactors(int N)
    {
        set<int> s;
        vector<int> ans;
        for (int i = 2; i*i<=N; i++)
        {
            cout<<"Hello world";
            if (i == N / i)
            {
                if (isPrime(i))
                    s.insert(i);
            }
            else if (N % i == 0)
            {
                if (isPrime(i))
                {
                     s.insert(i);
                }
                if (isPrime(N / i))
                    s.insert(N / i);
            }
        }
        for (auto it = s.begin(); it != s.end(); it++)
            ans.push_back(*it);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long int N;
        cin >> N;
        Solution ob;
        vector<int> ans = ob.AllPrimeFactors(N);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}