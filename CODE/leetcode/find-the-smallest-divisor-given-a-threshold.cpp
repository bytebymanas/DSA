/**
 * Problem: Find the Smallest Divisor Given a Threshold
 * Link: https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/
 * Difficulty: Medium
 * Platform: Leetcode
 * Language: C++
 * Tags: My Lists, Array, Binary Search
 * Status: Accepted
 */

class Solution {
public:
    bool isvalid(const vector<int> &nums, int threshold, int div) {
        int sum = 0; 
        for (int num : nums) {
            sum += (num + (div - 1)) / div;
        }
        return sum <= threshold;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int st = 1; 
        int end = *max_element(nums.begin(), nums.end());
        int ans = -1;

        while (st <= en
