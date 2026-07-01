/**
 * Problem: Two Sum
 * Link: https://leetcode.com/problems/two-sum/description/
 * Difficulty: Easy
 * Platform: Leetcode
 * Language: C++
 * Tags: Array, Hash Table, My Lists
 * Status: Accepted
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp ; 
        int n = nums.size();
        for(int i = 0 ; i<n; i++){
            int more = target - nums[i];

            if(mp.find(more)!=mp.end()){
                // if the more is found in the map 

                return{mp[more] , i};
                
            }

            // current arr[i] ko map me dalo 

            mp[nums[i]] = i; // for ex : {value , idx} : {176 , 2}

        }

        return {-1,-1};
    }
};
