#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;


class Node{
    public:
    Node *prev;
    int data;
    Node *next;
};


class LinkedList{
    private:
    Node *first;
    public:
    LinkedList(){
        first=NULL;
    }
    LinkedList(int A[] , int n){
        Node *last , *t;
        first = new Node;
        first->data = A[0];
        first->prev = NULL;
        first->next = NULL;
        last = first;
        for(int i=1 ; i<n ; i++){
            t=new Node;
            t->data = A[i];
            t->prev = last;
            t->next = NULL;
            last->next = t;
            last=t;
        }
    }

    void display(){
        Node *p = first;
        Node *q = first;
        while(p!=NULL){
            q=p;
            cout<<p->data<<" ";
            p=p->next;
        }
        while(q!=NULL){
            cout<<q->data<<" ";
            q=q->prev;
        }
    }

    // void insert(int index , int x){
    //     if(index<0 || index>length())return ;
    //     else{
    //         Node *t = new Node;
    //         if(index==0){
    //             if(first==NULL){
    //                 t->data = x;
    //                 t->next = t;
    //                 first = t;
    //             }
    //             else{
    //                 Node *p = first;
    //                 p=p->next;
    //                 while(p->next!=first){
    //                     p=p->next;
    //                 }
    //                 t->data = x;
    //                 t->next = first; 
    //                 p->next = t;
    //                 first = t;
    //             }
    //         }
    //         else{
    //             Node *p = first;
    //             for(int i=1 ; i<index;  i++)p=p->next;
    //             Node *t = new Node;
    //             t->data = x;
    //             t->next = p->next;
    //             p->next =t;
    //         }
    //     }
    // }
    // int deletion(int index){
    //     int x=-1;
    //     if(index<1 || index>length()){
    //         return -1;
    //     }
    //     if(index==1){
    //         if(first==first->next){
    //             delete first;
    //             first = NULL;
    //             return x;
    //         }
    //         else{
    //             Node *p = first;
    //             Node *q = first;
    //             x = first->data;
    //             while(q->next!=first){
    //                 q=q->next;
    //             }
    //             first=first->next;
    //             q->next = first;
    //             delete p;
    //             return x;
    //         }
    //     }
    //     else{
    //         Node *q = NULL;
    //         Node *p = first;
    //         for(int i=1 ; i<index ; i++){
    //             q=p;
    //             p=p->next;
    //         }
    //         q->next = p->next;
    //         x=p->data;
    //         delete p;
    //     }
    //     return x;
    // }

    // int length(){
    //     int ans=0;
    //     if(first==NULL)ans=0;
    //     else{
    //         Node *p = first;
    //         p=p->next;
    //         ans++;
    //         while(p!=first){
    //             ans++;
    //             p=p->next;}
    //     }
    //     return ans;
    // }

};

int main(){
   int arr[] = {1,2,3,4};
   LinkedList l(arr , 4);
//    l.insert(0 , 55);
//    l.insert(0 , 50);
//    l.insert(2 , 5);
//    cout<<l.deletion(4)<<endl;
   l.display();
   cout<<endl;
//    cout<<l.length();
   cout<<endl;
return 0;
}