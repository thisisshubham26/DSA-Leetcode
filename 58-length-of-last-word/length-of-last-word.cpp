class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        int i = s.length()-1;
        
        // for ignoring spaces 
        while(i >= 0 && s[i] == ' '){
            i--;
        }

        //counting last word
        while(i >=0 && s[i] != ' '){
            cnt++;
            i--;
        }
        return cnt;
    }
};