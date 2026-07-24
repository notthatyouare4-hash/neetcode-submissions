class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s = 0, e = numbers.size()-1;
        

        while(s<=e){
            int currsum = numbers[s]+numbers[e];

            if(currsum>target) e--;
            else if(currsum<target) s++;
            else return {s+1,e+1};
        
         }

         return {};
    }
};
