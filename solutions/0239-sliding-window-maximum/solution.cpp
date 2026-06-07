class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        ans.reserve(n - k + 1);       
        int dq[100005];
        int head = 0, tail = 0;
        
        for (int i = 0; i < n; ++i) {
            
            if (head < tail && dq[head] == i - k) ++head;
            

            while (head < tail && nums[dq[tail - 1]] <= nums[i]) --tail;
            
            dq[tail++] = i;
            
            
            if (i >= k - 1) ans.push_back(nums[dq[head]]);
        }
        return ans;
    }
};
