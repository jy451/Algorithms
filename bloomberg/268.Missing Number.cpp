#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <numeric>
#include <functional>
#include<windows.h>
using namespace std;
// Author: Huahua
class Solution {
public:
    // Solution 1: Sum
    // int missingNumber(vector<int>& nums) {
    //     int n = nums.size();
    //     int x = (0+n)*(n+1)/2 - accumulate(nums.begin(), nums.end(), 0);
    //     return x;
    // }
    
    // Solution 2: XOR
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int x = 0;
        for(int i=1;i<=n;++i)
            x = x ^ i ^ nums[i-1];
        return x;
    }
};

int main()
{   
    vector<int> nums{0,1,2, 3, 5, 6 };
    Solution s;
    auto result=s.missingNumber(nums);
    cout << result << endl;
    system("pause");
    return 0;
};