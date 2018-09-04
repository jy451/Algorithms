class Solution:
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        if len(prices)==0:
            return 0
        f=0
        res=0
        for i,x in enumerate(prices):
            if i==0:
                continue
            tmp=prices[i]-prices[i-1]
            if f<0:
                f=0
            if tmp>=0:
                f=tmp+f
                res=max(f,res)
            if f>0 and tmp<0:
                f=tmp+f
        return res
x=[1,2,34]
