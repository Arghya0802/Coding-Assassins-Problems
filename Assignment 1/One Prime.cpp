// Link:  https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H

#include<bits/stdc++.h>
using namespace std ;

void solve(int n)
{
    bool isPrime = true ;

    for(int i = 2 ; i * i <= n ; i++)
    {
        if(n % i == 0)
        {
            isPrime = false ;  break;
        }
    }

    isPrime == true ? cout << "YES" << endl : cout << "NO" << endl ;
}

int main() 
{
    int n ;  cin >> n ;
    
    solve(n) ;

    return 0 ;
}

// Time Complexity:  O(Sqrt(N))
// Space Complexity: O(1)
