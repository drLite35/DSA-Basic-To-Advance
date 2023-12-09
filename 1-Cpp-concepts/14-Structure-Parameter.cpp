#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
struct rect{
    int len;
    int wid;
};
void func(struct rect *r){
    r->len=40;
    cout<<(*r).len<<" "<<(*r).wid<<endl;
}
int main(){
   struct rect r;
   r.len=10;
   r.wid=20;
   func(&r);
return 0;
}