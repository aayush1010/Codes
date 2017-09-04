#include<iostream>
#include<conio.h>

using namespace std;

struct node{
    int data;
    node *next;
};

struct node *head1, *head2, *head3;

node* createnode(int n){
    node *temp = new node();
    temp -> data = n;
    temp -> next = NULL;
    return temp;
}

void print(node *temp){
    while(temp != NULL){
        cout << temp ->  data;
        temp = temp -> next;
    }
}

node* sum(node *temp1, node *temp2){
    node *pos = head3;
    node *temp3;
    int i = 0;
    int a, c = 0, p;
    while (temp1 != NULL || temp2 != NULL){
      if(temp1 != NULL && temp2 != NULL){
        a = temp2 -> data + temp1 -> data + c;
        p = a%10;
        c = a/10;
        if(i == 0){
          temp3 = createnode(p);
          head3 = temp3;
          pos = temp3;
          i++;
        }
        else{
            temp3 = createnode(p);
            pos -> next = temp3;
            pos = pos-> next;
        }
        temp1 = temp1 -> next ;
        temp2 = temp2 -> next;
    }
    else if (temp1 == NULL){
        while(temp2 != NULL){
            a = temp2 -> data +c;
            p = a%10;
            c = a/10;
            temp3 = createnode(p);
            pos -> next = temp3;
            pos = pos-> next;
            temp2 = temp2-> next;
        }
    }
    else if (temp2 == NULL){
        while(temp1 != NULL){
            a = temp1 -> data +c;
            p = a%10;
            c = a/10;
            temp3 = createnode(p);
            pos -> next = temp3;
            pos = pos-> next;
            temp1 = temp1-> next;
        }
    }
}
 return head3;
}

int main(){
    node *temp, *pos1, *pos2;
    for (int i = 0; i < 5; i++){
        if (i == 0){
            temp = createnode(i);
            head1 = temp;
            pos1 = temp;
        }
        else{
            temp = createnode(i);
            pos1 -> next = temp;
            pos1 = pos1 -> next;
        }
    }
    for (int i = 0; i < 4; i++){
        if (i == 0){
            temp = createnode(i);
            head2 = temp;
            pos2 = temp;
        }
        else{
            temp = createnode(i);
            pos2 -> next = temp;
            pos2 = pos2 -> next;
        }
    }
    head3 = sum(head1, head2);
    print (head3);
    return 0;
}
