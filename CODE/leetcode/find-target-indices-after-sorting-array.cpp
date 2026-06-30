/**
 * Problem: Find Target Indices After Sorting Array
 * Link: https://leetcode.com/problems/find-target-indices-after-sorting-array/description/
 * Difficulty: Easy
 * Platform: Leetcode
 * Language: C++
 * Tags: Array, Binary Search, Sorting, My Lists
 * Status: Accepted
 */

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans ;  
        sort(nums.begin() , nums.end()); 
        int n = nums.size();
        for(int i = 0 ; i<n; i++){
            if(nums[i]==target){
                ans.push_back(i);
            }
        }
        
        return ans ; 
    }
};
