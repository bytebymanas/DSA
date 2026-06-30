"""
 Problem: Kth Missing Positive Number
 Link: https://leetcode.com/problems/kth-missing-positive-number/description/?__cf_chl_f_tk=KbcSHkd4cboQZ33dbIEyIHA0.D7ESxYwllPjgmScQPk-1782805522-1.0.1.1-Qa46C6YfPNLcs1mg2rQS1dnEQrdzfcwtJNi9WC5oKBU
 Difficulty: Easy
 Platform: Leetcode
 Language: Python3
 Tags: My Lists, Array, Binary Search
 Status: Accepted
"""

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int st = 0 ; 
        int end = arr.size()-1;

        while(st<=end){
            int mid = st + (end-st)/2;

            if(((arr[mid] - mid - 1) >= k)){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return k+ end +1 ;
        // this formula is calculated , check notes for details 
    }
};
