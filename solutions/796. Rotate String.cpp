class Solution {
public:
    bool rotateString(string s, string goal) {
         int goalLength = size(goal);
        if(size(s) != goalLength)
            return false;
        if(s == goal)   
            return true;
        while(goalLength--)
        {
            if(s == goal)
                return true;
            s = s.substr(1) + s.at(0); 
        }
        return false;
    }
};
