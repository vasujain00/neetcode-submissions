class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> result;

        for(int i = 0; i < intervals.size(); i++) {
            vector<int> curr = intervals[i];

            if(!result.empty() && result.back()[1] >= curr[0]) {
                result.back()[1] = max(result.back()[1], curr[1]);
            } else {
                result.push_back(curr);
            }
        }
        
        return result;
    }
};