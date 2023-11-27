#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;

class Node{
    public:
    int coe;
    int exp;
    Node *next;
};

class Poly{
    private:
    Node *p = new Node;

    public:
    void create(int n){
        int c , e;
        cin>>c>>e;
        p->coe = c;
        p->exp = e;
        p->next = NULL;
        Node *last = p;
        for(int i=1 ; i<n ; i++){
            Node *t = new Node;
            cin>>c>>e;
            t->coe = c;
            t->exp = e;
            t->next = NULL;
            last ->next = t;
            last = t;
        }
    }

    int sum(int x){
        int sum = 0;
        Node *tmp = p;
        while(tmp){
            sum+= tmp->coe * (pow(x , tmp->exp));
            tmp=tmp->next;
        }
        return sum;
    }
};
int main(){
   Poly p;
   p.create(2);
   cout<<p.sum(5);
return 0;
}