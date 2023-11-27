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

int deletion(struct Node *p , int i){
    int x = -1;
    if(i<=0 || i>counter(p))return -1;
    else{
        struct Node *t = new Node ;
        if(i==1){
            t = first;
            x = first->data;
            first = first->link;
            delete t;
            return x;
        }
        else{
            struct Node *q = new Node ;
            for(int j=1 ; j<i ; j++){
                q=p;
                p=p->link;
            }
            q->link = p->link;
            x = p->data;
            delete p;
            return x;
        }
    }
}

bool ifsorted(struct Node *p){
    int count=0;
    if(p==NULL)return 1;
    else{
        int x = MIN_INT;
        while(p){
            if(x<p->data){
                x=p->data;
                p=p->link;
                count++;}
            else {
                deletion(first , count);
                return false;}
        }
        return true;
    }
}

void reverse(struct Node *p){
    struct Node *q = NULL;
    struct Node *r = NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->link;
        q->link = r;
    }
    first = q;

}


int main(){
    int arr[] = {1,2,33,45,5 , 7 ,37, 56};
    create(arr,  8);
    reverse(first);
    recdis(first);
    // cout<<ifsorted(first)<<endl;
    // recdis(first);
    // cout<<endl;
    // cout<<ifsorted(first)<<endl;
    
return 0;
}