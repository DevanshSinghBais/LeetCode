class Solution {
public:
    bool isPalindrome(int x) 
    {
        if (x < 0) return false;

        int n = x;
        int count = 0;
        while (n > 0) {
            n /= 10;
            count++;
        }

        vector<int> arr(count);
        for (int i = 0; i < count; i++) {
            arr[i] = x % 10;
            x /= 10;
        }

        int i = 0, j = count - 1;
        while (i < j) {
            if (arr[i] != arr[j]) return false;
            i++;
            j--;
        }

        return true;
    }
};

