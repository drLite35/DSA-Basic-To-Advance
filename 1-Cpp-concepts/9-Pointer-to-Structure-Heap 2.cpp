#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;

struct rect{
    int len;
    int wid;
};

int main(){
   rect *p1 ,  *p2;
   p1 = new rect;
   p1->len=20;
   cout<<p1->wid<<endl;
   p2=(struct rect *)malloc(sizeof(struct rect));
   p2->wid=40;
   cout<<p2->len;
return 0;
}