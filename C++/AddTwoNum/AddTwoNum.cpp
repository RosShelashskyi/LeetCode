#include <iostream>
struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr){}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode *l1, ListNode *l2){
    bool end = false;
    ListNode* l1copy = l1;
    ListNode* l2copy = l2;
    int carry = 0;
    
    do{
       if(l1copy->val + l2copy->val + carry >= 10){
            l1copy->val += l2copy->val + carry - 10;
            if(carry == 1){
                carry--;
            }
            carry++;
        }else{
            l1copy->val += l2copy->val + carry;
            if(carry == 1){
                carry--;
            }
        }
        if(l1copy->next != NULL && l2copy->next != NULL){
            l1copy = l1copy->next;
            l2copy = l2copy->next;
        }else if(l1copy->next != NULL && l2copy->next == NULL){
            l1copy = l1copy->next;
            l2copy->next = new ListNode(0);
            l2copy = l2copy->next;
        }else if(l1copy->next == NULL && l2copy->next != NULL){
            l1copy->next = new ListNode(0);
            l1copy = l1copy->next;
            l2copy = l2copy->next;
        }
    }
    while(!end);
    return l1;
}

int main(){
    return 0;
}