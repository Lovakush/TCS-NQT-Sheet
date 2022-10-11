#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
		long sum_of_ap(long n,long a, long d)
		{
		    return (long)(((double)n/2)*(2ll*a+(n-1)*d));
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long n, a, d;
    	cin >> n >> a >> d;
    	Solution ob;
    	long ans = ob.sum_of_ap(n, a, d);
    	cout << ans <<"\n";
    }
	return 0;
}
