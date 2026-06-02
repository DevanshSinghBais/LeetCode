class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n = piles.size();
        int max = piles[0];
        for(int i = 0; i < n; i++){
            if(piles[i] > max){
                max = piles[i];
            }
        }
        int low = 1;
        int high = max;
        int ans = 0;
        while(low <= high){
            int mid = low + (high - low) / 2;
            long long hours = 0;
            for(int i = 0; i < n; i++){
                hours += (piles[i] + mid - 1) / mid;
            }
            if(hours <= h){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
        ios::sync_with_stdio(false);
    }
};
