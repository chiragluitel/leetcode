#include <iostream>
#include <vector>

using namespace std;

struct ListNode{
    int value;
    ListNode* next;
    ListNode(int val){
        value = val;
        next = nullptr;
    }

    ListNode(){
        value=0;
        next = nullptr;
    }
    ListNode(int val, ListNode* pnext){
        value = val;
        next = pnext;
    }

};


// ListNode* mergeTwolist(ListNode* list1, ListNode* list2){
//     //1    ->     2 ->     5
//   //(list1)
//   //  l

//     //1    ->     3 ->     4
//   //(list2)
//   //  r

//     //Pointers
//     ListNode* l = list1;//1
//     ListNode* r = list2;//1
//     ListNode* toReturn;
//     if(l->value< r->value){
//         toReturn = list1;
//     }else{
//         toReturn = list2;
//     }
//     while(l != nullptr && r != nullptr){
//         if ((l->value) <= (r->value)){ //1 <= 1? Yes
//             ListNode* templ = l->next;//Store 2 so that it doesn't get lost
//             l->next = r;
//             l = templ; //move l to second element;
//         }else{ //When 2 ! > 1
//             ListNode* tempr = r->next; //Store 3 so that it doesn't get lost
//             r->next = l;
//             r = tempr;
//         }
//     }

//     return toReturn;
// }


ListNode* mergeTwolist(ListNode* list1, ListNode* list2){
    ListNode dummy(0);

    ListNode* node = &dummy;

    while (list1 && list2){
        if(list1->value < list2->value){
            node->next = list1;
            list1 = list1->next;
        }else{
            node->next = list2;
            list2 = list2->next;
        }
        node = node->next;
    }

    if(list1){
        node->next = list1;
    }else{
        node->next = list2;
    }

    return dummy.next;
}
int main() {
    ListNode* third = new ListNode(4);    
    ListNode* second = new ListNode(2, third);
    ListNode* first = new ListNode(1, second);
    ListNode* list1 = new ListNode();
    list1->next = first;

    ListNode* third2 = new ListNode(5);    
    ListNode* second2 = new ListNode(3, third2);
    ListNode* first2 = new ListNode(1, second2);
    ListNode* list2 = new ListNode();
    list2->next = first2;
    ListNode* result = mergeTwolist(list1, list2);

    cout << result->next->value << endl;
    cout << result->next->next->value << endl;
    cout << result->next->next->next->value << endl;
    cout << result->next->next->next->next->value << endl;
    cout << result->next->next->next->next->next->value << endl;
    return 0;
}

