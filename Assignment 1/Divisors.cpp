// Link:  https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K

#include<bits/stdc++.h>
using namespace std ;

void solve(int n)
{
    for(int i = 1 ; i <= n ; i++)
    {
        if(n % i == 0)  cout << i << endl ;
    }
    
}

int main()
{
    int n ; cin >> n ;

    solve(n) ;

    return 0 ;
}

// Time Complexity:  O(N)
// Space Complexity: O(1)
