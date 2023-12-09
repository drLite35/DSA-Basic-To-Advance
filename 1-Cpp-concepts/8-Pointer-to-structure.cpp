#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct rect{
    int len;
    int wid;
};
int main(){
   rect r ={10,5};
   cout<<r.len<<" "<<r.wid<<endl;
   rect *p=&r;
   p->len=20;
   p->wid=40;
   cout<<r.len<<" "<<r.wid;
return 0;
}