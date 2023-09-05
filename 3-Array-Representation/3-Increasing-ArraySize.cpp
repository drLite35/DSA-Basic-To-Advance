#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
 
int main(){
   int *p , *q;
   p = new int[2];
   p[0] = 190;
   p[1] = 2;
   q = new int[4];
   for(int i = 0 ; i<2 ; i++){
    q[i] = p[i];
   }
   delete []p;
   p=q;
   q=NULL;
   cout<<p[0];
return 0;
}