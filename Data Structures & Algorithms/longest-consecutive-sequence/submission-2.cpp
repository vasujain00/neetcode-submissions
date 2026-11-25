class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> map(nums.begin(), nums.end());
        int streak = 0;
        int len = 0;
        int curr;
        for(int i=0;i<nums.size();i++) {
            curr = nums[i];
            if (map.find(curr - 1) == map.end()) {
                len = 0;
                while(map.find(curr)!=map.end()) {
                    len++;
                    curr++;
                }

                streak = max(streak, len);
            }
        }

        return streak;

    }
};
