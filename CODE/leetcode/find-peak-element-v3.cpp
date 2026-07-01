/**
 * Problem: Find Peak Element
 * Link: https://leetcode.com/problems/find-peak-element/description/?__cf_chl_f_tk=eVVu1j4bvIN0nev6bMjBiXNN6v22H35FNc_naQx42R4-1782889472-1.0.1.1-4SEdoOdXiaXKTLvXchwM1KWZfK5jenaYwtU_BaIRR9A
 * Difficulty: Medium
 * Platform: Leetcode
 * Language: C++
 * Tags: Array, Binary Search, My Lists
 * Status: Accepted
 */

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int st = 1 ; 
        int end = nums.size()-2;
        int n = nums.size();
        if(n==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[n-1]>nums[n-2]) return n-1;
       

        while(st<=end){
            // nums[-1] = nums[n] = -∞ , means , imagine , there exists and -∞ on both ends of the array , and if 
            // n-2/elemt at idx 1 is greater than the last or first elemnt , means it creating a peak , draw in nb and check if doubt 


           

            int mid = st + (end-st)/2;

            if(nums[mid-1]<nums[mid]&& nums[mid]>nums[mid+1]){
                return mid;
            }

            else if(nums[mid]>nums[mid-1]){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return -1;
    }
};
