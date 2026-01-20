class Solution {
public:
    int reverseBits(int n) {
    vector<int> arr(32, 0);
    int k=0;
    while(n>0)
    {
        arr[k++]=n%2;
        n=n/2;
    }
    long long ans=0,pow=1;
    int i=31;
    while(i>=0)
    {
        ans+=arr[i]*pow;
        pow=pow*2;
        i--;
    }
    return ans;

        
    }
};
