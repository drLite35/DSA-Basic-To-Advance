#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
class Node{
    public:
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
        last = first;
        last->next = first;
        for(int i=1 ; i<n ; i++){
            t=new Node;
            t->data = A[i];
            last->next = t;
            last=t;
            last->next = first;
        }
    }
    void display(){
        Node *p = first;
        cout<<p->data<<" ";
        p=p->next;
        while(p!=first){
            cout<<p->data<<" ";
            p=p->next;
        }

    }//using recdis we can use a flag
    void insert(int index , int x){

    }
    int deletion(int index){

    }
    int length(){

    }

};

int main(){
   int arr[] = {1,2,3,4,55};
   LinkedList l(arr , 5);
   l.display();
return 0;
}