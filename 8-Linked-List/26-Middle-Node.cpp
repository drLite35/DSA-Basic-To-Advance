#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

class LinkedList{
    private:
    Node *first;
    public:
    LinkedList(int arr[] , int n ){
        Node *last , *t;
        first = new Node;
        first->data = arr[0];
        first->next = NULL;
        last = first;
        for(int i=1 ; i<n;  i++){
            t=new Node;
            t->data = arr[i];
            t->next = NULL;
            last->next = t;
            last=t;
        }
    }

    void mid(){
        Node *p = first;
        Node *q = first;
        while(q){
            q=q->next;
            if(q)q=q->next;
            if(q)p=p->next;
        }
        cout<<p->data;
    }
};
int main(){
   int arr[] = {1,2,3,4,5,6,7,8,9};
   LinkedList l(arr , 9);
   l.mid();
return 0;
}