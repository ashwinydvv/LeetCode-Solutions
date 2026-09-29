class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int x = INT_MIN;
        int n = accounts.size();
        int m = accounts[0].size();
        int sum;
        for(int i=0; i<n; i++){
            sum = 0;
            for(int j=0; j<m; j++){
                sum+=accounts[i][j];
            }
            x = max(sum,x);
        }
        return x;
    }
};