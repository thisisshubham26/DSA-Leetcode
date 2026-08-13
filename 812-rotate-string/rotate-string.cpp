class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()){
            return false;
        }
        string doubled = s + s;

        int position = doubled.find(goal);

        if (position != string::npos) {
            return true;
        }
        return false;
    }
};