#include <iostream>

using namespace std;


struct node{
    int data;
    node* next;
};


//insert at beginning

void insertAtBeginning(node*& head, int value){
    node* newNode=new node();
    newNode->data=value;
    newNode->next=head;
    head=newNode;
}

//insertion at the end

void insertAtEnd(node*& head, int value){
    node* newNode=new node();
    newNode->data=value;
    newNode->next=nullptr;

    if(head==nullptr){
        head=newNode;
        return;
    }
    node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newNode;
}

//delete a node knowing the value

void deleteNode(node*& head, int key){
    node* temp=head;
    node* prev=nullptr;
    if(temp!=nullptr && temp->data==key){
        head=temp->next;
        delete temp;
        return;
    }

    while(temp!=nullptr && temp->data!=key){
        prev=temp;
        temp=temp->next;
    }
    if(temp==nullptr){
        cout<<"value "<<key<<" doesn\'t exist";
        return;
    }
    prev->next=temp->next;
    delete temp;
}

//display the linked list

void displayList(node* head){
    node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}

void freeList(node*& head){
    node* temp;
    while(head!=nullptr){
        temp=head;
        head=head->next;
        delete temp;
    }
}

int main(){
    node* head=nullptr;
    //insertion
    insertAtBeginning(head, 255);
    insertAtBeginning(head, 899);
    insertAtEnd(head, 12);
    insertAtEnd(head, 996);


    //deletion and display
    displayList(head);
    deleteNode(head, 12);
    displayList(head);

    //cleaning up memory
    freeList(head);
    return 0;
}