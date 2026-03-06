class Solution {
public:
    bool checkOnesSegment(string s) {
        for(long long i=1;i<s.size();i++){
            if(s[i]=='1' && s[i-1]=='0'){
                return false;
            }
        }
        return true;
    }
};