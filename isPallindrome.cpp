#include<bits/stdc++.h> 
using namespace std;

class Solution{
public:
    int isPallindrome(long long int N){
        int rem = 0;
        string a = "";
        while(N!=0)
        {
            rem = N %2;
            cout<<rem<<endl;
            N = N/2;
            a+=to_string(rem);
        }   
        string b = a;
        cout<<b<<" "<<a<<endl;
        reverse(a.begin(),a.end());
        return a==b?1:0;
    }
};
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.isPallindrome(N) << endl;
    }
    return 0; 
}