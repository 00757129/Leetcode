class Solution {
public:
    bool isPalindrome(string s) {
        int front = 0;
        int back = s.length()-1;
        
        while (front < back) {
            while (front < s.length()-1 && !isalnum(s[front])) front++;
            while (back > 0 && !isalnum(s[back])) back--;
            
            if (tolower(s[front]) != tolower(s[back]) 
                && isalnum(s[front]) && isalnum(s[back])){
                return false;
            }
            front++;
            back--;
        }
        
        return true;
    }
};
