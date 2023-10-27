#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
struct elements{
    int i;
    int j;
    int x;
};

struct sparse{
    int n;
    int m;
    int num;
    struct elements *e;
};

void create(struct sparse *s){
    int a , b , c;
    cin>>a>>b>>c;
    s->n=a;
    s->m=b;
    s->num=c;
    s->e = new elements[s->num];
    for(int k=0 ; k<s->num ; k++){
        int a , b, c;
        cin>>a>>b>>c;
        s->e[k].i=a;
        s->e[k].j=b;
        s->e[k].x=c;
    }
}

void display(struct sparse s){
    int a=0;
    for(int k=0 ; k<s.n ; k++){
        for(int l=0 ; l<s.m ; l++){
            if(k==s.e[a].i && l==s.e[a].j){
                cout<<s.e[a].x<<" ";
                a++;}
            else cout<<0<<" ";
        }
        cout<<endl;
    }
}

struct sparse *addition(struct sparse* a , struct sparse* b){
    int i=0 , j=0 , k=0;
    struct sparse* p;
    p = new sparse;
    p->e = new elements[a->num + b->num];
    p->m = a->m;
    p->n = a->n;
    p->num = 0;
    // if(a->m!=b->m || a->n!=b->n)return 0;
    // else{
        while (i < a->num && j < b->num) {
        if (a->e[i].i < b->e[j].i) {
            p->e[k] = a->e[i];
            i++;
        } else if (a->e[i].i > b->e[j].i) {
            p->e[k] = b->e[j];
            j++;
        } else {
            if (a->e[i].j < b->e[j].j) {
                p->e[k] = a->e[i];
                i++;
            } else if (a->e[i].j > b->e[j].j) {
                p->e[k] = b->e[j];
                j++;
            } else {
                p->e[k] = a->e[i];
                p->e[k].x += b->e[j].x;
                i++;
                j++;
            }
        }
        k++;
        p->num++;
    }

    
    while (i < a->num) {
        p->e[k] = a->e[i];
        i++;
        k++;
        p->num++;
    }

    while (j < b->num) {
        p->e[k] = b->e[j];
        j++;
        k++;
        p->num++;
    }
    return p;

}

int main(){
   struct sparse s;
   create(&s);
   display(s);cout<<endl;
   struct sparse a;
   create(&a);
   display(a);cout<<endl;
   struct sparse* b;
   b = addition(&a , &s);
   display(*b);
return 0;
}