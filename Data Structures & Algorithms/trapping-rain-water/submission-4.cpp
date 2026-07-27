class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty()) return 0;

        int n = height.size();
        int res = 0;
        vector<int> leftmx(n);
        vector<int> rightmx(n);

        leftmx[0]=height[0];

        for(int i=1; i<n; i++) leftmx[i]= max(leftmx[i-1],height[i]);

        rightmx[n-1] = height[n-1];
        for(int j=n-2; j>=0; j--) rightmx[j] = max(rightmx[j+1],height[j]);

        for(int i=0; i<n; i++) res+= min(leftmx[i],rightmx[i]) - height[i];

        return res;


       
        

        return res+1;
    }
};
