class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int i = 0;
        int j = height.size() - 1;
        int d = 0;

        while (i < j)
        {
            int h = (height[i] < height[j]) ? height[i] : height[j];
            int area = (j - i) * h;
            if (area > d) d = area;

            if (height[i] < height[j])
                i++;
            else
                j--;
        }

        return d;
    }
};

