class Solution {
public:
    int arrangeCoins(int n) 
    {
      int i,sum=0;
        for(i=1;i<=n;i++)
        {
            sum=sum+i;
            if(sum>n)
                break;
        }
        if(i!=1)
            return i-1;
        else
            return i;
    }
};
