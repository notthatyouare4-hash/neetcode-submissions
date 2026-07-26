class Solution {
public:
    int maxArea(vector<int>& heights) {  

        int i=0, j=heights.size()-1, maxArea=0;

        while(i<j){
           int area = min(heights[i],heights[j])*(j-i);
           maxArea = max(maxArea,area);

           if(heights[i]<=heights[j]) i++;
           else j--;
        }

        

        return maxArea;
    }
};
