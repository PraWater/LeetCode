/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *head = new ListNode();
        ListNode *a = new ListNode();
        ListNode *b = new ListNode();
        ListNode *current = new ListNode();
        if (list1 == nullptr && list2 == nullptr)
            return nullptr;
        else if (list1 == nullptr)
        {
            return list2;
        }
        else if (list2 == nullptr)
        {
            return list1;
        }
        if (list1->val > list2->val)
        {
            a = list1;
            b = list2->next;
            head = list2;
        }
        else
        {
            a = list1->next;
            b = list2;
            head = list1;
        }
        current = head;
        while (a != nullptr | b != nullptr)
        {
            if (a == nullptr)
            {
                current->next = b;
                b = b->next;
            }
            else if (b == nullptr)
            {
                current->next = a;
                a = a->next;
            }
            else if (a->val > b->val)
            {
                current->next = b;
                b = b->next;
            }
            else
            {
                current->next = a;
                a = a->next;
            }
            current = current->next;
        }
        return head;
    }
};
// @lc code=end
