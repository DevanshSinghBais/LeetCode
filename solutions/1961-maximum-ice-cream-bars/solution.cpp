class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int m = costs.size();
        int ice = 0;
        sort(costs.begin(),costs.end());
        for(int i = 0;i<m;i++)
        {
            if(coins>=costs[i])
            {
                coins -= costs[i];
                ice++;
            }
            else
            {
                break;
            }
        }
        return ice;
    }
};
