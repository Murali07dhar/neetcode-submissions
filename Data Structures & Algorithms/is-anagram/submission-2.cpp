class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>fors,fort;
        for(char c:s){
            fors[c]++;
        }
        for(char c:t){
            fort[c]++;
        }
        return fors==fort;
    }
};
