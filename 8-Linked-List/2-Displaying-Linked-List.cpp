#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;

struct Node{
    int data;
    struct Node *link;
}*head = NULL;

void create(int arr[] , int n){
    struct Node *tail , *current;
    head = new Node;
    head->data = arr[0];
    head->link = NULL;
    tail = head;
    for(int i=1 ; i<n; i++){
        current = new Node;
        current->data = arr[i];
        current->link = NULL;
        tail->link= current;
        tail = current;
    }
}

void display(struct Node *head){
    struct Node *p = head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->link;
    }
}
int main(){
   int arr[] = {1,2,4,5,6};
   create(arr , 5);
   display(head);
return 0;
}