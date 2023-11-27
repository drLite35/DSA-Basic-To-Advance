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
        first->next = first;
        first->prev = first;
        last = first;
        for(int i=1 ; i<n ; i++){
            t=new Node;
            t->data = A[i];
            t->prev = last;
            last->next = t;
            first->prev = t;
            last=t;
            last->next = first;
        }
    }
    
    void display(){
        Node *p = first;
        cout<<p->data<<" ";
        p=p->next;
        Node *q = first;
        while(p!=first){
            q=p;
            cout<<p->data<<" ";
            p=p->next;
        }
    }


    void insert(int index , int x){
        if(index<0 || index>length())return ;
        else{
            Node *t = new Node;
            if(index==0){
                if(first==NULL){
                    t->prev = t;
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
                    t->prev = p;
                    first->prev = t;
                    p->next = t;
                    first = t;
                }
            }
            else{
                Node *p = first;
                for(int i=1 ; i<index;  i++)p=p->next;
                Node *t = new Node;
                t->data = x;
                t->prev = p;
                t->next = p->next;
                if(p->next){
                    p->next->prev = t;
                }
                p->next =t;
            }
        }
    }
    int deletion(int index){
        int x=-1;
        if(index<1 || index>length()){
            return -1;
        }
        if(index==1){
            if(first==first->next){
                delete first;
                first = NULL;
                return x;
            }
            else{
                Node *p = first;
                x = first->data;
                first->prev->next = first->next;
                first->next->prev = first->prev;
                first=first->next;
                delete p;
                return x;
            }
        }
        else{
            Node *p = first;
            for(int i=1 ; i<index ; i++){
                p=p->next;
            }
            x=p->data;
            p->prev->next = p->next;
            if(p->next){
                p->next->prev = p->prev;
            }
            delete p;
        }
        return x;
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
   LinkedList l(arr , 4);
   l.insert(0 , 55);
   l.insert(0 , 50);
   l.insert(2 , 5);
   cout<<l.deletion(5)<<endl;
   l.display();
   cout<<endl;
   cout<<l.length();
   cout<<endl;
return 0;
}