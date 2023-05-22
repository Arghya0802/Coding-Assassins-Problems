// Link: https://codeforces.com/problemset/problem/1512/A

#include<bits/stdc++.h>
using namespace std ;

void solve(int t)
{
    while(t--)
    {
        int n ; cin >> n ;
        int arr[n] ;

        for(int i = 0 ; i < n ; i++)  cin >> arr[i] ;

        int freq[101] = {0} ;

        for(int i = 0 ; i < n ; i++)  freq[arr[i]] += 1 ;

        int ans = -1 ;

        for(int i = 0 ; i < n ; i++)
        {
            if(freq[arr[i]] == 1)  ans = i + 1 ;
        }

        cout << ans << endl ;
    }
}

int main()
{
    int t ;  cin >> t ;

    solve(t) ;
    return 0 ;
}

// Time Complexity:  O(N)
// Space Complexity: O(1) [As we are using only a frequency array of size 101]
