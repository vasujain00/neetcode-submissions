class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int product = 1;
        int left =0;
        int total = 0;

        for(int right =0;right<nums.size();right++) {

            product = product * nums[right];


            while(left<= right && product >= k) {
                product = product / nums[left++];
            }

            total += right - left + 1;
        }

        return total;
    }
};