// Link:  https://leetcode.com/problems/minimum-size-subarray-sum/description/

class Solution {
    public int minSubArrayLen(int target, int[] nums) 
    {
        int n = nums.length ;  int end = 0 ; int sum = 0 ;
        
        int minCnt = Integer.MAX_VALUE ;  

        for(int start = 0 ; start < n ; start++)
        {
            sum += nums[start] ;

            while(end <= start && sum >= target)
            {
                minCnt = Math.min(minCnt , start - end + 1) ;

                sum -= nums[end] ;  end++ ;
            }
        }

        return minCnt == Integer.MAX_VALUE ? 0 : minCnt ;
    }
}

// Time Complexity:  O(N)
// Space Complexity: O(1)
