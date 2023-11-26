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

int maxi(struct Node *p){
    int max = p->data;
    while(p!=NULL){
        if(p->data>max)max=p->data;
        p=p->link;
    }
    return max;
}

int recmax(struct Node *p){
    int max;
    if(p==0)return MIN_INT;
    max = recmax(p->link);
    return max>p->data ? max : p->data;  
}

int main(){
    int arr[] = {1,2,3,47,5};
    create(arr,  5);
    cout<<recmax(first);
return 0;
}