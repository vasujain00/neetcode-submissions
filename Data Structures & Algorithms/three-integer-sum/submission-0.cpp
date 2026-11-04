class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> answer;
        sort(nums.begin(), nums.end());
        
        for(int i=0;i<nums.size();i++) {
            // Step 2: Skip duplicate 'a' values
        if (i > 0 && nums[i] == nums[i - 1]) continue;

            int j = i+1;
            int k = nums.size()-1;
            int sum = -nums[i];
            while(j<k) {

             if(nums[j]+nums[k] == sum) {
                answer.push_back({nums[i],nums[j],nums[k]});

            while(j<k && nums[j] == nums[j+1]) j++;
            while(j<k && nums[k] == nums[k-1]) k--;

            j++;
            k--;

             }
             else if (nums[j]+nums[k] < sum)
             {
                j++;
             }
             else {
                k--;
             }
            }
        }

return answer;

    }
};
