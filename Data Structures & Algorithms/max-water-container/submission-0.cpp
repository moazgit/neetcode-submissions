class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0,r=heights.size()-1;
        int ans = INT_MIN;
        while(l<r){
            int area = min(heights[l],heights[r])*(r-l);
            if(heights[l]<heights[r])l++;
            else r--;
            ans = max(ans,area);
        }
        return ans;
    }
};
