#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        int rem=0;
        int reverse =0;
        int num = n;
        while(num!=0)
        {
            rem = num %10;
            reverse = reverse+rem*rem*rem;
            num = num/10;
        }
        if(reverse==n)return "Yes";
        return "NO";
    }

// Method -- 2 
//       string armstrongNumber(int n){
//         int result=0,k=n;
//         while(n)
//         {
//             result += pow(n%10,3);
//             n = n/10;
//         }
//         return result==k?"Yes":"No";
//     }
// };

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}