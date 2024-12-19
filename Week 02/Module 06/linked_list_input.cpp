#include<bits/stdc++.h>
using namespace std;


// Createing a node 
class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

// inserting node at the first of the list 
void insert_at_head(Node* &head, int val){
    Node* new_node =new Node(val);
    new_node->next=head;
    head= new_node;
}

// inserting at the tail 
void insert_at_tail(Node* &head,Node* &tail, int val){
    Node* newNode= new Node(val);

    Node* temp= head;  
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=tail->next;
    // tail=newNode;
}

// Printing the entire list 
void print_link_list(Node* &head){ //this line
    Node* temp= head;             //this line
    while(temp !=NULL){
        cout << temp-> val<<endl;
        temp = temp->next;
    }
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(true){
        cin>> val;
        if(val==-1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    print_link_list(head);

    return 0;
}
