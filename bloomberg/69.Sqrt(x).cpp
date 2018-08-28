#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include<windows.h>
using namespace std;
// Author: Huahua
// Running time: 12 ms
class Solution {
public:
  int mySqrt(int x) {      
    long l = 1;
    long r = x;
    while (l <= r) {
      long m = l + (r - l) / 2;
      if (m * m > x) { 
        r = m-1;
      } else {
        l = m + 1;
      }
    }
    // l: smallest number such that l * l > x
    return r;
  }
};

int main()
{
    Solution s;
    auto result=s.mySqrt(4);
    cout << result << " ";
    system("pause");
    return 0;
};