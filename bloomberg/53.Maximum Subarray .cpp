#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include<windows.h>

using namespace std;
//Solution1 space:O(n)
class Solution{
    public:
        int maxSubArray(vector<int>& nums){
            vector<int> f(nums.size());
            f[0]=nums[0];
            for (int i=1;i<nums.size();++i){
                f[i]=max(f[i-1]+nums[i],nums[i]);
            }
            return *max_element(f.begin(),f.end());
        }
};

//Solution1 space:O(1)
class Solution{
    public:
        int maxSubArray(vector<int>& nums){
            int sum=nums[0];
            int ans=nums[0];
            for (int i=1;i<nums.size();++i){
                sum=max(sum+nums[i],nums[i]);
                if (sum>ans){
                    ans=sum;
                };
            }
            return sum;
        }
};

int main()
{
    vector<int> nums{ 1, 2, 5 };
    Solution s;
    auto result=s.maxSubArray(nums);
    cout<<result<<endl;
    system("pause");
    return 0;
};