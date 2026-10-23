class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        // int a;
        // int i;
        // int n = bills.size()-1;
        // for(int i=0; i<=n; i++){
        //     a = bills[i]-5 ;

        //     if(bills[i]==5 || bills[i]==10 || bills[i]==20){
        //         return true ;
        //     }
        //     else if((bills[i]==5 && bills[i]==10 && bills[i]==20) && a<bills[i]){
        //     }
        // }
        // return false;<
        unordered_map<int , int>mp;
        for(int i = 0 ; i < bills.size() ; i++) {
            if(bills[i] == 20) {
                if(mp[5] >= 1 && mp[10] >= 1) {
                    mp[5]--;
                    mp[10]--;
                }
                else if(mp[5] >= 3) mp[5] -= 3;
                else return false;
            }
            else if(bills[i] == 10 && mp[5] >= 1) mp[5]--;
            else if(bills[i] == 10) return false;
            mp[bills[i]]++;
        }
        return true;

    }
};