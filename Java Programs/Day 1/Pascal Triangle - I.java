// LeetCode:  https://leetcode.com/problems/pascals-triangle/description/

class Solution {
    public List<List<Integer>> generate(int numRows) 
    {
        List<List<Integer>> ans = new ArrayList<>() ;

        ArrayList<Integer> firstRow = new ArrayList<>() ;
        firstRow.add(1) ;

        ans.add(firstRow) ;

        if(numRows == 1)  return ans ;

        ArrayList<Integer> secondRow = new ArrayList<>() ;
        secondRow.add(1) ; secondRow.add(1) ;

        ans.add(secondRow) ; 

        for(int row = 2 ; row < numRows ; row++)
        {
            ArrayList<Integer> currRow = new ArrayList<>() ;

            currRow.add(1) ;  int prev = row - 1 ;

            for(int i = 0 ; i < ans.get(prev).size() - 1 ; i++)
            {
                int a = ans.get(prev).get(i) ;  
                int b = ans.get(prev).get(i + 1) ;

                currRow.add(a + b) ;
            }

            currRow.add(1) ;  ans.add(currRow) ;
        }

        return ans ;
    }
}

// Time Complexity:  O(N ^ 2)
// Space Complexity: O(N) 
