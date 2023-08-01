#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int * arr(int n){
    int *p;
    p=new int[n];
    return p;
}
int main(){
   int *a;
   a=arr(5);
   a[0]=54;
   cout<<a[0];
return 0;
}