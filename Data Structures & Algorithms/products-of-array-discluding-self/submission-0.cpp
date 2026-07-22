class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int prod = 1;
        int zero_cnt = 0;

        for(int i=0; i<n; i++){
            if(nums[i]==0){
                zero_cnt++;
                continue;
            }

            prod*=nums[i];
            
        }

        if(zero_cnt>1) return ans;
       
       for(size_t i=0; i<n; i++){
        if(zero_cnt > 0) ans[i] = (nums[i]==0) ? prod : 0;
        else ans[i] = prod/nums[i];
       }

        return ans;
    }
};
