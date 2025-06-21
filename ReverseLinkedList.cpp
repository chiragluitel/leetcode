#include <iostream>
#include <vector>

using namespace std;

struct Node {
    int value;
    Node** next;
};


int main(){
    Node* head = new Node();
    Node* first = new Node();
    Node* second = new Node();

    head->next = &first;

    first->value = 1;
    first->next = nullptr;

    
    // cout << first << "  Head Ko Next:   " << **head->next.value << endl;
    cout << first << "  Head Ko Next:   " << (*(*head->next)).value << endl;
    delete head;
    delete first;
    delete second;
}
