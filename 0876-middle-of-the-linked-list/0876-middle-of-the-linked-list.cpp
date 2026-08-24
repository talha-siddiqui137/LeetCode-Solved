/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
//  */
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* temp = head;
//         int len = 1;
//         while(temp != NULL){
//             len++;
//             temp = temp->next;
//         }
//         int newLen;

//         if(len % 2 == 0){
//             newLen = len/2 ;
//         }else{
//             newLen = len/2 +1;
//         }

//         temp = head;
//         int track = 1;

//         while(temp != NULL){
//             if(track == newLen){
//                 break;
//             }else{
//                 temp = temp->next;
//                 track++;
//             }
//         }
//         return temp;
//     }
// };




class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while((fast != NULL) && (fast->next != NULL) ){
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};