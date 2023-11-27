#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;

class Node{
    public:
    Node *prev;
    int data;
    Node *next;
};

class LinkedList{
    private:
    Node *first;

    public:
    LinkedList(int A[] , int n){
    Node *last , *t;
    first = new Node;
    first->data = A[0];
    first->prev = NULL;
    first->next = NULL;
    last = first;
    for(int i=1 ; i<n ; i++){
        t=new Node;
        t->data = A[i];
        t->prev = last;
        t->next = NULL;
        last->next = t;
        last=t;
    }
    }

    void reverse() {
        Node *p = first;
        while (p != NULL) {
            Node *tmp = p->next;
            p->next = p->prev;
            p->prev = tmp;
            p = p->prev;
            if (p!=NULL && p->next == NULL) {
                first = p;
            }
    }
}
    void display(){
    Node *p = first;
    Node *q = first;
    while(p!=NULL){
        q=p;
        cout<<p->data<<" ";
        p=p->next;
    }
}
};

int main(){
   int arr[] = {1,2,3,4};
   LinkedList l(arr , 4);
   l.reverse();
   l.display();
return 0;
}