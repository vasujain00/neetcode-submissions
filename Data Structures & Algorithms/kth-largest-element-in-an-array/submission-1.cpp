class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> maxHeap;
        int result;
        for(int i=0;i<nums.size();i++) {
            maxHeap.push(nums[i]);
        }
        int index = k;

        while(index!=0) {
            result = maxHeap.top();
            maxHeap.pop();
            index--;
        }

        return result;

    }
};
