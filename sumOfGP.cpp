#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
		long sum_of_gp(long n,long a, long r)
		{
		    double sum=0;
		    if(r==1)
		        sum = n*a;
		    else if(r<1)
		        sum = (long)((a*(1-pow(r,n)))/(double)(1-r));
		    else 
		        sum = (long)((a*(pow(r,n)-1))/(r-1));
		 
		    return sum;
		}
};

int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long n, a, r;
    	cin >> n >> a >> r;
    	Solution ob;
    	long long int ans = ob.sum_of_gp(n, a, r);
    	cout << ans <<"\n";
    }
	return 0;
}
