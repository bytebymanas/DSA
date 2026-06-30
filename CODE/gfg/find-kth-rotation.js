/**
 * Problem: Find Kth Rotation
 * Link: https://www.geeksforgeeks.org/problems/rotation4723/1
 * Difficulty: Unknown
 * Platform: Gfg
 * Language: JavaScript
 * Tags: N/A
 * Status: Accepted
 */

class Solution {
  public:
    int findKRotation(vector<int> &nums) {
        int st = 0 ;
        int end = nums.size()-1;
        int ans = INT_MAX;
        int idx = 0;

        while(st<=end){
            int mid = st + (end-st)/2;
            if(nums[st]<=nums[mid]){
                // left half is sorted


                if(nums[st]<ans){
                    ans = nums[st];
                    idx = st;
                }
                st = mid+1;
            }
            else{
                if(nums[mid]<ans){
                    ans = nums[mid];
                    idx = mid;
                }
                end = mid-1;

            }
        }
        return idx;

    }
};
