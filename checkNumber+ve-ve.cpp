#include<bits/stdc++.h>
using namespace std;

// Approach:

// Right Shift n by 31.
// If we get 0 then n is positive.
// If we get -1 then n is negative.

// The signed right shift operator ‘>>’ uses the sign bit to fill the trailing positions.


 void check(int n) {
   if (n >> 31 == 0) {
      cout<<n<<" is positive."<<endl;
    } else {
      cout<<n<<" is negative."<<endl;
    }
  }
  int main() {

    int n = 5;
    check(n);
    n = -6;
    check(n);
  }