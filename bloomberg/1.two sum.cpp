#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include<windows.h>

using namespace std;
class Solution{
    public:
        vector<int> twoSum(vector<int>& nums,int target) {
            unordered_map<int,int> indies;
            int i=0;
            for (int nn:nums){
                    indies[nn]=i++;
                };
            for (int i=0;i<nums.size();++i){
                int left=target-nums[i];
                if (indies.count(left)){
                    return {i,indies[left]};
                };
            };
            return {};
        }
};

int main()
{
    vector<int> nums{ 1, 2, 5 };
    Solution s;
    auto result=s.twoSum(nums,7);
    for (const int n:result){
         cout << n << " ";
    }
    system("pause");
    return 0;
};