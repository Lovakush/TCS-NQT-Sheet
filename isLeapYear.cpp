#include<bits/stdc++.h> 
using namespace std;



// Approach: If a year is divisible by 4 or 400 but not by 100 then it is a leap year.
class Solution{
public:
    int isLeap(int N){
       if(((N % 4 == 0) && (N % 100 != 0)) ||(N % 400 == 0))
            return 1;
        return 0;
        
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
        cout << ob.isLeap(N) << endl;
    }
    return 0; 
}
