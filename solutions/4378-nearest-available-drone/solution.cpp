class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& t) {
        int p = t[0];
        int q = t[1];
        int ind = INT_MAX,ans = INT_MAX;
        for(int i = 0;i<drones.size();i++)
            {
                int x = drones[i][0];
                int y = drones[i][1];
                int z = drones[i][2];
                int m = abs(x-p)+abs(y-q);
                if(m<=z)
                {
                    if(ans>m)
                    {
                        ind = i;
                        ans  = m;
                    }
                    else if(ans==m)
                    {
                        ind = min(i,ind);
                    }
                }
            }
        if(ind==INT_MAX)
        {
            ind = -1;
        }
        return ind;
    }
};
