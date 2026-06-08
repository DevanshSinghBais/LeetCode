class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
       int row = matrix.size();
       int col = matrix[0].size();
       vector<int>height(col,0);
       int ans = 0;
       for(int i = 0;i<row;i++)
       {
            for(int j = 0;j<col;j++)
            {
                if(matrix[i][j]=='0')
                {
                    height[j] = 0;
                }
                else
                {
                    height[j]+=1;

                }
            }
            ans = max(ans,largestRectangleArea(height));


       } 
       return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left(n), right(n);
        stack<int> st;

        // Nearest Smaller to Left
        for (int i = 0; i < n; i++) {
            while (!st.empty() && heights[st.top()] >= heights[i]) st.pop();
            left[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        while (!st.empty()) st.pop();

        // Nearest Smaller to Right
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && heights[st.top()] >= heights[i]) st.pop();
            right[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        int maxArea = 0;
        for (int i = 0; i < n; i++) {
            int width = right[i] - left[i] - 1;
            maxArea = max(maxArea, heights[i] * width);
        }
        return maxArea;
    }
};
