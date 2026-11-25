class Solution {
public:
    void reverseString(vector<char>& s) {
        int i =0;
        int j = s.size()-1;

        while(i<s.size()/2) {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
};