//this is for sparse in c
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

int main(){
   struct sparse s;
   create(&s);
   display(s);
   
return 0;
}