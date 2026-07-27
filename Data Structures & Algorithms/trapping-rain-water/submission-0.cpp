class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty()) return 0;

        int res = 0;

        for(int i=0; i<height.size(); i++){
            int leftmax= height[i];
            int rightmax= height[i];

            for(int j=0; j<i; j++) leftmax=max(leftmax,height[j]);

            for(int k=i+1; k<height.size(); k++) rightmax=max(rightmax,height[k]);

            res += min(leftmax,rightmax) - height[i];
            
        }

        return res;
    }
};
