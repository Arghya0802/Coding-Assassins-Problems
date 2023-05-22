// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J

#include<bits/stdc++.h>
using namespace std ;

void solve(int n)
{
    vector<int> primes(n + 1 , 1) ;

    primes[0] = 0 , primes[1] = 0 ;

    for(int i = 2 ; i * i <= n ; i++)
    {
        if(primes[i] == 0)  continue;

        for(int j = i * i ; j <= n ; j += i)  primes[j] = 0 ;
    }

    for(int i = 2 ; i <= n ; i++)  
    {
        if(primes[i] == 1)  cout << i << " " ;
    }

    cout << endl ;
}

int main() 
{
    int n ;  cin >> n ;
    solve(n) ;
    return 0 ;
}

// Time Complexity:  O(N Log(Log N)) 
// Space Complexity: O(N)
