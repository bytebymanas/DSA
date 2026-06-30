/**
 * Problem: Number of occurrence
 * Link: https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1
 * Difficulty: Easy
 * Platform: Gfg
 * Language: JavaScript
 * Tags: Expected ComplexitiesTime Complexity: O(log n)Auxiliary Space: O(1)Company TagsZohoAmazonMakeMyTripTopic TagsArraysSearchingData StructuresAlgorithmsRelated Interview ExperiencesMakemytrip Interview Experience Set 12Related ArticlesCount Number Of Occurrences Or Frequency In A Sorted Array, Expected ComplexitiesTime Complexity: O(log n)Auxiliary Space: O(1), Expected Complexities, Company TagsZohoAmazonMakeMyTrip, Company Tags, Zoho, Amazon, MakeMyTrip
 * Status: Accepted
 */

class Solution {  public:    int countFreq(vector<int>& nums, int target) {         int st = 0;        int end = nums.size()-1;        int end2 = nums.size()-1;        int st2 = 0 ;         int first= -1;        int second = -1;         // lower bound or first occ        while(st<=end){            int mid = st+(end-st)/2;                        if(nums[mid]==target){                first = mid ;                end = mid-1;            }            else if(target<nums[mid]){                end = mid-1;            }            else if(target>nums[mid]){                st =mid+1;            }           }        // Upper Bound         while(st2<=end2){            int mid = st2+(end2-st2)/2;                        if(nums[mid]==target){                second = mid;                st2 =mid+1;            }            else if(target>nums[mid]){                 st2 =mid+1;            }            else if(target<nums[mid]){                end2 = mid -1;            }
