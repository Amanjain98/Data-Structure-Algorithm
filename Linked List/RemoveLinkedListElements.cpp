/**
Question:
Remove all elements from a linked list of integers that have value val.

Example:

Input:  1->2->6->3->4->5->6, val = 6
Output: 1->2->3->4->5

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
    ListNode* removeElements(ListNode* head, int val) {
        //traverse on linkedlist
        if(head == NULL){
            return head;
        }
        if(head->val == val){
            head = head->next;
        }
        ListNode* Current = head;
        while(Current!=NULL && Current->next != NULL){
            if(Current->next->val == val){
                Current->next = Current->next->next;
            }
            else{
                Current = Current->next;
            }
        }
        if(head!=NULL && head->val==val)
        return head->next;
        return head;
    }
};