class Solution {
public:
    bool isPalindrome(string s) {
        int index=0;
        while(index<s.length()){
            if(!isalnum(s[index])){
                s.erase(s.begin()+index);
            }else {
                if(!islower(s[index]))s[index]=tolower(s[index]);
                index++;
            }
        }

        string rev=s;
        reverse(s.begin(),s.end());
        return rev == s;
    }
};
