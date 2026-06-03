class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            int cnt = 0;
            for(int j=0;(1ll<<j)<=n;j++){
                if(i&(1ll<<j))cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};
