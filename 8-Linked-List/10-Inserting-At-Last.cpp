#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
const int MIN_INT = std::numeric_limits<int>::min();

using namespace std;

struct Node{
    int data;
    struct Node *link;
}*first;


void create(int arr[] , int n){
    struct Node *tail , *current;
    first = new Node;
    first->data = arr[0];
    first->link = NULL;
    tail = first;
    for(int i=1 ; i<n ; i++){
        current = new Node;
        current->data = arr[i];
        current->link= NULL;
        tail->link = current;
        tail = current;
    }
}

int counter(struct Node *p){
    int count =0;
    while(p!=NULL){
        count++;
        p=p->link;
    }
    return count;
}

void recdis(struct Node *first){
    struct Node *p = new Node;
    p = first;
    if(p!=NULL){
        cout<<p->data<<" ";
        recdis(p->link);
        // cout<<p->data<<" ";
    }
}


void insertLast(struct Node *p , int x){
    struct Node *t = new Node ;
    struct Node *q = new Node;
    t->data = x;
    t->link = NULL;
    if(p==NULL){
        first = t;
    }
    while(p){
        q=p;
        p=p->link;
    }
    q->link = t;
    
}

int main(){
    // int arr[] = {1,2,3,47,5};
    // create(arr,  5);
    // insertLast(first ,6);
    insertLast(first ,10);
    recdis(first);
return 0;
}