#include<iostream>

using namespace std;

struct node{
    int data;
    node *next;
};

node* createNode(int n){
    node *temp = new node;
    temp->data = n;
    temp->next = NULL;
    return temp;
}

node* createList(int n){
    node *head, *temp, *prev;
    int t;
    for(int i=0; i < n; i++){
        cin >> t;
        temp = createNode(t);
        if(i == 0){
            prev = temp;
            head = temp;
        }
        else{
            prev -> next = temp;
            prev = temp;
        }
    }
    return head;
}

void swapnode(node *head, int x, int y){
    node *temp = head;
    while(temp -> next)
}

void printList(node *head){
    node *temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    int n;
    cin >> n;
    node *head = createList(n);
    swapnode(head,1,5);
    printList(head);
    return 0;
}
