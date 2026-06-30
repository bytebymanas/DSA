/**
 * Problem: Find Kth Rotation
 * Link: https://www.geeksforgeeks.org/problems/rotation4723/1
 * Difficulty: Easy
 * Platform: Gfg
 * Language: Unknown
 * Tags: Expected ComplexitiesTime Complexity: O(log n)Auxiliary Space: O(1)Company TagsFlipkartAmazonABCOTopic TagsArraysSearchingData StructuresAlgorithmsRelated Interview ExperiencesAbco Interview Experience Set 5Related ArticlesFind Rotation Count Rotated Sorted Array, Expected ComplexitiesTime Complexity: O(log n)Auxiliary Space: O(1), Expected Complexities, Company TagsFlipkartAmazonABCO, Company Tags, Flipkart, Amazon, ABCO
 * Status: Accepted
 */

class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]<arr[i]) return i+1;
        }
        return 0;
        
    }
};
