class Solution {
public:
    bool validPalindrome(string s) {
        int cnt = 0;
        int l=0,r=s.size()-1;
        int a = -1;
        int b = -1;
        while(l<=r){
            if(s[l]==s[r]){
                l++;
                r--;
            }else{
                a = l;
                b = r;
                break;
            }
        }
        if(a == b)return true;
        l = 0,r=s.size()-1;
        int pos1 = 1;
        while(l<=r){
            if(l==a){
                l++;
                continue;
            }
            if(s[l]!=s[r]){
                pos1 = 0;
                break;
            }
            l++;
            r--;
        }
        if(pos1)return true;
        l = 0,r=s.size()-1;
        while(l<=r){
            if(r==b){
                r--;
                continue;
            }
            if(s[l]!=s[r])return false;
            l++;
            r--;
        }
        return true;
    }
};