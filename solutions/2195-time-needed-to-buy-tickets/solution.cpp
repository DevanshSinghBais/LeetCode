class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int timer=0;
        int n=tickets.size();
        for(int i=0;i<n;i++){
            if(i<=k){
                timer+=min(tickets[i],tickets[k]);;
            }
            else{
                timer+=min(tickets[k]-1,tickets[i]);
            }
        }
        return timer;
       
    }
};
