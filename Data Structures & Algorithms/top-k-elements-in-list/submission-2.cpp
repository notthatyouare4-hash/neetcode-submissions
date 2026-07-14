class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> freq; //map to store the freq of values in nums;

        for(auto& v: nums) freq[v]++;

        priority_queue<pair<int, int>> pq;
        for(auto& [key,value] : freq) pq.push({value, key});

        for(int i = 0; i < k; i++) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};