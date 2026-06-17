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

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p;
        ListNode* q;
        int count=0, len=0;
        p=head;
        while(p)
        {
            len++;
            p=p->next;
        }
        p=nullptr;
        q=head;
        while(count<len-n)
        {
            count++;
            p=q;
            q=q->next;
        }
        if (p==nullptr)
            head = head->next;
        else
            p->next = q->next;
        delete q;
        q=nullptr;
        return head;
    }
};
