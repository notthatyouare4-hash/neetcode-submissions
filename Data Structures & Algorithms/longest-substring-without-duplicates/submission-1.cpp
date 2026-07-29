class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int res = 0;
       for(int i=0; i<s.size(); i++){
        unordered_set<char> longestsize;

        for(int j=i; j<s.size(); j++){
            if(longestsize.find(s[j]) != longestsize.end()) break;
            longestsize.insert(s[j]);
        }

        res = max(res,(int)longestsize.size());
       }
       
       return res;
    }
};
