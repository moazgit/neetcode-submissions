class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>score;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
                int x = score[score.size()-1]+score[score.size()-2];
                score.push_back(x);
            }else if(operations[i]=="C")score.pop_back();
            else if(operations[i]=="D")score.push_back(score.back()*2);
            else score.push_back(stoi(operations[i]));
        }
        int ans = accumulate(score.begin(),score.end(),0);
        return ans;
    }
};