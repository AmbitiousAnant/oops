#include<iostream>
using namespace std;
//self refrential classes
class node{
    public:
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};

int main(){
    node*first= new node(10);
    node*second= new node(20);
    node*third=new node(30);
    first->next=second;
    second->next=third;
    node*temp=first;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}