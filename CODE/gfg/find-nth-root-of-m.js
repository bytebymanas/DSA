/**
 * Problem: Find nth root of m
 * Link: https://www.geeksforgeeks.org/problems/find-nth-root-of-m5843/1
 * Difficulty: Unknown
 * Platform: Gfg
 * Language: JavaScript
 * Tags: N/A
 * Status: Accepted
 */

class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        // n = 3, m = 8  , means cube root of 8 , if n = 4 , then find quad root of 8 this is what it meant
        int st = 0 ;
        int end = m ;

        while(st<=end){
            int ans = 1;
            int mid = st + (end-st)/2;

            for(int i = 0 ; i<n ; i++){
                ans *= mid ;
            }

            if(ans==m){
                return mid ;
            }
            else if(ans<m){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }

        return -1;
    }

};
