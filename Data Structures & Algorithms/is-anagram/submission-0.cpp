class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;

        unordered_map<char,int> frequency_map;

        for(int i=0;i<s.length();i++)
        {
            frequency_map[s[i]]++;
        }

        for(int j=0;j<t.length();j++)
        {
            if(frequency_map.contains(t[j])) {
                frequency_map[t[j]]--;
            }
        
        if(frequency_map[t[j]]==0)
            frequency_map.erase(t[j]);

        }

return frequency_map.empty();


          
    }
};
