class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        int j = 0;
        for(int i = 0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                if(i!=0)
                {
                    v.push_back(" ");
                }
                while(i<s.length()&&s[i]==' ')
                {
                    i++;
                }
                i--;
            }
            else
            {
                string b;
                while(i<s.length()&&s[i]!=' ')
                {
                    b += s[i];
                    i++;
                }
                v.push_back(b);
                i--;
            }
        }
        int m = v.size();
        if(v[m-1]==" ")v.pop_back();

        string c;
        for(int j = v.size()-1;j>=0;j--)
        {
            c += v[j];
        }
        return c;

    }
};
