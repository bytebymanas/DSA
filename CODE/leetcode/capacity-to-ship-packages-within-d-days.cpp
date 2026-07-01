/**
 * Problem: Capacity To Ship Packages Within D Days
 * Link: https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/
 * Difficulty: Medium
 * Platform: Leetcode
 * Language: C++
 * Tags: My Lists, Array, Binary Search
 * Status: Accepted
 */

class Solution {
public:

    bool isvalid(vector<int>& weights , int days , int limit){
        int dayz = 1 ; 
        int sum = 0 ; 
        for(int weight : weights){

            if(sum + weight<=limit){
                sum +=weight;
            }
            else{
                sum = 0 ; 
                sum += weight;
                dayz++;

            }
        }

        return dayz<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int st = *max_element(w
