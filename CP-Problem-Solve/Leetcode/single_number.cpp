class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int  ans = 0;
       
       for(int val:nums){
        ans = ans ^ val;
       }
       return ans;

        
    }
};
//time complexity : O(n)
//space complexity : O(1)
//leetcode link : https://leetcode.com/problems/single-number/description/