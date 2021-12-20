/* Problem Statement:
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
A subarray is a contiguous part of an array.

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Example 2:

Input: nums = [1]
Output: 1
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23

Solution:
=> Brute Force: Use three loops to keep track of max sum amongst all subarrays. [O(N^3)]

=> Best Approach: KADANE's ALGORITHM
    1. Define two-variable currSum which stores maximum sum ending here and maxSum which stores maximum sum so far.
    2. Initialize currSum with 0 and maxSum with INT_MIN.
    3. Now, iterate over the array and add the value of the current element to currSum and check
        (i) If currSum is greater than maxSum, update maxSum equals to currSum.
        (ii) If currSum is less than zero, make currSum equal to zero.
    4. Finally, print the value of maxSum.

*/

#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> arr)
{
    int n = arr.size();
    int curr_sum = 0;
    int max_sum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        curr_sum = curr_sum + arr[i];

        if (curr_sum > max_sum)
        {
            max_sum = curr_sum;
        }
        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
    }

    return max_sum;
}

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int maxSum = maxSubarraySum(arr);

    cout << maxSum;

    return 0;
}
