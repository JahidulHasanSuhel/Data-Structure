#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};
void insertAtHead(node* &head, int d){
    node* temp = new node(d);
    temp-> next = head;
    head = temp;
}
void insertAtTail(node* &tail, int d){
    node* temp = new node(d);
    tail->next=temp;
    tail=temp;
}
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
}
void insertAtPosition(node* tail, node* head, int position, int d){
    if(position == 1){
        insertAtHead(head, d);
        return;
    }
    node* temp = head;
    int cnt = 1;
    while(cnt < position - 1){
        temp = temp -> next;
        cnt++;
    }
    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }
    node* nodetoinsert = new node(d);
    nodetoinsert -> next = temp -> next;
    temp -> next = nodetoinsert;
}
void deleteNode(int position, node* &head){
    if(position==1){
        node* temp = head;
        head = head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        node* curr = head;
        node* prev = NULL;
        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr-> next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}


int main(){
system("cls");
    node* node1 = new node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next;
    node* head = node1;
    node* tail = node1;
    print(head);

    insertAtTail(tail, 30);
    print(head);

    insertAtTail(tail, 34);
    print(head);

    insertAtPosition(tail,head,4, 33);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<" "<<endl;

    deleteNode(3,head);
    print(head);

    getch();
    return 0;
}
