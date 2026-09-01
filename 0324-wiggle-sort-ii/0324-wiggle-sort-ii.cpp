class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> v(nums);

        int n = nums.size();
        int j = (n - 1) / 2;  
        int k = n - 1;        

        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) {
                v[i] = nums[j--];
            }
            else {
                v[i] = nums[k--];
            }
        }

        nums = v;
    }
};