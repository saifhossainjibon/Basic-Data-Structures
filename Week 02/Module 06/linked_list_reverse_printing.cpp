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
// Printing reverse linked list
void print_reverse_linked_list(Node* temp){
    if (temp==NULL){
        return;
    }
    print_reverse_linked_list(temp->next);
    cout<<temp->val<<endl;
}
int main(){
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* tail=new Node(30);
    head->next=a;
    a->next=tail;
    // Node* head=NULL;
    insert_at_head(head, 500);
    insert_at_tail(head,tail,40);
    insert_at_tail(head,tail,50);
    insert_at_tail(head,tail,60);
    

    print_reverse_linked_list(head);
    // print_link_list(head);
    // cout<<"tail "<< tail->val;
    return 0;
}
