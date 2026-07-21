class Solution {
public:
    int mySqrt(int x) {
        int low = 0,high = x;
        while(low<=high){
            int mid = low + (high-low)/2;
            long long p = 1ll*mid*mid;
            long long t = 1ll*x;
            if(p == t)return mid;
            if(p > t)high = mid - 1;
            else low = mid + 1;
        }
        return high;
    }
};