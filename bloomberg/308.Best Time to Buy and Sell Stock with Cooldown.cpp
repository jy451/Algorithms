#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
//Solution1
class Solution{
    public:
        int maxProfit(vector<int>& prices) {
            int sold =0;
            int rest =0;
            int hold =INT_MIN;
            for (const int price:prices){
                int prev_sold=sold;
                sold =hold+price;
                hold =max(hold,rest-price);
                rest =max(rest,prev_sold);
            }
            return max(rest,sold);
        };
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