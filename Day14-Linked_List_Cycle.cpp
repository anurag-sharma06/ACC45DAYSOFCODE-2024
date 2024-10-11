#include<iostream>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != NULL && slow != NULL){
            fast = fast -> next;
            if(fast != NULL){
                fast = fast -> next;
            }
            else{
                break;
            }

            slow = slow -> next;

            if(slow == fast){
                return true;
            }
            
        }
        return false;
    }
};

int main(){
    
    return 0;
}