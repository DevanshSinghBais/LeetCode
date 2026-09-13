class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int cnt = 1;
        int cap = capacity;
        cap = cap - plants[0];
        
        for(int i = 1;i<plants.size();i++)
        {
            if(cap<plants[i])
            {
                cnt += 2*i;
                cap = capacity;
                
            }
            cnt++;
            cap -= plants[i];
        }
        return cnt;
    }
};