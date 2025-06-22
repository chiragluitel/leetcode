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
    ListNode* result;
    return result;
}

int main(){
    ListNode* head = new ListNode();
    ListNode* first = new ListNode();
    ListNode* second = new ListNode();
    ListNode* third = new ListNode();
    ListNode* fourth = new ListNode();
    return 0;
}