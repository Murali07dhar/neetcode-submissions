class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>counts;
        map<char,int>countt;
        for(char c:s){
            counts[c]++;
        }
        for(char i:t){
            countt[i]++;
        }
        return counts==countt;
    }
};
