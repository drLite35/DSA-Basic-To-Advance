#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;

struct Node{
    int data;
    struct Node *link;
}*first , *second ,*third;

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

void creates(int arr[] , int n){
    struct Node *tail , *current;
    second = new Node;
    second->data = arr[0];
    second->link = NULL;
    tail = second;
    for(int i=1 ; i<n ; i++){
        current = new Node;
        current->data = arr[i];
        current->link= NULL;
        tail->link = current;
        tail = current;
    }
}

void recdis(struct Node *first){
    struct Node *p = new Node;
    p = first;
    if(p!=NULL){
        cout<<p->data<<" ";
        recdis(p->link);
    }
}

void merge(struct Node *p , struct Node *q){
    struct Node *last=NULL;
    if(first->data>second->data){
        third=second;
        last=second;
        second=second->link;
        last->link=NULL;
    }
    else {
        third=first;
        last=first;
        first=first->link;
        last->link=NULL;
    }
    while(first!=NULL && second!=NULL){
        if(first->data>second->data){
        last->link=second;
        last=second;
        second=second->link;
        last->link=NULL;
    }
    else {
        last->link=first;
        last=first;
        first=first->link;
        last->link=NULL;
    }
    }
    if(first!=NULL)last->link=first;
    else last->link=second;
}

int main(){
    int arr[] = {1,2,3,4,50};
    int arr2[] = {30,40,55};
   create(arr,  5);
   creates(arr2,3);
   recdis(second);
   recdis(first);
   merge(first , second);
   cout<<endl;
   recdis(first);
   cout<<endl;
   recdis(third);
return 0;
}