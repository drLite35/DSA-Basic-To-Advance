#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
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

void recdis(struct Node *first){
    struct Node *p = new Node;
    p = first;
    if(p!=NULL){
        cout<<p->data<<" ";
        recdis(p->link);
        cout<<p->data<<" ";
    }
}


int main(){
    int arr[] = {1,2,3,4,5};
   create(arr,  5);
   recdis(first);
return 0;
}