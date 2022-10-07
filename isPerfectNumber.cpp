#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int isPerfectNumber(long long N) {
        if(N==1)
         return 0;
        int64_t ans = 1;
        for(int i=2;(i*1ll)*i<N;i++)
        {
            if(N%i==0)
            {
                ans += i;
                ans += N/i;   //  for finding factor 
            }
        }
        return ans == N ? 1 : 0; 
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin>>N;
        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}