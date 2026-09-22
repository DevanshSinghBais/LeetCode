class Solution {
public:
    string frequencySort(string s) {
        string ans;
        map<char,int>mpp;
        for(int i = 0;i<s.length();i++)
        {
            mpp[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto it : mpp)
        {
            pq.push({it.second,it.first});;

        }
        while(!pq.empty())
        {
            int a = pq.top().first;
            char c = pq.top().second;
            pq.pop();
            ans.append(a, c);

        }
        return ans;

    }
};