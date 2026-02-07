class Solution {
public:
    int addDigits(int num) {
       
        return sum(num,0);
        
    }
private:
    int sum(int n,int add)
    {
        
        if(add<10&&n==0)
        {
            return add;
        }
        if(n>0)
        {
            return sum(n/10,add+n%10);
        }
        else
        {
            return sum(add,0);
        }


    }
};
