class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m; //map to store the frequencies of characters
        //along with their respective strings

        for(auto& s: strs){
            vector<int> count(26); //vector of size of 26 with all zeroes to store the 
            //frequencies of each character of each string
            
            //running loop to store the frequencies of characters
            for(char c : s) count[c-'a']++;
            
            string key = to_string(count[0]);

            for(int i=1; i<26; i++){
                key += ','+to_string(count[i]);
            }

            m[key].push_back(s);
        }

        vector<vector<string>> ans;

        for(auto & pair : m) ans.push_back(pair.second);

        return ans;



    }
};
