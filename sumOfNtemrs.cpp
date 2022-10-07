// Given and integer N.Calculate the sum of series 13 + 23 + 33 + 43 + … till N-th term.

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long sumOfSeries(long long N) {
        int ans = (N*(N+1)/2);
        return (ans*1ll)*ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}