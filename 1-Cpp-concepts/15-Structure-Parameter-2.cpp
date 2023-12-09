#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
struct rect{
    int len;
    int wid;
};
struct rect *fun(){
    struct rect *p;
    p=new rect;
    p->len=15;
    p->wid=20;
    return p;
}
int main(){
   struct rect *r = fun();
   cout<<(*r).len;
return 0;
}