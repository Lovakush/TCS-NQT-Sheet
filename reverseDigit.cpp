#include<bits/stdc++.h>
using namespace std;

// }
class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    long long int rem =0;
		    long long int reverse =0;
		    long long int num = n;
		    while(num)
		    {
		        rem = num%10;
		        reverse = (reverse*10ll)*1ll+rem;
		        num = num/10;
		    }
		    return reverse;
		}
};
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int n;
    	cin >> n;
    	Solution ob;
    	long long int  ans = ob.reverse_digit(n);
    	cout << ans <<"\n";
    }
	return 0;
}