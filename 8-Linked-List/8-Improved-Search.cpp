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

bool transpose(struct Node *p , int key){
    struct Node *q = NULL;
    while(p!=NULL){
        if(p->data==key){
            q->link = p->link;
            p->link = first;
            first = p;
            return true;
        }
        else {
            q=p;
            p=p->link;
        }
    }
    return false;
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

int main(){
    int arr[] = {1,2,3,47,5};
    create(arr,  5);
    cout<<transpose(first , 5)<<endl;
    cout<<transpose(first , 47)<<endl;
    recdis(first);
   
return 0;
}