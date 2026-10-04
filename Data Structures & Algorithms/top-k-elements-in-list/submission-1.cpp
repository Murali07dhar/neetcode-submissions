class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        map<int,int>freq;
        vector<int>ans;
        for(int i:nums){
            freq[i]++;
        }
        for(auto j:freq){
            pq.push({j.second,j.first});
        }
        while(k!=0){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans; 
    }
};
