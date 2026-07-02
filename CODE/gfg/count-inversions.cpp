/**
 * Problem: Count Inversions
 * Link: https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
 * Difficulty: Medium
 * Platform: Gfg
 * Language: C++
 * Tags: N/A
 * Status: Accepted
 */

class Solution {
public:

    long long merge(vector<int>& arr, int low, int mid, int high) {

        vector<int> temp;
        int left = low;
        int right = mid + 1;

        long long count = 0;

        while (left <= mid && right <= high) {

            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left++]);
            }
            else {
                temp.push_back(arr[right++]);

                count += (mid - left + 1);
            }
        }

        while (left <= mid)
            temp.push_back(arr[left++]);

        while (right <= high)
            temp.push_back(arr[right++]);

        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }

        return count;
    }

    long long mergeSort(vector<int>& arr, int low, int high) {

        if (low >= high)
            return 0;

        int mid = (low + high) / 2;

        long long count = 0;

        count += mergeSort(arr, low, mid);

        count += mergeSort(arr, mid + 1, high);

        count += merge(arr, low, mid, high);

        return count;
    }

    int inversionCount(vector<int>& arr) {

        return mergeSort(arr, 0, arr.size() - 1);
    }
};
