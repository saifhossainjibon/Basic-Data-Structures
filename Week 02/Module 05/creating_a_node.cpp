#include<bits/stdc++.h>
using namespace std;

// class Node
// {
//     public:
//         int value;
//         Node* next;     
//     Node(int value){
//         this->value=value;
//         this->next=NULL;
//     }
// };
class Node{
    public:
        int val;
        Node* next;
    // do it with a consstactor 
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

int main(){
    Node a(11),b(22),c(33);
    // a.val=10;
    // b.val=20;
    // c.val=30;

   a.next=&b;
   b.next=&c;
    // c.next=NULL;

    cout << a.val<<" "<<b.val<< " "<<c.val<<endl;
    // cout<< a.val<<endl;
    // cout<< (*a.next).val<<endl;
    // // cout<< a.next->val<<endl;
    // cout<< a.next->next->val<<endl;
    // // cout<< (*(*a.next).next).val<<endl;


    return 0;
}