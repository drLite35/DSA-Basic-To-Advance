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

int counter(struct Node *p){
    int count =0;
    while(p!=NULL){
        count++;
        p=p->link;
    }
    return count;
}

int reccount(struct Node *p){
    if(p==NULL)return 0;
    else{
        return 1+reccount(p->link);
    }
}

int main(){
   int arr[] = {1,2,3,4,5};
   create(arr,  5);
   cout<<counter(first)<<endl;
   cout<<reccount(first)<<endl;
return 0;
}