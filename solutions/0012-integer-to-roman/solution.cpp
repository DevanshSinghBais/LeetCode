class Solution {
public:
    string intToRoman(int nums) {
        
        stack<int>st;
        long long d = 10;
        string ans;
        int prev = 0;

while(d/10 <= nums)
{
    int cur = nums % d;
    st.push(cur - prev);
    prev = cur;
    d *= 10;
}
        while(!st.empty())
        {
            int x = st.top();
            st.pop();
            if(x == 1) ans += "I";
else if(x == 2) ans += "II";
else if(x == 3) ans += "III";
else if(x == 4) ans += "IV";
else if(x == 5) ans += "V";
else if(x == 6) ans += "VI";
else if(x == 7) ans += "VII";
else if(x == 8) ans += "VIII";
else if(x == 9) ans += "IX";

else if(x == 10) ans += "X";
else if(x == 20) ans += "XX";
else if(x == 30) ans += "XXX";
else if(x == 40) ans += "XL";
else if(x == 50) ans += "L";
else if(x == 60) ans += "LX";
else if(x == 70) ans += "LXX";
else if(x == 80) ans += "LXXX";
else if(x == 90) ans += "XC";

else if(x == 100) ans += "C";
else if(x == 200) ans += "CC";
else if(x == 300) ans += "CCC";
else if(x == 400) ans += "CD";
else if(x == 500) ans += "D";
else if(x == 600) ans += "DC";
else if(x == 700) ans += "DCC";
else if(x == 800) ans += "DCCC";
else if(x == 900) ans += "CM";

else if(x == 1000) ans += "M";
else if(x == 2000) ans += "MM";
else if(x == 3000) ans += "MMM";

        }
        return ans;
    }
    
};
