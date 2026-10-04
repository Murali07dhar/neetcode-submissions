class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<map<char,int>,vector<string>>groups;
        for(string s:strs){
             map<char,int>grp;
            for(char c:s){
                grp[c]++;
            }
            groups[grp].push_back(s);
        }
        for(auto i:groups){
            ans.push_back(i.second);
        }
        return ans;
    }
};
