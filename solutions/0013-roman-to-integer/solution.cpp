class Solution {
public:
    int romanToInt(string s) {
        int m = s.length();
        int sum=0;
        for(int i=0;i<m;i++)
        {
           if(s[i]=='I'&&s[i+1]=='V')
           {
            sum = sum+4;
            i+=1;
            continue;
            
           }
           if(s[i]=='I'&&s[i+1]=='X')
           {
            sum = sum+9;
            i+=1;
            continue;
           }
           if(s[i]=='I'&&(s[i+1]!='V'||s[i+1]!='X'))
           {
            sum = sum+1;
           }
           if(s[i]=='V')
           {
            sum = sum +5;
           }
           if(s[i]=='X'&&s[i+1]=='C')
           {
            sum = sum+90;
            i+=1;
            continue;
           }
           if(s[i]=='X'&&s[i+1]=='L')
           {
            sum = sum+40;
            i+=1;
            continue;
           }
           if(s[i]=='X'&&(s[i+1]!='L'||s[i+1]!='C'))
           {
            sum = sum+10;
           }
           if(s[i]=='L')
           {
            sum = sum + 50;
           }
            if(s[i]=='C'&&s[i+1]=='D')
           {
            sum = sum+400;
            i+=1;
            continue;
           }
           if(s[i]=='C'&&s[i+1]=='M')
           {
            sum = sum+900;
            i+=1;
            continue;
           }
           if(s[i]=='C'&&(s[i+1]!='D'||s[i+1]!='M'))
           {
            sum = sum+100;
           }
           if(s[i]=='D')
           {
            sum = sum + 500;
           }
           if(s[i]=='M')
           {
            sum = sum + 1000;
           }
           
           

        }
        return sum;
        
    }
};
