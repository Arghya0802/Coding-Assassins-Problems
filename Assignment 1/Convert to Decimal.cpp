// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X

#include<bits/stdc++.h>
using namespace std ;
using ll = long long int ;

void solve(int t)
{
    while(t--)
    {
        int n ; cin >> n ;

        ll base = 1 ;
        ll ans = 0 ;

        while(n != 0)
        {
            if(n % 2 == 1)
            {
                ans += base * 1 ;
                base *= 2 ;
            }

            n /= 2 ;
        }

        cout << ans << endl ;
    }
}

int main()
{
    int t ;
    cin >> t ;

    solve(t) ;
    return 0 ;
}

// Time Complexity:  O(Log N) [Base 2]
// Space Complexity: O(1)
