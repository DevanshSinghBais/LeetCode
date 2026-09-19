class Solution {
public:
    int compareVersion(string ver1, string ver2) {
        int ans = 0;
        int m = ver1.length(),n = ver2.length();
        vector<long long>v1,v2;
        for(int i = 0;i<m;i++)
        {
            long long p = 0;
            while(i<m&&ver1[i]!='.')
            {
                int x = ver1[i] - '0';
                p = p*10 + x;
                i++;
            }
            v1.push_back(p);


        }
        for(int i = 0;i<n;i++)
        {
            long long q = 0;
            while(i<n&&ver2[i]!='.')
            {
                int x = ver2[i] - '0';
                q = q*10 + x;
                i++;
            }
            v2.push_back(q);
        }
        int s = max(v1.size(), v2.size());
        v1.resize(s, 0);
        v2.resize(s, 0);
        for(int i = 0;i<s;i++)
        {
            if(v1[i]>v2[i])
            {
                ans = 1;
                break;
            }
            else if(v1[i]<v2[i])
            {
                ans = -1;
                break;
            }
            else
            {
                continue;
            }

        }

        return ans;

    }
};