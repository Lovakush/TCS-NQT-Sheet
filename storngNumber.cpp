#include <bits/stdc++.h>
using namespace std;

/*
1. Strong Numbers are the numbers whose sum of factorial of digits is equal to the original number
2. Strong number is also known as Krishnamurthi number/Peterson Number.
*/

/*Input: 145
Output: 1
Explanation: 1! + 4! + 5! = 145
*/
class Solution
{
public:
public:
    long long int fact(int rem)
    {
        long long int fact = 1;
        while (rem)
        {
            fact *= rem;
            rem--;
        }
        return fact;
    }
    int is_StrongNumber(int n)
    {
        // method --1
        /*long long int sum = 0;
        int num = n;
        while (num)
        {
            sum += fact(num % 10);
            num = num / 10;
        }
        if (sum == n)
            return 1;
        return 0;
        */

        // Method--2 Using precomputation of factorial of digit 0-9 
        long long int fac[10];
        for(int i=0;i<10;i++)
            fac[i]=fact(i);
        long long int sum =0;
        int num = n;
        while(num)
        {
            sum+=fac[num%10];
            num = num/10;
        }
        if(sum==n)
            return 1;
        return 0;
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
        int ans = ob.is_StrongNumber(n);
        cout << ans << "\n";
    }
    return 0;
}