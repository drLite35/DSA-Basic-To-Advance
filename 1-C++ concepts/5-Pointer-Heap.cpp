#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
 
int main(){
   int a[5] = {1,2,3,4,5};
   int *p;
   p=a;
   for(int i=0 ; i<5 ; i++)cout<<a[i]<<" "<<p[i]<<" "<<endl;
   int *p1 = (int*)malloc(5*sizeof(int));
   for(int i=0 ; i<5 ; i++)p1[i]=p[i];
   for(int i=0 ; i<5 ; i++)cout<<p1[i]<<" "<<endl;
   int *p2 = new int[5];
   p2[0]=56;
   cout<<p2[0];
   free(p1);
   delete [] p2;
return 0;
}