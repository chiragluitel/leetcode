#include <iostream>
#include <vector>

using namespace std;


struct ListNode{
    int val;
    ListNode* next;

    ListNode(){
        this->val = 0;
        this->next = nullptr;
    }
    ListNode(int x){
        this->val = x;
        this->next = nullptr;
    }

    ListNode(int x, ListNode* next){
        this->val = x;
        this->next = next;
    }
};

ListNode* reverseList(ListNode* head){
    //|0->  |   1->  |   2->  |  3 -> null |
    //(Head)                        (Current)
    ListNode* curr = head;
    ListNode* prev = nullptr;

    while(curr){
        ListNode* temp = curr->next; //Storing 1;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;

}

int main(){
    ListNode* fourth = new ListNode(3);
    ListNode* third = new ListNode(2, fourth);
    ListNode* second = new ListNode(1, third);
    ListNode* first = new ListNode(0, second);
    ListNode* head = first;

    //|0->  |   1->  |   2->  |  3 -> null |
    //(Head)
    reverseList(head);
    return 0;
}