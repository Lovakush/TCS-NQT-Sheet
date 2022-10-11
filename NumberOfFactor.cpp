#include<bits/stdc++.h> 
using namespace std;
class Solution{
public:
    int countFactors(int N){
        int count =0;
        for(int i=1;i*i<=N;i++)
        {

            // if (N%i==0) then 2 factor one factor is i and another factor is N/i 

            /*Intuition: When we thoroughly see the factors of a natural number, they always lie in pairs. For if ‘n’ is divisible by any number ‘i’ then it will also be divisible by its quotient of n/i. */
            if(i==sqrt(N))   // special  case when i = N/i so same factor count only once
                count++;
            else if(N%i==0)
              count+=2;
        }
        return count;
    }
};
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.countFactors(N) << endl;
    }
    return 0; 
}