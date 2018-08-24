#include <iostream>
#include <vector>
#include <algorithm>
#include<windows.h>
using namespace std;
//Solution1
// class Solution{
//     public:
//         int maxProfit(vector<int>& prices) {
//             const int n =prices.size();
//             if (n<1) return 0;
//             vector<int> min_prices(n);
//             vector<int> max_profit(n);
//             min_prices[0]=prices[0];
//             max_profit[0]=0;
//             for (int i=1;i<n;++i){
//                 min_prices[i]=min(min_prices[i-1],prices[i]);
//                 max_profit[i]=max(max_profit[i-1],prices[i]-min_prices[i-1]);
//             };
//             return max_profit[n-1];
//         };
// };

//Solution2
//base on maximun subarray
class Solution{
    public:
        int maxProfit(vector<int>& prices) {
            int n =prices.size();
            if (n<2) return 0;
            vector<int> gains(n-1,0);
            for (int i=1;i<n;++i){
                gains[i-1]=prices[i]-prices[i-1];
            }
            return max(0,maxSubArray(gains));
        }
    private:
        int maxSubArray(vector<int> &nums){
            vector<int> f(nums.size());
            f[0]=nums[0];
            for (int i=1;i<nums.size();i++)
                f[i]=max(f[i-1]+nums[i],nums[i]);
            return *max_element(f.begin(),f.end());
        }
};

int main()
{
    vector<int> prices{ 1, 2, 3, 4, 5 };
    Solution s;
    auto max_profit=s.maxProfit(prices);
    printf("max_profit=%d \n",max_profit);
    system("pause");
    return 0;
};