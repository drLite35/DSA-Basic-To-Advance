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

int main(){
   struct poly p;
   create(3 , &p);
   display(1 , p);
return 0;
}