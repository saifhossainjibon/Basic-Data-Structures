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
void insert_at_tail(Node* &head, int val){
    Node* newNode= new Node(val);

    Node* temp= head;  
    if(head==NULL){
        head=newNode;
        return;
    }
    while(temp->next !=NULL){
        temp = temp->next;
    }
    temp->next=newNode;
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
    // Node* head=new Node(200);
    Node* head=NULL;
    // insert_at_head(head,100);
    insert_at_tail(head,300);
    insert_at_tail(head,200);
    insert_at_tail(head,10);

    print_link_list(head);
    // cout<<head->val;
    return 0;
}
