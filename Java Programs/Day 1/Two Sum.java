// LeetCode:  https://leetcode.com/problems/two-sum/description/

class Solution {
    public int[] twoSum(int[] nums, int target) 
    {
        int n = nums.length ;

        HashMap<Integer , Integer> hashMap = new HashMap <>() ;

        int [] ans = new int[2] ;

        for(int i = 0 ; i < n ; i++)
        {
            int key = target - nums[i] ;

            if(hashMap.containsKey(key) )
            {
                ans[0] = i ; ans[1] = hashMap.get(key) ;  
                break ;
            }

            if(hashMap.containsKey(nums[i]) )  hashMap.put(nums[i] , hashMap.get(nums[i]) + 1) ;

            else hashMap.put(nums[i] , i) ;
        }    

        return ans ;
    }
}

// Time Complexity:  O(N)
// Space Complexity: O(N)
