class Solution {
public:
    bool isPalindrome(string s) {
        int l=0,r=s.size()-1;
        while(l<=r){
            if((s[l]<65 || s[l]>122)&&(s[l]<48 || s[l]>57)){
                l++;
                continue;
            }
            if((s[r]<65 || s[r]>122)&&(s[r]<48 || s[r]>57)){
                r--;
                continue;
            }
            if(tolower(s[l])!=tolower(s[r]))return false;
            l++;
            r--;
        }
        return true;
    }
};
