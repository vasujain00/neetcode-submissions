class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSum = nums[0], minSum = nums[0];
        int currMax = 0, currMin = 0;
        int totalSum = 0;

        for(int i=0;i<nums.size();i++) {
            currMax = max(currMax, 0) + nums[i];
            maxSum = max(maxSum, currMax);

            currMin = min(currMin, 0) + nums[i];
            minSum = min(minSum, currMin);

            totalSum += nums[i];
        }

        return maxSum > 0 ? max(maxSum, totalSum - minSum) : maxSum;
        return maxSum;
    }
};