/**
 * Problem: Number of occurrence
 * Link: https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1
 * Difficulty: Easy
 * Platform: Gfg
 * Language: C++
 * Tags: ZohoAmazonMakeMyTrip, Report An Issue, Start Timer, 1, 2, 3, 4, 5
 * Status: Accepted
 */

class Solution {  public:    int countFreq(vector<int>& nums, int target) {         int st = 0;        int end = nums.size()-1;        int end2 = nums.size()-1;        int st2 = 0 ;         int first= -1;        int second = -1;         // lower bound or first occ        while(st<=end){            int mid = st+(end-st)/2;                        if(nums[mid]==target){                first = mid ;                end = mid-1;            }            else if(target<nums[mid]){                end = mid-1;            }            else if(target>nums[mid]){                st =mid+1;            }           }        // Upper Bound         while(st2<=end2){            int mid = st2+(end2-st2)/2;                        if(nums[mid]==target){                second = mid;                st2 =mid+1;            }            else if(target>nums[mid]){                 st2 =mid+1;            }            else if(target<nums[mid]){                end2 = mid -1;            }
