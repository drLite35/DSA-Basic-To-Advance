#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;

class Node{
    public :
    int col;
    int data;
    Node *next;
};

class Sparse{
    private :
    Node *A[5];

    public :
    void create(){
        for(int i=0 ; i<5 ; i++){
            Node *last = NULL;
            A[i]=NULL;
            for(int j=0 ; j<5 ; j++){
                int a;
                cin>>a;
                if(a!=0){
                    Node *t = new Node;
                    t->col = j;
                    t->data = a;
                    t->next = NULL;
                    if(A[i]==NULL){
                        A[i]=t;
                        last = t;}
                    else {
                        last->next = t;
                        last = t;}
                }
            }
        }
    }
    
    void display(){
        for(int i=0; i<5 ; i++){
            Node *p = A[i];
            for(int j =0 ; j<5 ; j++){
                if(p!=NULL &&  j==p->col ){
                    cout<<p->data<<" ";
                    p=p->next;}
                else cout<<0<<" ";
            }
            cout<<endl;
        }
    }


};
int main(){
   Sparse s;
   s.create();
   cout<<endl;
   s.display();
return 0;
}