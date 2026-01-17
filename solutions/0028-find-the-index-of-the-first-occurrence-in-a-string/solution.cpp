class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.length();
        int n = needle.length();
        int indx = haystack.find(needle);
        if(indx>=0&&indx<m)
        {
            return indx;
        }
        return -1;
        
        
    }
};
