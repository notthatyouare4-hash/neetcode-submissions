class Solution {
public:
    bool isAnagram(string s, string t) {

        int freq1[26]={0},freq2[26]={0};

        if (s.length()!=t.length()) return false;

        for(int i=0; i<s.length(); i++) {
            freq1[s[i]-'a']++;
            freq2[t[i]-'a']++;
        } 

        for(int j=0; j<26; j++){
            if(freq1[j]!=freq2[j]) return false;
        }

        return true;
    }
};
