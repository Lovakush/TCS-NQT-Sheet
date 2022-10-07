#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
		long sum_of_gp(long n,long a, long r)
		{
		    float sum=0;
		    if(r<1)
		        sum = a*(1-pow(r,n))/(1-r);
		    else 
		        sum = a*(pow(r,n)-1)/(r-1);
                cout <<(pow(r,n)-1)<<endl;
		 
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
