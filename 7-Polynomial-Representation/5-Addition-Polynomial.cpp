#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;

struct term{
    int exp;
    int coe;
};

struct poly{
    int n;
    struct term *t;
};

void create(int n , struct poly* s){
    s->n = n;
    s->t = new term[n];
    for(int i=0 ; i<n ; i++){
        cin>>s->t[i].coe>>s->t[i].exp;
    }
}

void display(int x , struct poly s){
    int sum=0;
    for(int i=0 ; i<s.n ; i++){
        sum+=pow(x , s.t[i].exp)*s.t[i].coe;
    }
    cout<<sum<<endl;
}

struct poly* add(struct poly a , struct poly b){
    int i=0 ,j=0 , k=0;
    struct poly* p = new poly;
    p->n = 0;
    p->t = new term[a.n + b.n];
    while(i<a.n && j<b.n){
        if(a.t[i].exp>b.t[j].exp){
            p->t[k++]=a.t[i++];
        }
        else if(a.t[i].exp<b.t[j].exp){
            p->t[k++]=b.t[j++];
        }
        else{
            p->t[k] = b.t[j++];
            p->t[k++].coe += a.t[i++].coe;
        }
        p->n++;
    }
    for(; i<a.n ; i++){
        p->t[k++] = a.t[i];
        p->n++;}
    for(; j<b.n ; j++){
        p->t[k++] = b.t[j];
        p->n++;}
    return p;
} 

int main(){
   struct poly p , s , *a;
   create(1 , &p);
   create(5 , &s);
   a = add(p , s);
   display(1 , *a);
return 0;
}