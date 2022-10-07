#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
public:
    int palindromicNumbers(int N)
    {
        int count =0;
        for(int i=1;i<N;i++)
        {
            int rem=0;
            int reverse =0;
            int num = i;
            while(num!=0)
            {
                rem = num%10;
                reverse = reverse*10+rem;
                num = num/10;
                cout<<rem<<endl;
            }
            if(i==reverse)
            count++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
      
        Solution ob;
        int ans  = ob.palindromicNumbers(N);
        cout<<ans<<endl;
    }
    return 0;
}