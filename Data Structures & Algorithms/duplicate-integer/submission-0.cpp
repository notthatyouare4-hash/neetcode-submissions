class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;

        for(int i=0; i<nums.size(); i++){
            int num;
            num = nums[i];
            map[num]++;
        }

        //running the loop to check frequency
        for(auto const& [key, value]: map){
            if(value>1) return true;
        }

        return false;
    }
};