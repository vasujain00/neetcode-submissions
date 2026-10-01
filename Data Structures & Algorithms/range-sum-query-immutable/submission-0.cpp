class NumArray {
public:
vector<int>prefixSum;
    NumArray(vector<int>& nums) {
        prefixSum.resize(nums.size());
        int total =0;
        for(int i=0;i<nums.size();i++) {
            total+=nums[i];
            prefixSum[i]=total;
        }
    }
    
    int sumRange(int left, int right) {
        int prefixRight = prefixSum[right];

        int prefixLeft = left>0 ? prefixSum[left - 1] : 0;

        return prefixRight - prefixLeft;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */