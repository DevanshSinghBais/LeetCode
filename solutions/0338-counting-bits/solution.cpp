class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        ans[0]=0;
        for(int i=1;i<=n;i++)
        {
            int count=0;
            int j=i;
            while(j>0)
            {
                if(j%2==1)
                {
                    count++;
                    j=j/2;

                }
                else
                {
                    j=j/2;
                }
            }
            ans[i]=count;

        }
        return ans;


        
    }
};
