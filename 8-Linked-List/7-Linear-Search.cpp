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

bool search(struct Node *p , int key){
    while(p!=NULL){
        if(p->data==key)return true;
        else p=p->link;
    }
    return false;
}

bool rsearch(struct Node *p , int key){
   if(p==NULL)return false;
   else{
    if(p->data==key)return true;
    return rsearch(p->link , key);
   }
}



int main(){
    int arr[] = {1,2,3,47,5};
    create(arr,  5);
    cout<<rsearch(first , 5)<<endl;
    cout<<search(first , 7);
return 0;
}