/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int x = l1->val + l2->val;
        l1 = l1->next;
        l2 = l2->next;
        bool carry{false};
        if (x > 9)
        {
            carry = true;
            x -= 10;
        }
        ListNode *ans = new ListNode(x);
        ListNode *curr = ans;
        while (l1 != nullptr | l2 != nullptr)
        {
            x = 0;
            if (l1 == nullptr)
            {
                x = l2->val;
                l2 = l2->next;
            }
            else if (l2 == nullptr)
            {
                x = l1->val;
                l1 = l1->next;
            }
            else
            {
                x = l1->val + l2->val;
                l1 = l1->next;
                l2 = l2->next;
            }
            if (carry)
                ++x;
            carry = false;
            if (x > 9)
            {
                carry = true;
                x -= 10;
            }
            curr->next = new ListNode(x);
            curr = curr->next;
        }
        if (carry)
        {
            curr->next = new ListNode(1);
        }
        return ans;
    }
};
// @lc code=end
