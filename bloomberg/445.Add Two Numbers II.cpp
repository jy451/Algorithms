#include <iostream>
#include <vector>
#include "stack.h"
#include <algorithm>
#include<windows.h>
using namespace std;
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1, s2;
        for (auto node = l1; node; node = node->next) s1.push(node->val);
        for (auto node = l2; node; node = node->next) s2.push(node->val);
        ListNode* tail = nullptr;
        int carry = 0;
        while (carry || !s1.empty() || !s2.empty()) {
            int sum = carry;
            if (!s1.empty()) {
                sum += s1.top(); s1.pop();
            }
            if (!s2.empty()) {
                sum += s2.top(); s2.pop();
            }
            auto head = new ListNode(sum % 10);
            carry = sum / 10;
            head->next = tail;
            tail = head;
        }
        return tail;
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