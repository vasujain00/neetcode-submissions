class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;

        for(auto& i : nums) {
            freq[i]++;
        }

        // Min-heap by frequency — swap pair order trick
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    
    for (auto& p : freq) {
        pq.push({p.second, p.first});  // {freq, element}
        if (pq.size() > k) pq.pop();   // evict smallest freq
    }
    
    vector<int> result;
    while (!pq.empty()) {
        result.push_back(pq.top().second);
        pq.pop();
    }
    return result;
    }
};
