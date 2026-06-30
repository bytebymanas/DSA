/**
 * Problem: Implement Lower Bound
 * Link: https://www.geeksforgeeks.org/problems/implement-lower-bound/1
 * Difficulty: Unknown
 * Platform: Gfg
 * Language: JavaScript
 * Tags: N/A
 * Status: Accepted
 */

class Solution {
  public:
    int lowerBound(vector<int>& nums, int target) {
        int st = 0 ;
        int flag = false;
        int end = nums.size()-1;
        int n = nums.size();

        while(st<=end){
            int mid = st+(end-st)/2;

            if(nums[mid]==target || target<nums[mid]){

                end = mid-1;
            }
            else if(target>nums[mid]){
                st =mid+1;

            }


        }



        return st;
    }
};
