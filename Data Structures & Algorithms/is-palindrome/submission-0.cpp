class Solution {
    private:
    char tolowercase(char &a){
        
        if(a>='A' && a<='Z'){
            int ch = a-'A';
            return ch+'a';
        }
        
        return a;
    };

    bool alphanum(char c){
        return (c>='A' && c<='Z' || c>='a' && c<='z' || c>='0'&& c<='9');
    };

    public:
    bool isPalindrome(string s) {

        if(s.empty()) return true;

        int i=0,j=s.length()-1;

        while(i<j){
            
            while(i<j && !alphanum(s[i])) i++;

            while(j>i && !alphanum(s[j])) j--;

            if(tolowercase(s[i])!=tolowercase(s[j])) return false;

            i++; j--;
        }
        return true;
    }
};
