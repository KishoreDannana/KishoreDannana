class Solution {
public:
    int subtractProductAndSum(int n) {
          int c,r,sum=0,pro=1;
       
        while(n!=0)
        {
            r=n%10;
            sum=sum+r;
            pro=pro*r;
            n=n/10;
        }
        c=pro-sum;
       
        return c;        
    }
};
