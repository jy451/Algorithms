#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        // move all the nonzero elements advance
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j++] = nums[i];
            }
        }
        for (;j < nums.size(); j++) {
            nums[j] = 0;
        }
    }
};

int main()
{
    vector<int> nums{ 0, 2, 0, 4, 5 };
    Solution s;
    s.moveZeroes(nums);
    for (const int n:nums){
         cout << n << " ";
    }
    system("pause");
    return 0;
};