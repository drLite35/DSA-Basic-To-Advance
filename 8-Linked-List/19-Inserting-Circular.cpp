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
        if(index<0 || index>length())return ;
        else{
            Node *t = new Node;
            if(index==0){
                if(first==NULL){
                    t->data = x;
                    t->next = t;
                    first = t;
                }
                else{
                    Node *p = first;
                    p=p->next;
                    while(p->next!=first){
                        p=p->next;
                    }
                    t->data = x;
                    t->next = first; 
                    p->next = t;
                    first = t;
                }
            }
            else{
                Node *p = first;
                for(int i=1 ; i<index;  i++)p=p->next;
                Node *t = new Node;
                t->data = x;
                t->next = p->next;
                p->next =t;
            }
        }
    }
    int deletion(int index){

    }
    int length(){
        int ans=0;
        if(first==NULL)ans=0;
        else{
            Node *p = first;
            p=p->next;
            ans++;
            while(p!=first){
                ans++;
                p=p->next;}
        }
        return ans;
    }

};

int main(){
   int arr[] = {1,2,3,4};
   LinkedList l;
   l.insert(0 , 55);
   l.insert(0 , 50);
   l.insert(2 , 5);
   l.display();
   cout<<l.length();
   cout<<endl;
return 0;
}