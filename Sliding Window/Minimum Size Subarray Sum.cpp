/*
    MY YOUTUBE VIDEO ON THIS Qn : 
    Company Tags                : Google, Accolite, Amazon, Facebook, Goldman Sachs
    Leetcode Link               : https://leetcode.com/problems/minimum-size-subarray-sum/
*/

//Using Sliding Window
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        
        int i = 0, j = 0;
        
        int sum = 0;
        int minL = n+1;
        
        while(j < n) {
            sum += nums[j];
            
            while(sum >= target) {
                minL = min(minL, j-i+1);
                sum -= nums[i];
                i++;
            }
            
            j++;
        }
        return minL == n+1 ? 0 : minL;
    }
};
