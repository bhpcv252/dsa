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

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
private:
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr) {
            return list2;
        }
        if(list2 == nullptr) {
            return list1;
        }

        ListNode* head = list2;
        ListNode* rest = list1;
        if(list1->val <= list2->val) {
            head = list1;
            rest = list2;
        }

        ListNode* current = head;
        ListNode* t = nullptr;
		while(current != nullptr && rest != nullptr) {
            ListNode* next = current->next;
            if(next != nullptr && next->val <= rest->val) {
                current = current->next;
            }
            else {
                t = current->next;
                current->next = rest;
                rest = t;
                t = nullptr;
                current = current->next;
            }
        }

        return head;
	}

};
