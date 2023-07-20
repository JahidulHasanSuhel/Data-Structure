#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};
void insertathead(node* &tail, node* &head, int d){
    node* temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertattail(node* &tail,node* &head, int d){
    node* temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insertatposition(node* & tail, node* &head, int position, int d) {
    
    //insert at Start
    if(position == 1) {
        insertathead(tail,head, d);
        return;
    }

    node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertattail(tail,head,d);
        return ;
    }

    //creating a node for d
    node* nodeToInsert = new node(d);

    nodeToInsert ->next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}
// int lengthofNode(node* head){
//     int len = 0;
//     node* temp = head;
//     while(temp != NULL){
//         len++;
//         temp = temp->next;
//     }
//     return len;
// }
int main(){
system("cls");
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;

    insertathead(tail,head, 38);
    print(head);
    insertathead(tail,head, 30);
    print(head);

    insertattail(tail,head,50);
    print(head);
    insertattail(tail,head,100);
    print(head);

    insertatposition(tail, head, 3, 500);
    print(head);

    insertatposition(tail, head, 7, 900);
    print(head);

    getch();
    return 0;
}
