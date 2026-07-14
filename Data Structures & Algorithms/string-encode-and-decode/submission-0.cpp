class Solution {
public:

    string encode(vector<string>& strs){
        string encoded_string = "";

        for(auto str: strs){
            encoded_string.append( ( to_string(str.size())) );//appending the size of each string
            encoded_string.append("#");
            encoded_string.append(str);
        } 
    
    return encoded_string;
        
    }

    vector<string> decode(string s) {
        vector<string> ans;

        int i=0;

        while(i<s.size()){
            int j = i;
            while(s[j]!='#') j++; //incrementing the j pointer to the character

            int length = stoi(s.substr(i,j-i));//using the number before hastag for length clever!!
            i = j+1; //updating the i pointer
            j = i+length;

            ans.push_back(s.substr(i,length));
            i=j;
        }

        return ans;
    }
};
