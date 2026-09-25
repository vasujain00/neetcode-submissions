class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramMap;

        for(int i=0;i<strs.size();i++)
        {
            string s = strs[i];
            sort(s.begin(), s.end());

            anagramMap[s].push_back(strs[i]);

        }

       vector<vector<string>> result;

        for(auto& [key, anagrams]: anagramMap) {
            result.push_back(anagrams);
        }

       return result; 

    }

    
    
};
