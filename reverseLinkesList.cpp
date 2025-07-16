#include <iostream>
using namespace std;

//try to understand code before writing or copying

struct node{
    int data;
    node* link;
};

void reverseLL(node*& head){
    node *p, *c, *n;
    p=nullptr;
    c=head;
    while (c!=nullptr){
        n=c->link;
        c->link=p;
        p=c;
        c=n;
    }
    head=p;
}


void displayList(node* head){
    node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->link;
    }
    cout<<"NULL\n";
}
int main(){
    //manually creating three nodes and filling them with random numbers
    node* head=new node();
    node* tmp1=new node();
    node* tmp2=new node();
    node* tmp3=new node();
    head->link=tmp1;
    tmp1->data=15;
    tmp1->link=tmp2;
    tmp2->data=500;
    tmp2->link=tmp3;
    tmp3->data=955;
    tmp3->link=nullptr;


    cout<<"the list before reversing "<<endl;
    displayList(head);
    
    cout<<endl<<"list after reversing"<<endl;
    reverseLL(head);
    displayList(head);
    return 0;
}