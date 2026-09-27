class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int maxCounter= 0;
        int counter =0;

        for(int i=0;i<nums.size();i++) {
            if(nums[i] == 1) {
                counter++;
            } else {
                counter = 0;
            }
            if(counter > maxCounter) {
                maxCounter = counter;
            }
        }

        return maxCounter;
    }
};