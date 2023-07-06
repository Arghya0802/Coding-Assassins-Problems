// LeetCode:  https://leetcode.com/problems/merge-sorted-array/description/

class Solution {
    public void merge(int[] A , int m, int[] B , int n) 
    {
        int i = m - 1 ; int j = n - 1 ; 
        int k = m + n - 1 ;

        while(i >= 0 && j >= 0)
        {
            if(A[i] > B[j])
            {
                A[k] = A[i] ;
                k-- ; i-- ;
            }

            else
            {
                A[k] = B[j] ;
                k-- ; j-- ;
            }
        }    

        for(; i >= 0 ; i--)  A[k--] = A[i] ;

        for(; j >= 0 ; j--)  A[k--] = B[j] ;

        return ;
    }
}

// Time Complexity:  O(N)
// Space Complexity: O(1)
