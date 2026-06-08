class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int l=0,r=people.size()-1;
        int cnt = 0;
        while(l<=r){
            if(l==r){
                cnt++;
                break;
            }else{
                if(people[r]+people[l] > limit){
                    cnt++;
                    r--;
                }else{
                    cnt++;
                    l++;
                    r--;
                }
            }
        }
        return cnt;
    }
};