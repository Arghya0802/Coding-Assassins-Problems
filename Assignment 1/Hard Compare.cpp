// Link:  https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z

#include<bits/stdc++.h>
using namespace std ;

void solve(double a , double b , double c , double d)
{
   // We need to cross multiply and then check if the inequality holds true or not , otherwise we might face overflow error for as (B , D) can be very large values
   double left  = log10(a) / log10(c) ;
   double right = d / b ;

   left > right ? cout << "YES" << endl : cout << "NO" << endl ;

   return ;
}

int main()
{
    double a , b , c , d ; cin >> a >> b >> c >> d ;

    solve(a , b , c , d) ;
    return 0 ;
}

// Time Complexity:  O(1) [Log() is assumed to work in O(1) Time Complexity]
// Space Complexity: O(1) 
