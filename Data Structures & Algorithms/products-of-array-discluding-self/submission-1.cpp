class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> prefixProduct(n);
        vector<int> suffixProduct(n);
        vector<int> productSum(n);
        int pre = 1;
        
        for(int i=0;i<nums.size();i++) {
            prefixProduct[i] = pre;
            pre = pre * nums [i];
        }

        int suff = 1;
        for(int j = nums.size()-1;j>=0;j--) {
            suffixProduct[j] = suff;
            suff = suff * nums[j]; 
        }

        for(int i = 0;i<nums.size();i++) {
            productSum[i] = prefixProduct[i] * suffixProduct[i];
        }
        
        return productSum;

    }
};
